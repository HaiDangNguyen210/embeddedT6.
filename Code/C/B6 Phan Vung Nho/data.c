#include <stdio.h>
int x = 10; // bien toan cuc duoc luu vao ds
static int y =5; // bien static toan cuc duoc luu vao ds
void tong(){
   static int z = 19; // bien static cuc bo duoc luu vao ds 
} 

int main(){
    printf("i=%d",y);
    
}