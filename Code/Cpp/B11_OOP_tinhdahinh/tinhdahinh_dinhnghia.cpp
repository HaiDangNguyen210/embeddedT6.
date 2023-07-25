#include <iostream>
#include<string>

using namespace std;


class ToanHoc{
    public:
    void tong(int a, int b){
        cout<<"tong a va b:"<<a+b<<endl;
    }
    void tong(float a, float b){    
        cout<<"tong a va b:"<<a+b<<endl;
    }
    void tong(int a, int b, int c){
        cout<<"tong a va b:"<<a+b<<endl;
    }
};

int main(){
    ToanHoc th;
    th.tong(3,4);
    th.tong((float)2.7,(float)3.5); // chỗ này dùng kiểu double thì không cần ép kiểu.
    th.tong(1,2,3);


}