bool isPalindrome(int x) {
    long int n=x, temp=0;
    while(n)
    {
       temp=temp*10+n%10;
        n=n/10;
    }
    if(x>=0)
    return(temp==x);
    else
    return(0); 
    }
    
