/*
  Function                     #include <cctype>
  - Built-In Functions
  --- cctype Functions
  ------ tolower()
  ------ toupper()
  ------ isupper()
  ------ islower()
  ------ isspace()

  - Create 2 Applications
  --- Swap Case App
  --- Remove Spaces App
*/





/*
  Function                    #include <algorithm>
  - Built-In Functions
  --- Algorithm Header
  ------ min
  ------ max
  ------ count

  - Create 3 Applications
  --- Find Minimum Number
  --- Find Maximum Number
  --- Count Number Occurance
*/

#include <iostream>
#include <cctype>
#include <algorithm>
using namespace std;

int main()
{
  cout << "A\n";                      // A
  cout << tolower('A') << "\n";       // 97 => ASCII Value
  cout << char(tolower('A')) << "\n"; // a
  cout << char(97) << "\n";           // a
  cout << "=====================\n";
  cout << "b\n";                      // b
  cout << toupper('b') << "\n";       // 66 => ASCII Value
  cout << char(toupper('b')) << "\n"; // B
  cout << char(66) << "\n";           // B
  cout << "=====================\n";

  string nameone = "ElZEro"; // eLzeRO eLzeRO
  int nameoneSize = size(nameone);

  for (int i = 0; i < nameoneSize; i++)
  {
    if (isupper(nameone[i]))
    {
      cout << char(tolower(nameone[i]));
    }
    else
    {
      cout << char(toupper(nameone[i]));
    }
    // cout << nameone[i] << "\n";
    // cout << int(nameone[i]) << "\n";
  }

  cout << "\n=====================\n";

  string nametwo = "E\nl  z  \n\te r\t\no";
  int nametwoSize = size(nametwo);

  for (int i = 0; i < nametwoSize; i++)
  {
    // if (nametwo[i] == ' ')
    // {
    //   continue;
    // }
    if (isspace(nametwo[i]))
    {
      continue;
    }
    cout << nametwo[i];
  }






/*                                 **************************                      */

cout << min(10, -20) << "\n";                         // -20
  cout << min(10, 20) << "\n";                        // 10
  cout << min('a', 'c') << "\n";                      // a
  cout << min('a', 'C') << "\n";                      // C
  cout << int('a') << "\n";                           // 97
  cout << int('C') << "\n";                           // 67
  cout << min({10, -20, 30, -100, 100, -50}) << "\n"; // -100
  cout << "=======================\n";


  cout << max(10, -20) << "\n";                       // 10
  cout << max(10, 20) << "\n";                        // 20
  cout << max('a', 'c') << "\n";                      // c
  cout << max('a', 'C') << "\n";                      // a
  cout << int('a') << "\n";                           // 97
  cout << int('C') << "\n";                           // 67
  cout << max({10, -20, 30, -100, 100, -50}) << "\n"; // 100
  cout << "=======================\n";




  int nums[] = {10, -20, 30, -100, 100, -50};
  int numsSize = size(nums);
  int checkMinNum = 0;

  for (int i = 0; i < numsSize; i++)
  {
    if (nums[i] < checkMinNum)
    {
      checkMinNum = nums[i];
    }
  }

  cout << checkMinNum << "\n";

  cout << "=======================\n";





// Count Fun => Rebetter for a number
  int numsTwo[] = {10, 20, 10, 10, 13, 15, 100, 20, 10};
  int numsTwoSize = size(numsTwo);
  int counter = 0;
  int choosenNum = 10;

  for (int i = 0; i < numsTwoSize; i++)
  {
    if (numsTwo[i] == choosenNum)
    {
      counter++;
    }
  }

  cout << choosenNum << " Found " << counter << " Times";





  return 0;
}