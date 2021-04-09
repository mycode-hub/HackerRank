#include <bits/stdc++.h>

using namespace std;
#define m 1000000007
// Complete the substrings function below.
int substrings(string n) {
    long long  totalsum=0;
    long long sum=0;
    int i=0;
    while( i < n.length() )
    {
        sum = ((sum*10)%m + ((i+1)*(n[i] -'0')) %m )% m;
        //cout<<sum<<endl;
        totalsum += sum;
        i++;
    }
    return (totalsum) %m;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n;
    getline(cin, n);

    int result = substrings(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
