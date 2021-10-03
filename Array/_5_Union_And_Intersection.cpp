#include <bits/stdc++.h>
#include "../ZZZ_Utils.h"

//
// Created by yug39 on 9/29/2021.
//

using namespace std;

void start_finding_union_and_intersection();

int find_union_count(vector<int> v1, vector<int> v2);

int find_intersection_count(vector<int> v1, vector<int> v2);

//int main() {
//  start_finding_union_and_intersection();
//}

void start_finding_union_and_intersection() {
  vector<int> v1 = get_vector();
  vector<int> v2 = get_vector();

  int u_count = find_union_count(v1, v2);
  cout << "Union count is ---->  " << u_count << endl;

  int i_count = find_intersection_count(v1, v2);
  cout << "Intersection count is ---->  " << i_count << endl;
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
