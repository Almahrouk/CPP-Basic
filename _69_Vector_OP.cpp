/*
  Vector

  - Access
  --- at()
  --- Square Brackets [] < Do Not Use

  - Add
  --- push_back => Add Element To The End

  - Update
  --- at()

  - Delete
  --- pop_back() => Remove Element From The End
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> nums = { 10, 20, 30 };

  // Access
  cout << nums.at(2) << "\n";
  cout << nums[2] << "\n";     // Don't Use It

  //cout << nums.at(3) << "\n";  // Error
  //cout << nums[3] << "\n";     // Value





  // Add
  nums.push_back(40);   // 10 20 30 40 (Insert At End Of Vector)
  cout << nums.size() << "\n"; // 4
  cout << nums.at(3) << "\n"; // 40
  

  // Update 
  nums.at(3) = 100;
  cout << nums.at(3) << "\n"; // 100
  nums.push_back(500);
  cout << nums.size() << "\n"; // 5
  cout << nums.at(4) << "\n"; // 500

  // Delete Element
  nums.pop_back();     // Delete At End Of The Vector
  cout << nums.size() << "\n"; // 4

  return 0;
}


/*
  Vector
  - size()     => Current Number Of Elements
  - max_size() => Maximum Number Of Elements
  - capacity() => Storage Capacity
  - front()    => First Element
  - back()     => Last Element
  - clear()    => Clear All Elements From Vector
  - empty()    => Check If Its Empty Or No
*/

/*
  vector<int> nums = { 10, 20, 30, 40 };
  cout << nums.size() << "\n";
  cout << nums.max_size() << "\n";
  nums.push_back(50);
  nums.push_back(60);
  nums.push_back(70);
  nums.push_back(80);
  cout << nums.capacity() << "\n";
  cout << nums.front() << "\n";
  cout << nums.at(0) << "\n";
  cout << nums.back() << "\n";
  cout << nums.at(nums.size() - 1) << "\n";
  nums.clear();
  cout << nums.size() << "\n";
  nums.push_back(100);
  if (nums.empty())
  {
    cout << "Vector Is Empty\n";
  }
  else
  {
    cout << "Vector Is Not Empty\n";
  }

*/