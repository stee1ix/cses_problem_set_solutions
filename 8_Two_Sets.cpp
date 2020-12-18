#include<bits/stdc++.h>
using namespace std;

int main () {
  long long int n;
  cin >> n;
  long long int total = n * (n + 1) / 2;

  if (total & 1)
  {
    cout << "NO";
  }
  else
  {
    cout << "YES" << "\n";
    vector<long long int> set1, set2;
    total /= 2LL;

    while (n)
    {
      if (total - n >= 0)
      {
        set1.push_back(n);
        total -= n;
      }
      else
      {
        set2.push_back(n);
      }
      n--;
    }
    
    cout << set1.size() << "\n";
    for (long long int i = 0; i < set1.size(); i++)
    {
      cout << set1[i] << " ";
    }
    cout << "\n";

    cout << set2.size() << "\n";
    for (long long int i = 0; i < set2.size(); i++)
    {
      cout << set2[i] << " ";
    }

  }
 
return 0;
}
