#include <bits/stdc++.h>
#include "../ZZZ_Utils.h"

//
// Created by yug39 on 9/29/2021.
//

using namespace std;

void start_finding_kth_max_and_min();

pair<int, int> kth_max_and_min_brute_force(const int *array, int length, int k);

//int main() {
//  start_finding_kth_max_and_min();
//}

void start_finding_kth_max_and_min() {
  pair<int *, int> array = get_array();
  int k = 3;
  pair<int, int> result = kth_max_and_min_brute_force(array.first, array.second, k);

  cout << "The " << k << " Minimum element in array is :- " << result.first << endl;
  cout << "The " << k << " Maximum element in array is :- " << result.second << endl;

}

pair<int, int> kth_max_and_min_brute_force(const int *array, int length, int k) {
  pair<int, int> result = make_pair(INT_MAX, INT_MIN);
  pair<int, int> left_bound = make_pair(INT_MIN, INT_MAX);

  for (int i = 0; i < k; ++i) {
    result.first = INT_MAX;
    result.second = INT_MIN;
    for (int j = 0; j < length; ++j) {
      if (array[j] < result.first && array[j] > left_bound.first) {
        result.first = array[j];
      }
      if (array[j] > result.second && array[j] < left_bound.second) {
        result.second = array[j];
      }
    }
    left_bound.first = result.first;
    left_bound.second = result.second;
  }

  return result;
}