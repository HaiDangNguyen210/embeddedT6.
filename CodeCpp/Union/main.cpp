#include <stdio.h>
#include<stdint.h>
typedef union 
{    
struct {
 uint8_t ID[2];
 uint32_t Data[3];
 uint8_t CS[1]; 
}data;
uint8_t array[6];
}Union1;

int main(){
    Union1 data;
    printf("%p\n",&data.data.ID[0]); // ô địa chỉ của các phần tử trong mảng sẽ liền kề nhau
    printf("%p\n",&data.data.ID[1]);
    printf("%p\n",&data.data.Data[0]);
    printf("%p\n",&data.data); // địa chỉ của struct sẽ là ô địa chỉ của phần tử đàu tiên ( ở đây là ID[0])
    printf("%p\n",&data.array); // địa chỉ của các phần tử trong union sẽ giống nhau và cũng chính là địa chỉ của union. 


// Mô tả cách truyền dữ liệu giữa 2 MCU bằng cách sử dụng UNION 
data.data.ID[0] = 0x01;
data.data.ID[1] = 0x02;

data.data.Data[0] = 0x03;
data.data.Data[1] = 0x04;
data.data.Data[2] = 0x05;

data.data.CS[0] = 0x06;


};