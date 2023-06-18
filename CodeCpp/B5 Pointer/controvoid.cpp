#include <stdio.h>

int a = 10;
char c= 'A';
double d = 10.4;

 int main(){
    void *ptr;
    ptr = &a;
    printf("gia tri tai dia chi a: %d\n", *(int*)ptr); // su dung ep kieu, de in ra gia tri tai dia tri con tro void tro den
    printf("dia chi: %p\n", ptr); // lay dia chi ptr, %p la kieu du lieu cua dia chi 
    
    ptr = &c;
    printf("gia tri tai dia chi c: %c\n", *(char*)ptr); // su dung ep kieu, de in ra gia tri tai dia tri con tro void tro den
    printf("dia chi: %p", ptr); // lay dia chi ptr, %p la kieu du lieu cua dia chi 
 }