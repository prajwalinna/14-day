#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int temp = n;
  int sum = 0;
  while (n != 0)
  {
    int last = n % 10;
    int cube = last * last * last;
    sum += cube;
    n = n / 10;
  }
  if (sum == temp)
  {
    cout << "Armstrong Number" << endl;
  }
  else
  {
    cout << "Not Armstrong Number" << endl;
  }
}