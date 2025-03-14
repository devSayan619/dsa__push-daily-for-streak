function knapsack(wt,val,w,n){
    if(n==0 || w==0){
        return 0;
    }
    if(wt[n-1]<=w){
        return Math.max(val[n-1]+knapsack(wt,val,w-wt[n-1],n-1),knapsack(wt,val,w,n-1));
    }else{
        return knapsack(wt,val,w,n-1);
    }
}

const wt = [10,20,30];
const val = [60, 100,120];
const w = 50;
const n = wt.length;

console.log(`The Maximum value of items the thief can steal is ${knapsack(wt,val,w,n)}`);