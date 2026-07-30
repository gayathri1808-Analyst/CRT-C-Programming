int countSymmetricIntegers(int low, int high)
{
    int count = 0;

    for(int i = low; i <= high; i++)
    {
        int temp = i, digits = 0;

        while(temp > 0)
        {
            digits++;
            temp /= 10;
        }

        if(digits % 2 != 0)
            continue;

        temp = i;

        int sum1 = 0, sum2 = 0;

        for(int j = 0; j < digits / 2; j++)
        {
            sum2 += temp % 10;
            temp /= 10;
        }

        for(int j = 0; j < digits / 2; j++)
        {
            sum1 += temp % 10;
            temp /= 10;
        }

        if(sum1 == sum2)
            count++;
    }

    return count;
}
