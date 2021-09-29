#include <bits/stdc++.h>

using namespace std;

//
// Created by yug39 on 9/20/2021.
//
// In this problem we have to reverse the linked list
// but for every of the k nodes.
// Let's say linked list is :-
// LinkedList: 1->2->2->4->5->6->7->8 && K = 4
// after ReversedLinkedList: 4 2 2 1 8 7 6 5
//

struct node {
  int data;
  struct node *next;

  explicit node(int x) {
    data = x;
    next = nullptr;
  }

} *head;

struct node *reverse_by_given_size(struct node *head, int k);

//int main() {
//  return 0;
//}

struct node *reverse_by_given_size(struct node *head, int k) {
  return nullptr;
}