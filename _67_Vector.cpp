/*
  Vector
  - What Is Vector ?
  --- Vector Is A Container For Similar Data Like Array
  --- Vectors Are Dynamic Arrays => Array That Can Change In Size
  --- Vector Is A Class Template
  - Vector Syntax => vector<Type> VariableName
  - Vector Create With All Methods
  - Loop On Elements
  - Important Notes


  We Will Cover The Comparison With Array Later
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> numsOne = {10, 20, 30, 40};
  vector<int> numsTwo{100, 200, 300, 400};
  vector<int> numsThree(4, 50);

  for (int i = 0; i < numsOne.size(); i++)
  {
    cout << numsOne.at(i) << " ";
  }

  cout << "\n===========\n";

  for (int i = 0; i < numsTwo.size(); i++)
  {
    cout << numsTwo.at(i) << " ";
  }

  cout << "\n===========\n";

  for (int i = 0; i < numsThree.size(); i++)
  {
    cout << numsThree.at(i) << " ";
  }

  cout << "\n===========\n";

  cout << "Number Of Elements Is: " << numsThree.size() << "\n";  // 4 
  
  // numsThree[50];  => Error
  numsThree.push_back(1000);

  cout << "Number Of Elements Is: " << numsThree.size() << "\n"; // 5

  cout << "\n===========\n";

  numsThree.at(0) = 1000;  // Update Value Of Index 0 (50 ===> 1000)

  for (int i = 0; i < numsThree.size(); i++)
  {
    cout << numsThree.at(i) << " ";  // 1000 50 50 1000
  }

  cout << "\n===========\n";



    vector<int> x = {1, 3, 9, 47};
    vector<string> M = {"Hi I'm Here", "C++ Developer"}; 

    //template <typename T>
    //vector<T> Z = {"a", 54, 1.2, "Dana"}
  return 0;
}

template <typename T> 
T myMax(T x, T y)
{
    vector<T> Z = {"a", 54, 1.2, "Dana"}
    return (x > y) ? x : y;
}