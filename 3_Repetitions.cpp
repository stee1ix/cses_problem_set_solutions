/*   1.begin a the start of the string
    2.pick the character and check equality with the following character
    3.if equal then frequency++ and store that character
    4.else pick that next character and repeat step 2
*/

#include<iostream>
#include<string>
using namespace std;

int main() {
  string s;
  int frequency = 1;

  getline(cin, s);
  int l = s.length();

  for (int i = 0; i < l; i++) 
  {
    int curr_freq = 1;

    while (s[i] == s[i+1])
    {
      curr_freq++;
      i++;
    }

    if (curr_freq > frequency) {
      frequency = curr_freq;
    }

  }
  cout << frequency;  

  return 0;
}