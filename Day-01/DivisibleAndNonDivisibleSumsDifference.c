int differenceOfSums(int n, int m) {
    int dcount=0,ndcount=0;
    for(int i=0;i<=n;i++)
    {
        if(i%m==0)
        {
            dcount+=i;
        }else
        {
            ndcount+=i;
        }

    }
    return ndcount-dcount;
}
