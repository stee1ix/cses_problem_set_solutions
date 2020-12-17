/*
1.if 1 then 1
2.if 2 or 3 then NO SOLUTION
3.put all even numbers first and all odd numbers after that
4.the intersection of even and odd sets should not be 2, 1(this will take care of itself)
*/

#include<iostream>
using namespace std;
#define ll long long

int main() 
{
  ll n;
  cin >> n;
  if (n == 1)
  {
    cout << "1";
  }
  else if (n == 2 || n == 3)
  {
    cout << "NO SOLUTION";
  }
  else
  {
    for (ll i = 1; i <= n; i++)
    {
      if (i % 2 == 0)
      {
        cout << i << " ";
      }
    }
    for (ll i = 0; i <= n; i++)
    {
      if (i % 2 != 0)
      {
        cout << i << " ";
      }
    }
  }

  return 0;
}
