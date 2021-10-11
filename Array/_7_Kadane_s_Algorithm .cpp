#include <bits/stdc++.h>
#include "../ZZZ_Utils.h"

//
// Created by yug39 on 10/3/2021.
//

using namespace std;

void start_finding_largest_sum_contiguous_sub_array();

int get_largest_sum_contiguous_sub_array(const int *array, int length);

int main() {
  start_finding_largest_sum_contiguous_sub_array();
}

void start_finding_largest_sum_contiguous_sub_array() {
  pair<int *, int> array = get_array();

  int result = get_largest_sum_contiguous_sub_array(array.first, array.second);

  cout << "The Largest sum contiguous sub array is :- " << result << endl;
}

int get_largest_sum_contiguous_sub_array(const int *array, int length) {
  int result = INT_MIN;
  int sum = 0;

  for (int index = 0; index < length; ++index) {
    // but if the sum becomes negative then adding the element is waste
    // so here we set the sum to the zero
    if (sum < 0) {
      sum = 0;
    }

    // we are just adding the all the elements to the sum
    sum += array[index];

    // In the result we are saving the maximum of between two
    result = max(sum, result);
  }

  return result;
}