#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdint.h>



uint16_t random_number(int minN, int maxN){
 return minN + rand() % (maxN + 1 - minN);
}

uint16_t *createArray(uint16_t length){
    uint16_t *ptr = (uint16_t*)malloc(sizeof(uint16_t)*length);
    srand((int)time(0));
    for (uint16_t i = 0; i < length; i++)
    {
        ptr[i] = random_number(1, 1000);
    }
    return ptr;
}


void sort(uint16_t arr[], uint64_t length){
    for (uint16_t i=0; i<length;i++){
        for(uint16_t j =i+1;j<length;j++){
            uint16_t temp = arr[i];
            if(arr[i]>arr[j]){
                arr[i] = arr[j];
                arr[j]=temp;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
  uint16_t *array = createArray(10000);

   sort(array,10000);

   for (uint16_t i = 0; i < 10000; i++)
   {
   printf("array[%d]=%d,",i, array[i]);
  }
   
    return 0;
}
