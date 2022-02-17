class Solution
{
public:
    bool isPalindrome(int x)
    {
        long long int r, n = x, rev = 0;
        if (x < 0)
        {
            return false;
        }
        else
        {
            while (n > 0)
            {
                r = n % 10;
                rev = rev * 10 + r;
                n = n / 10;
            }
        }
        if (rev == x)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};