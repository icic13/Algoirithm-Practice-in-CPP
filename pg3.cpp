#include <iostream>
using namespace std;
int n;


bool col[10];
int a[10];

void permutation(int ind){

    if(ind==n){
        for(int i = 0; i<n; i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }

    for(int i = 0; i<n;i++){
        if(!col[i]){
            a[ind] = i;
            col[i] = true;
            permutation(ind+1);
            col[i] = false;
        }
    }

}
int main(){
cin>>n;
permutation(0);


}
