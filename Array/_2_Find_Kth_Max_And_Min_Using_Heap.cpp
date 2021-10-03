#include <bits/stdc++.h>
#include "../ZZZ_Utils.h"

//
// Created by yug39 on 10/3/2021.
//

using namespace std;

// Global variable for the length
int length = 0;

void start_find_kth_Max_And_Min_Using_Heap();

int left_child(int index);

int right_child(int index);

int parent(int index);

void make_the_min_heap(int *array);

void maintain_the_min_heap(int *array, int index);

int find_Kth_Min_Using_Heap(int *array, int k);

//int main() {
//  start_find_kth_Max_And_Min_Using_Heap();
//}

void start_find_kth_Max_And_Min_Using_Heap() {
  pair<int *, int> array = get_array();
  length = array.second;
  make_the_min_heap(array.first);

//  print_array(array.first, array.second);

  int k = 0;
  cin >> k;

  int result = find_Kth_Min_Using_Heap(array.first, k);

  cout << "The " << k << " Minimum element is :- " << result << endl;
}

int left_child(int index) {
  int left_child_index = (2 * index) + 1;
  return left_child_index >= length ? -1 : left_child_index;
}

int right_child(int index) {
  int right_child_index = (2 * index) + 2;
  return right_child_index >= length ? -1 : right_child_index;
}

int parent(int index) {
  int parent_index = (index - 1) / 2;
  return parent_index < 0 ? -1 : parent_index;
}

void make_the_min_heap(int *array) {
  for (int index = length / 2; index >= 0; --index) {
    maintain_the_min_heap(array, index);
  }
}

void maintain_the_min_heap(int *array, int index) {
  int left_child_index = left_child(index);
  int right_child_index = right_child(index);
  int min_child_index = 0;

  if (left_child_index == -1 && right_child_index == -1) {
    return;
  } else if (left_child_index == -1) {
    min_child_index = right_child_index;
  } else if (right_child_index == -1) {
    min_child_index = left_child_index;
  } else {
    min_child_index = array[left_child_index] < array[right_child_index] ? left_child_index : right_child_index;
  }


  if (array[index] > array[min_child_index]) {
    swap(array[index], array[min_child_index]);
    maintain_the_min_heap(array, min_child_index);
  }
}

int find_Kth_Min_Using_Heap(int *array, int k) {
  int result = 0;
  for (int i = 0; i < k; ++i) {
    swap(array[0], array[length-1]);
    result = array[length-1];
    --length;
    maintain_the_min_heap(array, 0);
  }
  return result;
}