// /*Largest*/
// #include <iostream>
// using namespace std;

// int main()
// {
//   int a[5];
//   for (int i = 0; i < 5; i++)
//   {
//     cin >> a[i];
//   }
//   int secondlargest = a[0];
//   int largest = a[0];
//   for (int i = 1; i < 5; i++)
//   {
//     if (a[i] > largest)
//     {
//       largest = a[i];
//     }
//   }
//   for (int i = 0; i < 5; i++)
//   {
//     if (a[i] == largest)
//     {
//       continue;
//     }
//     else if (a[i] > secondlargest)
//     {
//       secondlargest = a[i];
//     }
//   }
//   cout << secondlargest << endl;
// }
/*Largest*/
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
  int largest = a[0];
  for (int i = 1; i < 5; i++)
  {
    if (a[i] > largest)
    {
      secondlargest = largest;
      largest = a[i];
    }
    else if (a[i] > secondlargest && a[i] < largest)
    {
      secondlargest = a[i];
    }
  }
  cout << secondlargest << endl;
}