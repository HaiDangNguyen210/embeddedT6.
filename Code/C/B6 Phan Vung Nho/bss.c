#include <stdio.h>
int x; // biến toàn cục có giá trị bằng 0/không khởi tạo giá trị được lưu vào bss
static int y = 0; // bien static toan cuc có giá trị bằng 0/không khởi tạo giá trị được lưu vào bss
void tong(){
   static int z; // bien static cuc bo có giá trị bằng 0/không khởi tạo giá trị được lưu vào bss 
} 

int main(){
    printf("i=%d",y);
    
}