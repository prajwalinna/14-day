/*Reverse an array*/
#include <iostream>
using namespace std;
int n = 5;
void swap(int &a, int &b)
{
  int temp;
  temp = a;
  a = b;
  b = temp;
}

void reverse(int arr[])
{
  int p = 0, q = n - 1;
  while (p < q)
  {
    swap(arr[p], arr[q]);
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
  reverse(a);
  for (int i = 0; i < 5; i++)
  {
    cout << a[i] << "\t";
  }

}