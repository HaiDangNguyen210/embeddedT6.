#include<stdio.h>
#include<stdint.h>


typedef enum {
  thu2 = 1, 
  thu3,
}tuan;
void hienthi(tuan thu){
  switch (thu){
  case thu2:
  printf ("thu hai");
  break;
  case thu3:
  printf("thu ba");
  break;
  }
}

int main()
{
 tuan thu = (tuan)1;
 hienthi(thu);
 return 0;
}
