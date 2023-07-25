#include <iostream>
#include <string>

using namespace std;
class doituong{
private:
   string Ten; // đây gọi là property
   int Tuoi;
   string Gioitinh;
   int ID;
   int *ptr;
public:
    doituong(string ten, int tuoi,string gioitinh){
    static int id = 100; // biến static chỉ khởi tạo 1 lần, do đó khi in 2 lần sẽ tự động cộng lên thành 101 
    ID = id;
    ptr = &id;
    id++;
    Ten = ten;
    Tuoi = tuoi;
    Gioitinh = gioitinh;
    }
    ~doituong(){
    *ptr = 100;
    cout<<"ten:"<<Ten<<endl;
    }
    void hienthi(){ // đây gọi là method
    cout<<"ID: "<<ID<<endl;
    cout<<"ten: "<<Ten<<endl; 
    cout<<"tuoi: "<<Tuoi<<endl;
    cout<<"gioi tinh: "<<Gioitinh<<endl;
    }
};
void test1(){
  
   doituong dt1("Thai",18,"nam");
   dt1.hienthi();
   doituong dt2("Vu",18,"nam");
   dt2.hienthi();
}

int main(){

 test1();
  doituong dt("Dang",18,"nam");
   dt.hienthi();
   return 0;

}