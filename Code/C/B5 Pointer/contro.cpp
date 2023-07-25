#include <stdio.h>

 
 int main(){
    int a = 10;
    int *ptr = &a; 
    int **ptr1 = &ptr;
    printf("gia tri tai dia chi: %d\n", *ptr); // lay gia tri tai dia chi ptr
    printf("dia chi: %p\n", ptr); // lay dia chi ptr (lưu ý: đây là địa chỉ của biến mà con trỏ trỏ đến chứ không phải địa chỉ của con trỏ), %p la kieu du lieu cua dia chi 
    printf("dia chi: %p\n", &a);
    printf("dia chi: %p\n", &ptr);
    printf("dia chi: %p\n", *ptr1);
    printf("Size:%lu",sizeof(ptr));
 }