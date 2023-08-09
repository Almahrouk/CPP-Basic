/*
  Arrays
  - Array Class
  - Test Methods

  Syntax
  Template<Type, Size> Identifier;
*/

#include <array>
#include <iostream>
using namespace std;

int main()
{
  // int points[4] = {1, 2, 3, 4}; // C-Style Array   => has a lot of error
  array<int, 4> points = {1, 2, 3, 4};   // The Best 

  cout << points[0] << "\n";
  cout << points[1] << "\n";
  cout << points[2] << "\n";
  cout << points[3] << "\n";
  cout << "Elements Count: " << points.size() << "\n";   // 4

  points.fill(10);   // points = {10, 10, 10, 10}
  cout << points[0] << "\n";  // 10
  cout << points[1] << "\n";
  cout << points[2] << "\n";
  cout << points[3] << "\n";

  points.fill('A');  // points = {65, 65, 65, 65}  => ascii code of A
  cout << points[0] << "\n";
  cout << points[1] << "\n";
  cout << points[2] << "\n";
  cout << points[3] << "\n";

  points.fill(true); // points = {1, 1, 1, 1}
  cout << points[0] << "\n";
  cout << points[1] << "\n";
  cout << points[2] << "\n";
  cout << points[3] << "\n";


  points.fill(false);  // points = {0, 0, 0, 0}
  cout << points[0] << "\n";
  cout << points[1] << "\n";
  cout << points[2] << "\n";
  cout << points[3] << "\n";
  return 0;
}