#include<stdio.h>

void display(){
    static int a = 0;
    printf("a=%d\n", a);
    a++;
}

int main(){
    display();
    display();
    display();
}