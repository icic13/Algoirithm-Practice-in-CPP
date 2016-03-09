#include <iostream>
using namespace std;
int n;
bool col[10];
int a[10];



void permutation(int ind)
{
    if(ind==n)
    {

        for(int j = 0; j<ind; j++)
            cout<<a[j]<<" ";
        cout<<endl;
        return ;
    }

    for(int i = 0; i<n ; i++)
    {
        if(!col[i])
        {

            a[ind] = i;
            col[i] = true;
            permutation(ind+1);
            col[i] = false;
        }
    }


}

int main()
{
    cin>>n;
    permutation(0);


}
