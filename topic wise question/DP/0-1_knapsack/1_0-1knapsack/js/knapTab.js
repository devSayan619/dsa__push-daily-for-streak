function knapsack(wt,val,w,n){
    const t = Array.from({ length: w + 1 }, () => Array(n + 1).fill(-1));
    function solve(w,n){
        for(let i = 0;i<=w;i++){
            for(let j = 0;j<=n;j++){
                if(i=== 0 || j=== 0){
                    t[i][j]=0;
                }
                else if(wt[j-1]<=i){
                    t[i][j]= Math.max(val[j-1]+t[i-wt[j-1]][j-1],t [i][j-1]);
                }else{
                    t[i][j] = t[i][j-1];
                }
            }
        }
        return t[w][n];
    }
    return solve(w,n);
}

const wt = [10,20,30];
const val = [60, 100,120];
const w = 50;
const n = wt.length;

console.log(`The Maximum value of items the thief can steal is ${knapsack(wt,val,w,n)}`);