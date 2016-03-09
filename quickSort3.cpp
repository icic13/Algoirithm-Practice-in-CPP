#include <iostream>
using namespace std;


int partition(int data[],int l,int r)
{
    int x = data[r];
    int i = l-1;

    for(int j  =l; j<r; j++)
    {

        if(data[j]<=x)
        {
            i++;
            swap(data[j],data[i]);
        }

    }
      swap(data[i+1],data[r]);

    return i+1;


}

void quickSort(int data[],int l,int r)
{
    if(r>l)
    {
        int p = partition(data,l,r);
        quickSort(data,l,p-1);
        quickSort(data,p+1,r);


    }


}

int main()
{


    int data[] = {3,69,7,1,8};
    int n = sizeof(data)/sizeof(data[0]);

    quickSort(data,0,n-1);
    for(int i = 0; i<n; i++)
        cout<<data[i]<<" ";
    cout<<endl;

}
