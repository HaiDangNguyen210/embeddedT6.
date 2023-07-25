#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdint.h>



int random_number(int minN, int maxN){
 return minN + rand() % (maxN + 1 - minN);
}

int *createArray(int length){
    int *ptr = (int*)malloc(sizeof(int)*length); // cấp phát mảng động với số phần tử = "length"
    srand((int)time(0));
    for (int i = 0; i < length; i++)
    {
        ptr[i] = random_number(1, 1000);
    }
    return ptr;
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int *arr, int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)
   {
       // Lặp qua tất cả các phần tử trong mảng
       for (j = 0; j < n-i-1; j++)
       {
           // Nếu phần tử sau nhỏ hơn phần tử trước, hoán vị chúng
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
       }
    }
}



int binarySearch(int *arr, int l, int r, int x)
{
   if (r >= l)
   {
        int mid = l + (r - l)/2;
 
        // Nếu giá trị giữa mảng bằng với x, trả về chỉ số của nó
        if (arr[mid] == x)  return mid;
 
        // Nếu x nhỏ hơn giá trị giữa mảng, tìm kiếm trong phần trái của mảng
        if (arr[mid] > x) return binarySearch(arr, l, mid-1, x);
 
        // Nếu x lớn hơn giá trị giữa mảng, tìm kiếm trong phần phải của mảng
        return binarySearch(arr, mid+1, r, x);
   }
 
   // Nếu không tìm thấy x
   return -1;
}


int main(int argc, char const *argv[])
{
  int x;
  int n;
    
    printf("Nhap so phan tu: \n");
    scanf("%d", &n);
   
  int *arr = createArray(n);
    bubbleSort(arr, n);
    for (int i = 0; i < n; i++){
       printf("array[%d] = %d\n",i, arr[i]);
    }
  
    
    printf("Nhap gia tri can tim: \n");
    scanf("%d", &x);
    int result = binarySearch(arr, 0, n-1, x);
    if (result == -1)
        printf("Khong tim thay %d trong mang.\n", x);
    else
        printf("Tim thay %d tai vi tri %d trong mang.\n", x, result);
    free(arr);
    return 0;
}
