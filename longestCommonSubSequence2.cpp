#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int dp[100][100];

void lcs(string x,string y)
{
    int m = x.length();
    int n = y.length();

    for(int i = 0; i<=m; i++)
        for(int j = 0; j<=n; j++)
        {
            if(i==0||j==0)
                dp[i][j] = 0;

            else if(x[i-1]==y[j-1])
                dp[i][j] = dp[i-1][j-1]+1;

            else
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);



        }

        cout<<dp[m][n]<<endl;

        string str= "";

        int i = m;
        int j = n;
        int length = dp[m][n];

        while(i>0 && j>0 ){

            if(x[i-1]==y[j-1]){
                str+=x[i-1];
                i--;
                j--;
            }
            else if(dp[i-1][j]>dp[i][j-1])
                i--;

            else
                j--;

        }

        for(int i = str.length();i>=0; i--)
            cout<<str[i];
        cout<<endl;

}

int main()
{

    string a,b;
    cin>>a>>b;
    lcs(a,b);
}
