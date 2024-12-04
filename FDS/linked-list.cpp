#include <iostream>
using namespace std;

class node {
public:
  int data;
  node *next;

  node(int x) {
    data = x;
    next = NULL;
  };
};
void insert_head(node *&head, int val) {

  node *new_node = new node(val); // to create a new node with data as val

  new_node->next = head;
  head = new_node;
}

void insert_tail(node *&head, int val) {

  node *new_node = new node(val); // to create a new node with data as val

  node *temp = head;

  while (temp->next != NULL) {
    temp = temp->next;
  }
  temp->next = new_node;
}

void insert_pos(node *&head, int val, int pos) {
  node *new_node = new node(val);
  node *temp = head;

  int c_pos = 0;
  while (c_pos != pos) {
    temp = temp->next;
  }

  new_node->next = temp->next;
  temp->next = new_node;
}
void disp(node *head) {
  node *temp = head;

  while (temp != NULL) {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

int main() {
  node *head = NULL;

  insert_head(head, 10);
  insert_head(head, 20);
  disp(head);
  insert_tail(head, 50);
  insert_tail(head, 60);
  disp(head);
  insert_pos(head, 30, 4);
  disp(head);

  return 0;
}
