function permute(ip, op, ans) {
  if (ip.length == 0) {
    ans.push(op);
    return;
  }

  let mpp = new Set();

  for (let i = 0; i < ip.length; i++) {
    if (!mpp.has(ip[i])) {
      mpp.add(ip[i]);
      let newIp = ip.substring(0, i) + ip.substring(i + 1);
      let newOp = op + ip[i];
      permute(newIp, newOp, ans);
    }
  }
}

function findPermute(s) {
  let ans = [];
  permute(s, "", ans);
  ans.sort();
  return ans;
}

const readline = require("readline");

const r1 = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

r1.question("Enter a string : ", function (s) {
  let permutation = findPermute(s);
  console.log(permutation.join(" "));
  r1.close();
});
