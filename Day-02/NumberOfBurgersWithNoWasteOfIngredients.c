int *ans = (int *)malloc(2 * sizeof(int));
    if (tomatoSlices % 2 != 0)
    {
        *returnSize = 0;
        return ans;
    }
    int jumbo = tomatoSlices / 2 - cheeseSlices;
    int small = cheeseSlices - jumbo;

    if (jumbo < 0 || small < 0)
    {
        *returnSize = 0;
        return ans;
    }
    ans[0] = jumbo;
    ans[1] = small;
    *returnSize = 2;

    return ans;
