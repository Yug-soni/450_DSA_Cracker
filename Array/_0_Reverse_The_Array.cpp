#include <bits/stdc++.h>
#include "../ZZZ_Utils.h"

//
// Created by yug39 on 9/29/2021.
//

using namespace std;

void start_reversing_the_array();

void reverse_the_array(int *array, int length);

//int main() {
//  start_reversing_the_array();
//}

void start_reversing_the_array() {
  pair<int *, int> array = get_array();
  reverse_the_array(array.first, array.second);
  print_array(array.first, array.second);
}

void reverse_the_array(int *array, int length) {
  int left = 0;
  int right = length - 1;

  for (int i = 0; i < length / 2; ++i, --right, ++left) {
    swap(array[left], array[right]);
  }
}