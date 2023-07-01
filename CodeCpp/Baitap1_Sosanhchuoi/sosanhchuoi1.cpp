#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

typedef enum{
    Equal,
    Smaller,
    Bigger,
}compare;
    

compare isEqual(const char arr1[], const char arr2[]){
    uint8_t i = 0;
while(arr1[i] == arr2[i]){
    if(arr1[i]=='\0'){
printf("Equal\n");
return 0;
} 
}

i++;

if(arr1[i] > arr2[i]){
    printf("Bigger\n");
}
else
printf("Smaller\n");
}



int main(){
    
    char arr2[]= "hello";
    char arr1[]= "hellooo";
    isEqual(arr1,arr2);
    
}
 