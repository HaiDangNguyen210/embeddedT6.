#include <iostream>
#include<string>
#include"list"

using namespace std;

int main(){
  list<int>array={1,2,4,6,7};
  array.push_back(8);
  list<int>::iterator it; // biến tên it, kiểu interator, iterator là 1 con trỏ
  int i = 0; 
  for (it = array.begin();it != array.end();it++){
    if(i==1){
        array.insert(it,27);
    }
    i++;
  }
  // duyệt list bằng 2 cách này
  //cách 1: cách này cũng dùng để duyệt vector được.
  for(it = array.begin();it != array.end();it++){
    cout<<*it<<endl;
  }
  //cách 2:
  for(int item:array){
    cout<<item<<endl;
  }
  return 0;  
}
