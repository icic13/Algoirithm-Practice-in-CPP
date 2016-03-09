
#include <iostream>
#include <cstring>

using namespace std;
struct material{
    int w;
    int r;

}mat[100];


int dp[100][100];
int main(){


    int n;
    cin>>n;

    for(int i = 0; i<n; i++)
        cin>>mat[i].w>>mat[i].r;


    memset(dp,0,sizeof(dp));

    int sz;
    cin>>sz;

    for(int i = 0; i<=n ;i++)
    for(int j = 0; j<=sz;j++){
        if(mat[i].w>j)
            dp[i][j] = dp[i-1][j];

        else
            dp[i][j] = max(dp[i-1][j], mat[i].r+ dp[i-1][j-mat[i].w]);

    }


   for(int i = 0; i<=n; i++)
    {
        for(int j = 0 ; j<=sz; j++)
            cout<<dp[i][j]<<" ";
        cout<<endl;
    }

}
