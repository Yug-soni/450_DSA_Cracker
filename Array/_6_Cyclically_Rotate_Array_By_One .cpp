#include <bits/stdc++.h>
#include "../ZZZ_Utils.h"

//
// Created by yug39 on 10/3/2021.
//

using namespace std;

void start_rotating_an_array_by_one();

void rotate_an_array_by_one(int *array, int length);

//int main() {
//  start_rotating_an_array_by_one();
//}

void start_rotating_an_array_by_one() {
  pair<int *, int> array = get_array();
  rotate_an_array_by_one(array.first, array.second);
  print_array(array.first, array.second);
}

void rotate_an_array_by_one(int *array, int length) {
  // saving the last element
  int last_element = array[length - 1];

  for (int index = length - 1; index > 0; --index) {
    // for example if array is :-
    // array :- 1 2 3 4 5
    // then the steps go like this :-
    // 1 2 3 4 5
    // 1 2 3 4 4
    // 1 2 3 3 4
    // 1 2 2 3 4
    // 1 1 2 3 4
    array[index] = array[index - 1];
  }

  // and here in the last step
  // 5 1 2 3 4
  array[length - length] = last_element;
}