#include <iostream>
using namespace std;
bool col[10];
int a[10];
int n;
int permutation(int ind){

    if(ind==n){
        for(int j = 0; j<n; j++)
            cout<<a[j]<<" ";
        cout<<endl;
    }


for(int i  = 0 ; i<n ;i++){


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

    return 0;
}
