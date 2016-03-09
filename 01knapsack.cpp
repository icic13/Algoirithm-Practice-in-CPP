#include <iostream>
using namespace std;
struct material
{

    int weight;
    int price;
} element[100];


int dp[100][100];

int main()
{

    int n;
    cin>>n;
    for(int i = 1; i<=n ; i++)
        cin>>element[i].weight>>element[i].price;
    int sz;
    cin>>sz;
    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=sz ; j++)
        {

            if(element[i].weight>j)
                dp[i][j] = dp[i-1][j];
            else
                dp[i][j] = max(dp[i-1][j],element[i].price+dp[i-1][j-element[i].weight]);
            cout<<dp[i][j]<< " ";

        }
        cout<<endl;
    }

    return 0;
}
