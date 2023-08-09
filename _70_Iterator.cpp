/*
  Vector
  - Iterator

  --- Containers
  ------ Array
  ------ Vector
  ------ List

  --- What Is Iterators
  ------ Iterators Used To Point To Memory Address Of The Container

  --- Why We Use Iterators
  [1] Simplify The Code => No Need To See The Full Iteration On Containers
  [2] Support For Many Algorithms Like Sorting And Finding
  [3] Allow The Dealing With One Element Without The Need To Load The Full List
  [4] Work The Same Way With All Containers
  [5] It Reduce The Complexity And Execution Time Of The Application

  --- Syntax
  ------ Container<Type>::iterator IteratorName;

  --- Initialize
  ------ With Vector Syntax
  ------ With Auto Keyword

  --- Print
  ------ [*] Dereference => Dont Print The Iterator, Print What Its Point To

  --- Notes
  ------ This Is Not Pointer, We Will Talk About Pointer Later

  Search For
  - Iterators Type
  - C++ Containers
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> nums = { 10, 20, 30, 40 };
  vector<int>::iterator it = nums.begin();
  auto ite = nums.begin() + 1;

  cout << "First Element Is: " << *it << "\n";              // 10
  cout << "Second Element Is: " << *ite << "\n";            // 20
  cout << "First Element Is: " << *nums.begin() << "\n";    // 10

  nums.erase(nums.begin(), nums.begin() + 2);               // Delete Values (From Begin To Begin + 2)  =>> 30 40  

  cout << "First Element After Delete Is: " << *nums.begin() << "\n";  // The First Value Now Is 30















  vector<int> nums = { 10, 20, 30, 40 };
  vector<int>::iterator first = nums.begin();    // Point On First Item
  vector<int>::iterator last = nums.end() - 1;   // Point On Last Item

  cout << "First Element Is: " << *first << "\n"; // 10
  cout << "Second Element Is: " << first[1] << "\n"; // 20   => No Need To *
  cout << "Third Element Is: " << first[2] << "\n"; // 30

  cout << "Last Element Is: " << *last << "\n"; // 40
  
  //cout << "Before Last Element Is: " << *last - 1 << "\n"; // 40 - 1 = 39 
  cout << "Before Last Element Is: " << *(last - 1) << "\n"; // 30

  advance(first, 3);

  cout << "First Element Is: " << *first << "\n"; // 40

  advance(first, -2);

  cout << "First Element Is: " << *first << "\n"; // 20
  return 0;
}


/*
  Vector
  - Iterator
  --- Traversing
  ------ begin()
  ------ end()
  ------ advance()
*/