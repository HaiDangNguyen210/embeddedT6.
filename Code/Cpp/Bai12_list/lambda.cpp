#include<iostream>

using namespace std;

int main(){
    int a = 10; 
    auto func = [a](int b){
        return a+b;
    };
    cout<<func(10)<<endl;
}