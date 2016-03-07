#include <iostream>
using namespace std;
int dp[100];
int fib(int n)
{
    if(n==0 || n== 1)
        return 1;
    else if (dp[n] == 0)
        dp[n] = fib(n-1)+fib(n-2);


    return dp[n];


}

int main()
{


    int n;
    cin>>n;
    cout<<fib(n)<<endl;

}
