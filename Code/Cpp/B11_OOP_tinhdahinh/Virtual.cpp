#include <iostream>
#include<string>

using namespace std;
class Sinhvien{
    protected:
      virtual char*comment(){
        return (char*)"class sinh vien\n";
    }
    public:
        void display(){
            printf("%s\n",comment());
        }
};
class hocsinh : public Sinhvien{
     private:
        char *comment(){
        return (char*)"class hoc sinh\n";
    }
};
int main(){
    Sinhvien sv;
    sv.display();
    hocsinh hs;
    hs.display();
}