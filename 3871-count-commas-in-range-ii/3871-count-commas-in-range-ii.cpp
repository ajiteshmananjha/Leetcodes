class Solution {
public:
    long long countCommas(long long n) {
        long long ans = 0;

        if (n < 1000)
            return 0;

        int i = 3;

        while (true)
        {
            long long p1 = 1;
            long long p2 = 1;

            for (int j = 0; j < i; j++)
                p1 *= 10;

            for (int j = 0; j < i + 3; j++)
                p2 *= 10;

            long long multiplier = i / 3;

            if (n >= p2 - 1)
            {
                ans += multiplier * (p2 - p1);
                i += 3;
            }
            else
            {
                ans += multiplier * (n - p1 + 1);
                break;
            }
        }

        return ans;
    }
};