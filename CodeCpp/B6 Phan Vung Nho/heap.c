#include <stdio.h>
#include <stdlib.h>

void test1(){
    int array[4];
    printf("dia chi test 1: %p\n", array); // vì array vốn là một địa chỉ nên không cần thêm dấu & để đọc địa chỉ.
}

void test2(){
    int *array = (int *)malloc(sizeof(int)*4); //tạo một array có kiểu dữ liệu int với 4 phần tử trong mảng(*4).
    printf("dia chi test 2:%p\n", array);
    free(array);
}
int main(){
    test1();
    test1();

    test2();
    test2();

 

}