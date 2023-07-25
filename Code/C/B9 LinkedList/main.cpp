#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int value;
    struct Node *next;
}node;

node *createnode(int value){
    node *ptr = (node*)malloc(sizeof(node));
    ptr->value = value; // "dấu '->' thể hiện sự truy xuất của con tro đến dữ liệu value trong struct"
    ptr->next = NULL;
    return ptr;
}   

void push_back(node **array, int value){ /// Vì cần thay đổi giá trị tại nơi con trỏ đến nên ta truyền vào địa chỉ con trỏ(dùng p to p)
node *temp, *p;
temp = createnode(value); // trỏ temp đến địa chỉ createnode, nơi có 2 biến: int value và node *next = NULL vừa đc khởi tạo.
if(*array == NULL){
    *array = temp;
} 
else{
    p = *array; // trỏ p đến địa chỉ createnode, nơi có 2 biến: int value và node *next = NULL vừa đc khởi tạo.(lưu ý: con trỏ array này sẽ nằm đây trong suốt quá trình chương trình chạy kể từ lần push_back đầu tiên)
    while(p->next !=NULL){
        p=p->next;
    }
    p->next = temp;
}
}
//bool check(node *array, int value, int pos){
  //  int i = 0; 
//while(array->next != NULL || pos != i && array->value != value){
    //if(array->next == NULL)return false;
   //   array = array->next;
   //   i++;
//}
//return true;
//}

void erase(node **array, int pos){
  //  bool t = check(*array,value,pos);
   // if(t==0){
     ///   printf("\nkhong tim thay so can xoa !!!\n");
//}else{
    int i = 1;
    node *temp ,*p;
    p = *array;
    if(pos ==0){
        temp = (*array)->next;
        free(*array);
        *array=temp;
    }else{
    while (p->next->next !=NULL && i !=pos){
          p = p->next;
            i++;
    } 
      temp = p->next;
      p->next = p->next->next;
      free(temp);
    }
}
//}


int get(node *array,int index){
    int i = 0;
    while(array->next != NULL && index != i){
    array = array->next;
    i++;
    }
    return array->value; 
}
void insert(node **array, int value, int pos){ // Vì cần thay đổi giá trị tại nơi con trỏ đến nên ta truyền vào địa chỉ con trỏ(dùng p to p)
    node *temp, *p;
    p = *array;
    temp = createnode(value);
    int i = 1; 
    if(pos==0){
        temp->next = *array;
        *array = temp;     
    }
    else{
        while(p->next != NULL && pos != i){
            p=p->next;
            i++;
        }
        temp->next = p->next;
        p->next = temp;
    }
}


int main(){
    node *array=NULL; 
    push_back(&array,7);
    push_back(&array,5);
    push_back(&array,3);
    //insert(&array,23,0);
    erase(&array,1);
    printf("test:%d",get(array,1));
    
    return 0;
}