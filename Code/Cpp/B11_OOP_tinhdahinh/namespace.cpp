#include <iostream>
#include<string>

using namespace std;
namespace ConongA{
    int Teo=10;

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
}

using namespace ConongA;


namespace ConongB{ 
    int Teo=20;
}

namespace ConongB{  //kể cả khi namespace này nằm trong 1 file khác thì vẫn truy cập được  
    int test = 30;
}

int main(){
    cout<<"con ong A:"<<ConongA::Teo<<endl;
    cout<<"con ong B:"<<ConongB::Teo<<endl;
    ConongA::ToanHoc th;
    th.tong(10,20);

    printf("%d\n",Teo); // vì đã sử dụng using namespace ConongA, nên khi gọi biến Teo, sẽ mặc định là biến Teo của ConongA
}