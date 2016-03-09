#include <iostream>
using namespace std;

bool col[100];
int a[100];
int n;
void perm(int len)
{
    if(len==n)
    {
        for(int i = 0; i<n ; i++)
            if(col[i])
                cout<<i+1<<" ";
        cout<<endl;
        return ;
    }

    col[len] = false;
    perm(len+1);
    col[len] = true;
    perm(len+1);


}

int main()
{
    cin>>n;
    perm(0);

    return 0;
}
