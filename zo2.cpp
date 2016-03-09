#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

struct material{
    int weight,price;
}element[100];

main()
{
   int n,sz, dp[100][100];
   while(cin>>n)
   {
       for(int i=1;i<=n;i++)
			cin>>element[i].weight>>element[i].price;
       cin>>sz;
       memset(dp,0,sizeof(dp));

        for(int i = 1; i<= n; i++){
            for(int j = 1; j<=sz; j++){
                if(element[i].weight>j)
                    dp[i][j] = dp[i-1][j];

                else
                    dp[i][j] = max(dp[i-1][j],element[i].price+dp[i-1][j-element[i].weight]);
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
   }

}
