#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int rev = 0, last = 0;
  int temp = n;

  while (n != 0)
  {
    last = n % 10;
    n = n / 10;
    rev = rev * 10 + last;
  }
  if (rev == temp)
  {
    cout << "Palindrome" << endl;
  }
  else
  {
    cout << "Not Palindrome" << endl;
  }
}