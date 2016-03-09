#include <iostream>
using namespace std;
int make;
int coin[] = {2,3,5};

int call(int i,int amount){//call ke call korbo coin number ebon amount die

    if(i>=3){//jodi i>=3 hoy break korbo//base case
        return amount==make;//soman hole 1 na hole 0
    }
    int ret1 = 0;//ret1 o ret2 namer 2 ta variable nite hobe
    int ret2  = 0;
    if(coin[i]+amount<=make) ret1 = call(i+1,coin[i]+amount);

    ret2 = call(i+1,amount);

    return ret1||ret2;


}

int main(){
make = 9;
cout<<call(0, 0)<<endl;


}
