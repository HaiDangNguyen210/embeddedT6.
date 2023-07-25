#include <iostream>
#include<string>
using namespace std;

template<typename bien>
bien tong(bien a,bien b){
    return (bien)(a+b);
}

int main(){
    cout<<"tong a va b:"<<tong(6,7)<<endl;
    cout<<"tong a va b:"<<tong(6.5,7.7)<<endl;
}