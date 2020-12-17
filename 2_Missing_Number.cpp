/*  1.take input of elements and add it to total_sum\
    2.calculate the sum of numbers from 1 to n {(n(n+1))/2}
    3.subtract the total_sum from the sum of numbers 
*/

#include<iostream>
using namespace std;

int main() {
  long long n, total_sum = 0;
  cin >> n;
  for (int i = 0; i < n - 1; i++)
  {
    int ele;
    cin >> ele;
    total_sum += ele;
  }

  cout << (n*(n+1)/2) - total_sum;  
}