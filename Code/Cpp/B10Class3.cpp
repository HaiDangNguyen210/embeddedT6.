#include <iostream>
#include <string>

using namespace std;
class doituong{
protected:
   string Ten; // đây gọi là property
   int Tuoi;
   string Gioitinh;
   int ID;
   
public: 
   //doituong(string ten, int tuoi, string gioitinh){
    // Ten = ten;
    //Tuoi= tuoi;
    // Gioitinh= gioitinh;
    //static int id = 100;
   //ID = id;
    //id++;
    //}
   void themthongtin(string ten, int tuoi, string gioitinh){
    Ten = ten;
    Tuoi= tuoi;
    Gioitinh= gioitinh;
    static int id = 100; 
    ID = id;
    id++;
   }
   void hienthi(); // đây gọi là method
};
void doituong::hienthi(){ 
    cout<<"ID: "<<ID<<endl;
    cout<<"ten: "<<Ten<<endl; 
    cout<<"tuoi: "<<Tuoi<<endl;
    cout<<"gioi tinh: "<<Gioitinh<<endl;
    }

class sinhvien : public doituong{
    private:
    int MSSV;
    public:
    // sinhvien(string ten, int tuoi, string gioitinh);
    void hienthi();
};
void sinhvien::hienthi(){
    cout<<"ID: "<<ID<<endl;
}


int main(){
doituong dt1;
dt1.themthongtin("Nam",18,"Nu");
dt1.hienthi();
sinhvien sv;
sv.themthongtin("Nam",17,"Nu");
sv.hienthi();


return 0;

}