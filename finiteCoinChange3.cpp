#include <iostream>
using namespace std;
int make;
int coin[] = {2,7,5,3,4};
int call(int i,int amount){
        if(i>=5) return amount==make;

        int ret1 = 0;
        int ret2 = 0;
        if(coin[i]+amount<=make) ret1 = call(i+1,amount+coin[i]);

        ret2 = call(i+1,amount);

        return ret1|ret2;

}

int main(){
    cin>>make;
    cout<<call(0,0)<<endl;

    return 0;
}
