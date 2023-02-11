#include <bits/stdc++.h>
using namespace std;

int main()
{
  // your code goes here
  int t;
  cin >> t;
  while (t--)
  {
    int n, s;
    cin >> n >> s;
    int a = 0;
    while (n >= 0 && a <= n)
    {
      if ((a + n) == s)
      {
        break;
      }
      else
      {
        if ((a + n) > s)
        {
          n--;
        }
        else
        {
          a++;
        }
      }
    }
    cout << abs(a - n) << endl;
  }
  return 0;
}