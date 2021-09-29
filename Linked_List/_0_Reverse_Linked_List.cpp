#include <bits/stdc++.h>

using namespace std;

//
// Created by yug39 :- on 9/20/2021.
//
// In this program we are going to reverse_by_given_size the linked list
// by using both the approaches :-
// iterative and recursive approach.
//

typedef struct LinkedList {
  int data = 0;
  struct LinkedList *next = nullptr;
} LL;

void print_LL(LL *head);

LL *create_LL();

LL *reverse_LL_Iterative(LL *head);

LL *reverse_LL_Recursive(LL *head);

//int main() {
//  LL *head = create_LL();
//
//  cout << "Before Reversing :- " << endl;
//  print_LL(head);
//
//  cout << "After Reversing :- " << endl;
//  head = reverse_LL_Recursive(head);
//  print_LL(head);
//
//  return 0;
//}

void print_LL(LL *head) {
  LL *node = head;
  while (node != nullptr) {
    cout << node->data << " ";
    node = node->next;
  }
  cout << endl;
}

LL *create_LL() {
  LL *head = new LL;

  head->data = 0;
  head->next = new LL;
  head->next->data = 1;
  head->next->next = new LL;
  head->next->next->data = 2;
  head->next->next->next = new LL;
  head->next->next->next->data = 3;
  head->next->next->next->next = new LL;
  head->next->next->next->next->data = 4;
  head->next->next->next->next->next = nullptr;

  return head;
}

LL *reverse_LL_Iterative(LL *head) {
  LL *rest = nullptr;
  while(head != nullptr) {
    LL *node = head;
    head = head->next;
    node->next = rest;
    rest = node;
  }
  return rest;
}

LL *reverse_LL_Recursive(LL *head) {
  if(head == nullptr || head->next == nullptr) {
    return head;
  }
  LL *node = reverse_LL_Recursive(head->next);
  head->next->next = head;
  head->next = nullptr;
  return node;
}