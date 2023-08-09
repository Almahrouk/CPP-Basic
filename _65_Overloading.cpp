/*
  Function
  - Function Overloading
  --- Number And/Or Type Of Params Is Different
*/

#include <iostream>
using namespace std;

void print(int a, int b)
{
  cout << "Number One Is: " << a << "\n";
  cout << "Number Two Is: " << b << "\n";
}

void print(int a, int b, int c)
{
  cout << "Number One Is: " << a << "\n";
  cout << "Number Two Is: " << b << "\n";
  cout << "Number Three Is: " << c << "\n";
}

void print(string a, string b)
{
  cout << "Text One Is: " << a << "\n";
  cout << "Text Two Is: " << b << "\n";
}

int add(int num);

int main()
{
  print(10, 20);
  print(100, 200, 300);
  print("Osama", "Elzero");




  cout << add(5);
  return 0;
}







int add(int num)
{
  if (num == 0)
  {
    return 0;
  }
  cout << num << "\n";
  cout << "===============\n";
  return num + add(num - 1);
}

// 5 + (add(4))
// 5 + ( 4 + add(3) )
// 5 + ( 4 + ( 3 + add(2) ) )
// 5 + ( 4 + ( 3 + ( 2 + add(1) ) ) )
// 5 + ( 4 + ( 3 + ( 2 + ( 1 + add(0) ) ) ) )
