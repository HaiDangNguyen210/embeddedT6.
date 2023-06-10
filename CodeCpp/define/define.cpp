#include<stdio.h>
#include<stdint.h>

#define MAX 10 
#define tong(a,b) a+b
#define CREATE_FUNC(name_func, cmd)\
void name_func(){                  \
    printf("%s\n, (char *)cmd);     \
}
CREATE_FUNC(test,"hello world");
int main(){ 
    test()
    printf("tong a va b la %d\n",tong(3,4));
return 0;
    
}
