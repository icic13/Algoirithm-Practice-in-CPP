#include <iostream>
using namespace std;

struct material{
int wt;
int rt;

}mat[100];
int dp[100][100];

int main(){

    int n;
    cin>>n;
    for(int i = 1; i<=n ;i++)
        cin>>mat[i].wt>>mat[i].rt;

    int sz;
    cin>>sz;

    for(int i  = 1 ; i<=n; i++){
        for(int j = 1; j<=sz; j++){

            if(mat[i].wt>j)
                dp[i][j] = dp[i-1][j];
            else
                dp[i][j] = max(dp[i-1][j], mat[i].rt+dp[i-1][j-mat[i].wt]);
            cout<<dp[i][j]<<" ";

        }
        cout<<endl;


    }

}
