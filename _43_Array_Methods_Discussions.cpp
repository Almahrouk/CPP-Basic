/*
  Arrays
  - Useful Methods
  --- at
  --- front
  --- back
  --- fill
  --- size
  --- empty
*/

#include <array>
#include <iostream>
using namespace std;

int main()
{
    array<int, 10> x;
  array<int, 4> nums = {100, 200, 300, 400};
  cout << nums[0] << "\n";      // 100
  cout << nums.front() << "\n"; // 100
  cout << nums[3] << "\n";      // 400
  cout << nums.back() << "\n";  // 400
  cout << nums.at(1) << "\n";   // 200
  cout << nums.size() << "\n";  // 4
  cout << nums.empty() << "\n"; // 0 => False


  // A Game :
  int seq[3][5] = {
    {1, 5, 10, 16, 23},
    {2, 4, 8, 16, 32},
    {1, 1, 2, 3, 5}
  };
  int points=0;
  int answers[3];

  cout << "Type The Missing In Sequences: \n";

  cout << "Sequence 1 \n";
  cout << " | 1 | 5 | 10 | 16 | ?? |  \n";
  cin >> answers[0];
  
  cout << "Sequence 1 \n";
  cout << " | 2 | 4 | 8 | 16 | ?? |  \n";
  cin >> answers[1];

  cout << "Sequence 1 \n";
  cout << " | 1 | 1 | 2 | 3 | ?? |  \n";
  cin >> answers[2];
  
  if (answers[0] == seq[0][4]){ points++; }
  if (answers[1] == seq[1][4]){ points++; }
  if (answers[2] == seq[2][4]){ points++; }

  cout << "Your Points Is: " << points << " From 3";
  return 0;
}