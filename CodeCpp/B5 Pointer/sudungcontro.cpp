#include <stdio.h>

void swap(int *a, int *b){ 
 int temp = *a; 
 *a = *b;
 *b = temp;
}


int main(){
    int x = 20;
    int y= 10;
    swap(&x,&y);
    printf("x=%d, y=%d",x,y);
}