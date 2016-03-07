#include <iostream>

#include <algorithm>
using namespace std;

struct material{
    int weight;
    int rate;


}mat[100];

bool comp(material a,material b){



return a.rate>b.rate;
}

int main(){


    int n;
    cin>>n;

    for(int i = 0; i<n ; i++)
        cin>>mat[i].weight>>mat[i].rate;
    sort(&mat[0],&mat[n],comp);

    int sz;
    //ekhon bostar size
    cin>>sz;
    int ans = 0;

    for(int i = 0; i<n; i++){
        if(!sz)
            break;


        if(mat[i].weight>=sz){

        ans+=sz*mat[i].rate;

        }else{
            ans+=mat[i].weight*mat[i].rate;
            sz-=mat[i].weight;



        }


    }


    cout<<ans<<endl;

}
