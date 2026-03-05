class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        int n = x;

        while (n != 0) {

            if (rev > INT_MAX / 10 || rev < INT_MIN / 10)
                return 0;

            int rem = n % 10;

            if (rev == INT_MAX / 10 && rem > 7)
                return 0;

            if (rev == INT_MIN / 10 && rem < -8)
                return 0;

            rev = rev * 10 + rem;
            n = n / 10;
        }

        return rev;
    }
};
