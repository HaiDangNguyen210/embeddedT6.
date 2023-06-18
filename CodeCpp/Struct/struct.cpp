#include <stdio.h>
#include<stdint.h>
typedef struct {
 uint8_t toan;
 uint8_t van;
 uint8_t anh; 
}diemtrungbinh;
void xuatdiemsinhvien(diemtrungbinh sv){
    printf("toan: %d\nvan:%d\nanh:%d", sv.toan, sv.van, sv.anh);
};
int main(){
   diemtrungbinh haidang={.toan=1, .van=10, .anh=9};
   xuatdiemsinhvien(haidang);
   return 0;

}