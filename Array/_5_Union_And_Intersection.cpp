#include <bits/stdc++.h>

//
// Created by yug39 on 9/29/2021.
//

using namespace std;

void start();

vector<int> get_vector();

int find_union_count(vector<int> v1, vector<int> v2);

int find_intersection_count(vector<int> v1, vector<int> v2);

int main() {
  start();
}

void start() {
  vector<int> v1 = get_vector();
  vector<int> v2 = get_vector();

  int u_count = find_union_count(v1, v2);
  cout << "Union count is ---->  " << u_count << endl;

  int i_count = find_intersection_count(v1, v2);
  cout << "Intersection count is ---->  " << i_count << endl;
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

int find_union_count(vector<int> v1, vector<int> v2) {
  int union_count = 0;
  int v1n = 0, v2n = 0;

  while (true) {
    if (v1n >= v1.size() || v2n >= v2.size()) {
      break;
    } else if (v1[v1n] < v2[v2n]) {
      ++v1n;
    } else if (v1[v1n] > v2[v2n]) {
      ++v2n;
    } else {
      ++v1n;
      ++v2n;
    }
    ++union_count;
  }

  union_count += (int) v1.size() - v1n;
  union_count += (int) v2.size() - v2n;

  return union_count;
}

int find_intersection_count(vector<int> v1, vector<int> v2) {
  int i_count = 0;

  int v1n = 0, v2n = 0;

  while (true) {
    if (v1n >= v1.size() || v2n >= v2.size()) {
      break;
    } else if (v1[v1n] < v2[v2n]) {
      ++v1n;
    } else if (v1[v1n] > v2[v2n]) {
      ++v2n;
    } else {
      ++v1n;
      ++v2n;
      ++i_count;
    }

  }

  return i_count;
}
