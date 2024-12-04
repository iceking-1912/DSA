#include <iostream>
using namespace std;

#define m 100

class stack {
  int *arr;
  int top;

public:
  stack() {
    arr = new int[m];
    top = -1;
  }

  void push(int x) {
    if (top == m - 1) {
      cout << "STACK_OVERFLOW" << endl;
      return;
    }

    top++;
    arr[top] = x;
  }

  void pop() {
    if (top == -1) {
      cout << "STACK_EMPTY" << endl;
      return;
    };

    cout << arr[top] << "Element will be Popped" << endl;
    top--;
  }

  void peek() {
    if (top == -1) {
      cout << "STACK_EMPTY" << endl;
      return;
    }
    cout << "TOP Element is" << arr[top] << endl;
  }

  bool is_empty() { return top == -1; }
};

int main() {
  stack sk1;
  sk1.push(1);
  sk1.peek();

  return 0;
}
