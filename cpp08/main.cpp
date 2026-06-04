/*Reverse an array*/
#include <iostream>
using namespace std;
int n = 5;
void palindrome(int arr[])
{
  int p = 0, q = n - 1;
  while (p < q)
  {
    if (arr[p] != arr[q])
    {
      cout << "Not plaindrome\n";
      exit(0);
    }
    p++;
    q--;
  }
}

int main()
{
  int a[5];
  for (int i = 0; i < 5; i++)
  {
    cin >> a[i];
  }
  palindrome(a);
  cout << "Palindrome\n"
       << endl;
}