#include <iostream>
using namespace std;

void countingSort(int a[],int b[],int n,int mx)
{

    int c[mx+1];
    for(int i = 0; i<=mx; i++)
        c[i] = 0;

    for(int i = 0; i<n; i++)
        c[a[i]]++;

    for(int i = 1; i<=mx; i++)
        c[i] = c[i-1] + c[i];


    for(int i = 0; i<n; i++)
    {
        b[c[a[i]]-1] =a[i];
        c[a[i]]--;
    }

}

int main()
{


    int data[] = {3,6,7,2,8,7,1,8};
    int n = sizeof(data)/sizeof(data[0]);
    int result[n];
    countingSort(data,result,n,9);
    for(int i = 0; i<n; i++)
        cout<<result[i]<<" ";
    cout<<endl;

}


