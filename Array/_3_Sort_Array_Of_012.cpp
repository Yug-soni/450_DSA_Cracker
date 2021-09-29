#include <bits/stdc++.h>
#include "./ZZZ_Utils.h"

//
// Created by yug39 on 9/29/2021.
//

using namespace std;

void start_sorting_012();

pair<int *, int> count_012(const int *arr, int length);

void apply_occur_sort(int *array, int a_length, const int *count_occurrence_array, int c_length);

//int main() {
//  start_sorting_012();
//}

void start_sorting_012() {
  pair<int *, int> array = get_array();
  pair<int *, int> count_occurrence_array = count_012(array.first, array.second);
  apply_occur_sort(array.first, array.second, count_occurrence_array.first, count_occurrence_array.second);
  print_array(array.first, array.second);
}

pair<int *, int> count_012(const int *arr, int length) {
  int *array = new int[3];

  array[0] = 0;
  array[1] = 0;
  array[2] = 0;

  for (int i = 0; i < length; ++i) {
    ++array[arr[i]];
  }

  return make_pair(array, 3);
}

void apply_occur_sort(int *array, int a_length, const int *count_occurrence_array, int c_length) {
  for (int i = 0, index = 0; i < c_length; ++i) {
    for (int j = 0; j < count_occurrence_array[i]; ++j, ++index) {
      array[index] = i;
    }
  }
}
