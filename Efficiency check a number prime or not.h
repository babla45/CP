bool is_prime(int n)
{
    if(n<=1) return false;
    if(n<=3) return true;
    
    if(n%2==0 or n%3==0)
    {
        return false;
    }
    
    for(int a=5; a*a<=n; a+=6)
    {
        if(n%a==0 or n%(a+2)==0)
        return false;
    }
    return true;
}
