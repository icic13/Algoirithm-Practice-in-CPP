#include <iostream>
using namespace std;

void merge(int data[],int l,int m,int r){
    int n1  = m-l+1;
    int n2 = r-m;
    int L[n1],R[n2];

    int i,j,k;

    for(i = 0; i<n1 ; i++)
        L[i] = data[i+l];
    for(j = 0; j<n2; j++)
        R[j] = data[j+m+1];

    i = 0;
    j = 0;
    k = l;
    while(i<n1&&j<n2){
        if(L[i]<=R[j]){

            data[k] = L[i];
            i++;
        }
        else{
            data[k] = R[j];
            j++;
        }
        k++;


    }

    while(i<n1){
        data[k] = L[i];
        i++;
        k++;
    }
    while(j<n2){
        data[k] = R[j];
        j++;
        k++;
    }




}

void mergeSort(int data[],int l,int r){
    if(r>l){

        int m =(l+r)/2;
        mergeSort(data,l,m);
        mergeSort(data,m+1,r);
        merge(data,l,m,r);


    }



}

int main(){


    int n;
    cin>>n;

    int data[n];
    for(int i = 0; i<n ;i++)
        cin>>data[i];


    mergeSort(data,0,n-1);


    for(int x: data)
        cout<<x<<" ";

}
