/* 
  We can easily observe that the number of 2s in prime factors
  is always more than or equal to the number of 5s.
  So if we count 5s in prime factors, we are done.
  Trailing 0s in n! = Count of 5s in prime factors of n!
                  = floor(n/5) + floor(n/25) + floor(n/125) + .... */

#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main ()
{
  ll n;
  cin >> n;
  ll count = 0;

  // Keep dividing n by powers of  
    // 5 and update count 
  for (ll i = 5; n / i >= 1; i *= 5) 
  {
    count += n / i;
  }
  
  cout << count;
  return 0;
}