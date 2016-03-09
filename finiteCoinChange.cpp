#include <iostream>
using namespace std;


int coin[] = {2, 3, 5};
int make ;

int call(int i,int amount)
{
    if(i>=3)
    {
        return make==amount;
    }
    int ret1 = 0;
    int ret2 = 0;

    if(coin[i]+amount<=make) ret1 = call(i+1,coin[i]+amount);

    ret2 = call(i+1,amount);

    return ret1|| ret2;


}

int main()
{
    cin>>make;

    cout<<call(0,0)<<endl;
    return 0;
}
