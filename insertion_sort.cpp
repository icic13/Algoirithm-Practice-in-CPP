#include <iostream>

using namespace std;


void insertionSort(int data[],int n){

    for(int i = 1; i<n; i++){
        int key = data[i];
        int j = i-1;
        while(j>=0 && key<data[j]){
            data[j+1] = data[j];
            j--;
        }
        data[j+1] = key;
    }


}



int main(){

    int n;
    cout<<"How many numbers: "<<endl;
    cin>>n;
    int data[n];
    for(int i = 0; i<n ; i++)
        cin>>data[i];


    insertionSort(data,n);

    for(int i = 0; i<n ;i++)
        cout<<data[i]<<" ";
    cout<<endl;

    return 0;
}
