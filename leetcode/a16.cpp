class Solution {
public:
    int findWays(int n){
        if(n<=1) return 1; //base case
        return findWays(n-1)+findWays(n-2);
    }

    int climbStairs(int n) {
        return findWays(n);
    }
};
