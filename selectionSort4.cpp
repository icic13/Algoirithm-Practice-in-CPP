#include <iostream>
using namespace std;

void selectionSort(int data[],int n){

    for(int i = 0; i< n; i++){

        int minI = i;

        for(int j = i + 1; j<n ;j++){
            if(data[j]<data[minI])
                minI = j;
        }
        swap(data[i],data[minI]);
    }

}

int main()
{


    int data[] = {3,69,7,1,8};
    int n = sizeof(data)/sizeof(data[0]);

selectionSort(data,n);
    for(int i = 0; i<n; i++)
        cout<<data[i]<<" ";
    cout<<endl;

}

