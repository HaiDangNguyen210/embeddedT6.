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
    ptr(3,4);

    double(*ptrD)(int, int);
    ptrD=&thuong;
    printf("gia tri cua thuong: %f\n", ptrD(17,4));
    
    
    double d = 10.3;
    char string[] = "hello";
    void *array[] ={&d, &string};

    printf("%f\n",*(double*)array[0]); 
    
  
    printf("%c\n",*(char*)array[1]);
    printf("%p\n",&string[0]);
    printf("%p\n",&string[1]);
    printf("%p\n",array[1]);
    printf("%p\n",&array[1]);
    printf("%p\n",array[0]); 
    printf("%p\n",&*array); 


   
    
 }
