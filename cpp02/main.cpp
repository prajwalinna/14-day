/*Smallest*/
#include <iostream>
using namespace std;

int main()
{
  int a[10];
  for (int i = 0; i < 10; i++)
  {
    cin >> a[i];
  }
  int smallest = a[0];
  for (int i = 1; i < 10; i++)
  {
    if (a[i] < smallest)
    {
      smallest = a[i];
    }
  }
  cout << smallest << endl;
}