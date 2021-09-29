#include <bits/stdc++.h>
//
// Created by yug39 on 9/29/2021.
//

using namespace std;

#include "ZZZ_Utils.h"

int *get_array() {
  int length;
  cin >> length;
  int *arr = new int[length];

  for (int i = 0; i < length; ++i) {
    cin >> arr[i];
  }

  return arr;
}

void print_array(int *array) {
  for(int i=0; i<sizeof(array) ;++i) {
    cout << array[i] << " ";
  }
  cout << endl;
}

vector<int> get_vector() {
  int n = 0;
  cin >> n;

  vector<int> v;
  for (int i = 0; i < n; ++i) {
    int number;
    cin >> number;
    v.push_back(number);
  }

  sort(v.begin(), v.end());

  return v;
}