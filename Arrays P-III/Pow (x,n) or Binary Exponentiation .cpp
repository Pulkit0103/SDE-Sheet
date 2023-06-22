class Solution {
public:
    double myPow(double x, long long n) {

        if( n == 0) return 1;
        // if( n == 1) return x;

        if(n < 0){
            return 1.0/myPow(x , -1*n);
        }

        long double ans = 1;

        if(n % 2 == 0){
            return myPow(x*x , n/2);
        }
        else{
            return x*myPow(x*x , (n-1)/2);
        }

        return ans;
        // if( n > 0){
        //     while(n > 0){
        //         ans *= x;
        //         n--;
        //     }
        // }
        // if(n < 0){
        //     while(n < 0){
        //         ans /= x;
        //         n++;
        //     }
        // }
        // return ans;
    }
};