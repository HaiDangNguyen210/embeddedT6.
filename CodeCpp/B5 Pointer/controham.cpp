#include <stdio.h>

void tong(int a, int b){
    printf("tong %d va %d la %d\n",a,b,a+b);
}

double thuong(int a, int b){
    return (double)a/b;
}

 int main(){
    void (*ptr)(int, int);
    ptr = &tong;
    tong(3,4);

    double(*ptrD)(int, int);
    ptrD=&thuong;
    printf("gia tri cua thuong: %f\n", ptrD(17,4));
    
 }
