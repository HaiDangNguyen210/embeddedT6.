#include <stdio.h>
#include<stdint.h>
int main(){
    for(uint8_t i = 0; i<10; i++ ){
        if (i ==5){    // nếu i=5 thì không chạy dòng printf nữa mà tiếp tục chạy vòng lặp for, nên số 5 không được in ra
            continue;
        } 
         if (i ==6){    // sau khi gặp i=5, i tiếp tục tăng lên 6 và gặp phải điều kiện if này do đó số 6 cũng k được in ra 
            continue;
        }
        printf("i=%d\n",i);
    }
    
return 0;
}