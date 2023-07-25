
#include "C:\Users\ducqu\Documents\laptrinhnhung\CodeCpp\Cpp\B10 Class 2\main.hpp"



    doituong::doituong(string ten, int tuoi,string gioitinh){ //hàm tạo(constructor)
    static int id = 100; // biến static chỉ khởi tạo 1 lần, do đó khi in 2 lần sẽ tự động cộng lên thành 101 
    ID = id;
    ptr = &id;
    id++;
    Ten = ten;
    Tuoi = tuoi;
    Gioitinh = gioitinh;
    }
    doituong::~doituong(){ // hàm hủy(destructor)
    *ptr = 100;
    cout<<"ten:"<<Ten<<endl;
    }
    void doituong::hienthi(){
    cout<<"ID: "<<ID<<endl;
    cout<<"ten: "<<Ten<<endl; 
    cout<<"tuoi: "<<Tuoi<<endl;
    cout<<"gioi tinh: "<<Gioitinh<<endl;
    }


void test1(){
   doituong dt("Dang",18,"nam");
   dt.hienthi();
   doituong dt1("Thai",18,"nam");
   dt1.hienthi();
   doituong dt2("Vu",18,"nam");
   dt2.hienthi();
}

int main(){

 test1();
   return 0;

}