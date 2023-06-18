#include <stdio.h>
#include<stdint.h>
typedef union 
{    
struct {
 uint8_t toan[2];
 uint32_t van[3];
 uint8_t anh[1]; 
}diemtrungbinh;
uint8_t array[6];
}Union1;

int main(){
    Union1 data;
    printf("%d",&data.array);

Union1 union2;
union2.diemtrungbinh.toan[0] = 0x01;
union2.diemtrungbinh.toan[1] = 0x02;

union2.diemtrungbinh.van[0] = 0x03;
union2.diemtrungbinh.van[1] = 0x04;
union2.diemtrungbinh.van[2] = 0x05;

union2.diemtrungbinh.anh[1] = 0x06;


};