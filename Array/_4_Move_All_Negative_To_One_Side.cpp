#include <bits/stdc++.h>
#include "./ZZZ_Utils.h"

//
// Created by yug39 on 9/29/2021.
//

using namespace std;

void start_negative_moving();

void move_negative(int *arr, int length);

void move_negative_two_pointer_approach(int *arr, int length);

//int main() {
//  start_negative_moving();
//}

void start_negative_moving() {
  pair<int *, int> array = get_array();
//  move_negative(array.first, array.second);
  move_negative_two_pointer_approach(array.first, array.second);
  print_array(array.first, array.second);
}

void move_negative(int *arr, int length) {
  int j = 0;
  for (int i = 0; i < length; ++i) {
    if (arr[i] < 0) {
      if (i != j) {
        swap(arr[i], arr[j]);
      }
      ++j;
    }
  }
}

void move_negative_two_pointer_approach(int *arr, int length) {
  int left = 0;
  int right = length - 1;

  while (left < right) {
    if (arr[left] > 0 && arr[right] < 0) {
      swap(arr[left], arr[right]);
      ++left;
      --right;
    } else if (arr[left] < 0 && arr[right] < 0) {
      ++left;
    } else if (arr[left] > 0 && arr[right] > 0) {
      --right;
    } else {
      ++left;
      --right;
    }
  }
}