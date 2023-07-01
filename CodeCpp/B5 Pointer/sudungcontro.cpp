#include <stdio.h>

void swap(int *a, int *b){  // int *a=0xC1 //0xa1
 int temp = *a;             // int *b=0xc2 //0xa2
 *a = *b;
 *b = temp;
}



int main(){




    int x = 20;
    int y= 10;
    swap(&x,&y);
    printf("x=%d, y=%d",x,y);
}