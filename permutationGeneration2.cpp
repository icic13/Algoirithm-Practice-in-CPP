#include <iostream>
using namespace std;
int n;
bool col[10];
int result[10];
void perm(int in)
{
    if(in==n)
    {
        for(int i = 0; i<n ; i++)
            cout<<result[i]<<" ";
        cout<<endl;
    }
    for(int i = 0; i<n ; i++)
    {
        if(!col[i])
        {

            result[in] = i;
            col[i] = true;
            perm(in+1);
            col[i] =false;
        }
    }

}


int main()
{

    cin>>n;
    perm(0);

}
