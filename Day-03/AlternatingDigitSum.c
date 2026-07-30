int alternateDigitSum(int n)
{
    int temp = n, digits = 0;

    while(temp > 0)
    {
        digits++;
        temp /= 10;
    }

    temp = n;
    int sum = 0;
    int sign = (digits % 2) ? 1 : -1;

    while(temp > 0)
    {
        int digit = temp % 10;
        sum += sign * digit;
        sign = -sign;
        temp /= 10;
    }

    return sum;
}
