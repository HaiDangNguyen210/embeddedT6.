#include <stdio.h>
#include<stdint.h>
typedef struct {
 uint8_t toan;
 uint32_t van;
 uint8_t anh; 
}diemtrungbinh;

int main(){
 printf("size: %lu",sizeof(diemtrungbinh));
   return 0;

}