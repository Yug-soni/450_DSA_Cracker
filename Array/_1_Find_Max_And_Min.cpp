#include <bits/stdc++.h>
#include "./ZZZ_Utils.h"

//
// Created by yug39 on 9/29/2021.
//

using namespace std;

void start_finding_max_and_min();

pair<int, int> max_and_min(const int *arr, int length);

int main() {
  start_finding_max_and_min();
}

void start_finding_max_and_min() {
  pair<int *, int> array = get_array();
  pair<int, int> result = max_and_min(array.first, array.second);

  cout << "The Minimum number in array is :- " << result.first << endl;
  cout << "The Maximum number in array is :- " << result.second << endl;
}

pair<int, int> max_and_min(const int *array, int length) {
  pair<int, int> result = make_pair(INT_MAX, INT_MIN);

  for (int i = 0; i < length; ++i) {
    if (array[i] < result.first) {
      result.first = array[i];
    }
    if (array[i] > result.second) {
      result.second = array[i];
    }
  }

  return result;
}