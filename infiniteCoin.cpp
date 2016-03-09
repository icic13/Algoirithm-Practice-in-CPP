#include <iostream>
using namespace std;
int make;
int coin[] = {2, 3, 7};
int call(int i,int amount)
{
    if(i>=3)
        return make==amount;
    int ret1 = 0;
    int ret2 = 0;
    if(coin[i]+amount<=make) ret1 = call(i,amount+coin[i]);//code ta similar finite coin er moto sudu call korar time e i+1 na die i disi
    ret2 = call(i+1,amount);

    return ret1||ret2;


}
int main()
{
    cin>>make;
    cout<<call(0,0)<<endl;



}
