
#include <stdio.h>
 

void reverse(char* a, char* b)
{
    char temp;
    while (a < b) {
        temp = *a; 
        *a++ = *b; 
        *b-- = temp;  
    }
}
 

void reverseWords(char* a)
{
    char* word_begin = a;
 

    char* temp = a;
 

    while (*temp) { 
        temp++;
        if (*temp == '\0') {
            reverse(word_begin, temp - 1);
        }
        else if (*temp == ' ') {
            reverse(word_begin, temp - 1);
            word_begin = temp + 1;
        }
    }
    reverse(a, temp-1);
}
 

int main()
{
    char arr[] = "Hello io";
    char* temp = arr;

    reverseWords(arr);
    printf("%s\n", arr);
    
    return 0;
}