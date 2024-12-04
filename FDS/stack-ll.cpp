#include <iostream>
using namespace std;

struct stnode (){
  int data;
  stnode* node;

  stnode(int val){
    data = val;
    next = nullptr;
  }

}


class stackll(){
  stnode* top

  public:

    stackll(){
      top = nullptr;
    } 

    void push(int x){
      stnode* newnode = new stnode(x);
      newnode->next = top;
      top = newnode;
  
    }
  
}

int main () {


  return 0;
}
