#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
char arr1[]= "hello";

    

bool isEqual(const char arr1[], const char arr2[]){
    int i = 0;
while(arr1[i] == arr2[i]){
    if( arr1[i]=='\0')return true;
i++;
} 
return false;
}

int main(){
    
    char arr2[]= "hello";
    char arr1[]= "heloo";
    printf("%d",isEqual(arr1,arr2));
    
}
 