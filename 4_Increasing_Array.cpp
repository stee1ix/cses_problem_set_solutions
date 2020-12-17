/*
1.input the array size n
2.input the array a
3.loop from 0 to n - 1
4.total += abs(a[i] - a[i+1])
5.update a[i + 1] = a[i]
*/


#include<iostream>
using namespace std;

int main() {
  long long n, count = 0;
  cin >> n;
  long long a[n];

  for (long long i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  long long total = 0;
  for (long long i = 0; i < n - 1; i++)
  {
    if (a[i + 1] < a[i])
    {
      total += abs(a[i] - a[i + 1]);
      a[i + 1] = a[i];
    }
  }
  
  cout << total;

  return 0;
}
