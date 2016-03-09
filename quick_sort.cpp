#include <iostream>

using namespace std;

int partition(int data[],int l,int r)
{
    int x= data[r];
    int i = l-1;

    for(int k = l; k<r; k++)
    {
        if(data[k]<=x)
        {
            i++;
            swap(data[i],data[k]);
        }

    }
      swap(data[i+1],data[r]);
    return i+1;


}
int quickSort(int data[],int l,int r)
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


    int n;
    cin>>n;

    int data[n];
    for(int i = 0; i<n ; i++)
        cin>>data[i];


    quickSort(data,0,n-1);


    for(int x: data)
        cout<<x<<" ";

}
