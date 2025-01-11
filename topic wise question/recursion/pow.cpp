class Solution {
public:
    double myPow(double x, int n) {
        if(n<0){
            return 1/solve(x,abs(n));
        }
        return solve(x,n);
    }
    double solve(double x, int n){
        if(n==0){
            return 1.0;
        }
        //return solve(x*x,n-1);//this is my approach it's wrong because
        
        //In solve(x*x, n-1), you're squaring x in every recursive call. This doesn't compute 𝑥𝑛x n correctly, as it alters the base x itself instead of reducing n appropriately.

        return x*solve(x,n-1);
        //so i fixed it using x*(x,n-1);
    }
};

class Solution {
public:
    double myPow(double x, int n) {
        if(n==0){
            return 1;
        }
        if(n<0){
            n=abs(n);
            x=1/x;
        }
        if(n%2==0){
            return myPow(x*x,n/2);
        }
        else return x*myPow(x,n-1);
    }

};