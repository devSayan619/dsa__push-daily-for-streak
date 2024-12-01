function knapsack(wt, val, n, w){
	const t = Array.from({ length: n + 1 }, () => Array(w + 1).fill(-1));
	function solve (n,w){
	
		if(n===0 || w===0){
			return 0;
		}
		if(t[n][w] !== -1 ){
			return t[n][w];
		}
		if(wt[n-1]<=w){
			t[n][w] =  Math.max(val[n-1]+solve(n-1,w-wt[n-1]),solve(n-1,w));
		}else{
			t[n][w] = solve(n-1,w);
		}
		return t[n][w];
	}
	return solve(n,w);
}

const wt = [10,20,30];
const val = [60, 100,120];
const w = 50;
const n = wt.length;

console.log(`The Maximum value of items the thief can steal is ${knapsack(wt,val,n,w)}`);