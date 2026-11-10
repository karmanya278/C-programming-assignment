int reverse(int x)
{
    long reversed = 0;

    while (x != 0)
    {
        int digit = x % 10;
        reversed = reversed * 10 + digit;

        if (reversed > 2147483647L || reversed < -2147483648L)
            return 0;

        x /= 10;
    }

    return (int)reversed;
}
