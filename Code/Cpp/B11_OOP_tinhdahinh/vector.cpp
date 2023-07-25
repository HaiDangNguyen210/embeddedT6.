#include <iostream>
#include<string>
#include"vector"

using namespace std;

int main(){
  vector<int>array={1,2,4,6,7};
  array.push_back(8);
  array.insert(array.begin()+2,35);
  // array.assign(3,10);
  // duyệt vector bằng 2 cách 
  // Cách 1: truyền thống (lưu ý: không dùng cách này để duyệt list)
  for(int i=0;i<array.size();i++){
    cout<<array[i]<<""<<endl;
  }
   //Cách 2:
  for(int item:array){
    cout<<item<<endl;
  }
  return 0;  
}
