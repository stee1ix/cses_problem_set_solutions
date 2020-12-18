/*
  1. if column > row then
      if row is odd then ans is (max element) - column + 1    : max element = (row * row)
      else ans is (max element) + column                      : max element = (row-1) * (row-1)
  2. if column < row then
      if column is odd then ans is (max element) + column      : max element = (column-1) * (column-1)
      else and is (max element) - row + 1                      : max element = (column * column)
*/

#include<iostream>
using namespace std;

int main () {
  int t;
  cin >> t;

  while (t--) {
    long long y, x;
    cin >> x >> y;

    if (y < x) {

      long long ele;
      if (x % 2 != 0) {
        ele = ((x-1)*(x-1)) + y;
      }
      else {
        ele = (x * x) - y + 1;
      }
      cout << ele << "\n";
    }

    else {

      long long ele;
      if (y % 2 != 0) {
        ele = (y * y) - x + 1;
      }
      else {
        ele = ((y-1)*(y-1)) + x;
      }
      cout << ele << "\n";
    }

  }

  return 0;
}