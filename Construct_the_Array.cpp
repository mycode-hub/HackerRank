/* https://www.hackerrank.com/challenges/construct-the-array/problem?isFullScreen=false*/


long countArray(int n, int k, int x) {
    // Return the number of ways to fill in the array.
    long long noncount = 0, one = 1 ,prev = 0;
    int m = 1000000007;
    for(int i=1 ;i < n; i++)
    {
        prev = one;
        one = (noncount * (k-1))%m;
        noncount = (prev + (noncount * (k-2) )%m) %m ;
    }
    if( x == 1)
        return one % m;
    else
        return noncount % m;    
    
}
