#include <stdio.h>

int tong(int a, int b){ //a,b la input parameter nên sẽ được lưu vào stack 
 int c = a + b; // c là biến cục bộ(local) nên được lưu vào stack
 return c;
}


int main(){
    tong(3,4); // a=3 0x01
               // b=4 0x02
               // int c= a+b 0x03
               // return c; 
               // sau khi thực hiện các lệnh trong hàm , tất cả các ô địa chỉ sẽ được giải phóng.
}