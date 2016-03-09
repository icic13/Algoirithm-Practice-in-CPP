#include <iostream>
using namespace std;
int n;//n koto pjorjonot korbo

int a[10];
int col[10];

int permutation(int in)
{

    if(in==n)
    {

        for(int i = 0; i<n ; i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }

    for(int i= 0; i<n ; i++)
    {
        if(!col[i]){
            a[in] = i;
            col[i] = true;
            permutation(in+1);
            col[i] = false;
        }

    }

}

int main()
{

cin>>n;
permutation(0);

}
