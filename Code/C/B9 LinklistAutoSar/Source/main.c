#include <stdio.h>
#include <stdlib.h>
#include "C:\Users\ducqu\Documents\laptrinhnhung\CodeCpp\B9 LinklistAutoSar\header"



int main(){ 
    node *array=NULL;
    push_back(&array,7);
    push_back(&array,5);
    insert(&array,23,0);
    printf("test:%d",get(array,0));
    
    return 0;
}