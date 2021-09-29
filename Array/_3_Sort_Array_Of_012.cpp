#include <bits/stdc++.h>
#include "./ZZZ_Utils.h"

//
// Created by yug39 on 9/29/2021.
//

using namespace std;

void start_sorting_012();

int *count_012(const int *arr);

void apply_occur_sort(int *array, const int *count_occurrence_array);

//int main() {
//  start_sorting_012();
//}

void start_sorting_012() {
  int *array = get_array();
  int *count_occurrence_array = count_012(array);
  apply_occur_sort(array, count_occurrence_array);
  print_array(array);
}

int *count_012(const int *arr) {
  int *array = new int[3];

  array[0] = 0;
  array[1] = 0;
  array[2] = 0;

  for (int i = 0; i < sizeof(arr); ++i) {
    ++array[arr[i]];
  }

  return array;
}

void apply_occur_sort(int *array, const int *count_occurrence_array) {
  for (int i = 0, index=0; i < sizeof(count_occurrence_array); ++i) {
    for (int j = 0; j < count_occurrence_array[i]; ++j, ++index) {
      array[index] = i;
    }
  }
}
