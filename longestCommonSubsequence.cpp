#include <iostream>
#include <string>
#include <algorithm>


using namespace std;


void lcs(string x,string y)
{

    int m = x.length();
    int n = y.length();

    int dp[m+1][n+1];

    for(int i = 0; i<=m; i++)
        for(int j= 0; j<=n ; j++)
        {


            if(i==0||j==0)
                dp[i][j] = 0;

            else if(x[i-1]==y[j-1])
                dp[i][j]  = dp[i-1][j-1]+1;

            else
                dp[i][j]  = max(dp[i-1][j],dp[i][j-1]);
        }

        int i = m;
        int j = n;
        int length = dp[m][n];
        string result="";
        while(i>0&&j>0){


            if(x[i-1]==y[j-1]){
                result+=x[i-1];
            i--;
            j--;
            length--;
            }
            else if(dp[i-1][j]>dp[i][j-1])
                i--;
            else
                j--;
        }


    cout<<result<<endl;
    cout<<dp[m][n]<<endl;

}

int main()
{
    string first,second;
    cin>>first>>second;

    lcs(first,second);


}

/*
SUST
SYLHUT
SUT
3
/*
