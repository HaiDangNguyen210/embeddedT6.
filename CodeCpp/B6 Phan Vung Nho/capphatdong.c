#include <stdio.h>
#include <stdlib.h>



int main(){
    int *array = (int *)malloc(sizeof(int)*4); //tạo một array có kiểu dữ liệu int với 4 phần tử trong mảng(*4).
     for(int i=0; i < 4; i++){
        array[i]= i*3;
     }
     for(int i=0; i<4; i++){
        printf("i=%d\n",array[i]);
     }

}