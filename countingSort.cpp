#include <iostream>

using namespace std;


void countingSort(int a[],int n,int range){

    int c[range+1];
    int b[n];

    for(int i=0; i<=range; i++)
        c[i] = 0;
    for(int i = 0; i<n ;i++)
        c[a[i]]++;

    for(int i = 1; i<=range; i++)
        c[i] = c[i]+c[i-1];

    for(int i = 0 ; i<n;i++)
      {

       b[c[a[i]]-1] = a[i];
    c[a[i]]--;
      }
    for(int i = 0; i<n; i++)
        cout<<b[i]<<" ";
    cout<<endl;



}

int main(){

    int n;
    cin>>n;
    int data[n];
    for(int i= 0; i<n; i++)
        cin>>data[i];

        countingSort(data,n,9);

    return 0;
}
