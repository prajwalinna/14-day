#include <iostream>
using namespace std;

int main()
{
  int a[5];
  for (int i = 0; i < 5; i++)
  {
    cin >> a[i];
  }
  int secondlargest = a[0];
  int thirdLargest = a[0];
  int largest = a[0];
  for (int i = 1; i < 5; i++)
  {
    if (a[i] > largest)
    {
      thirdLargest = secondlargest;
      secondlargest = largest;
      largest = a[i];
    }
    else if (a[i] > thirdLargest && a[i] < secondlargest && a[i] < largest)
    {
      thirdLargest = a[i];
    }
  }
  cout << thirdLargest << endl;
}

