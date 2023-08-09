/*
  Function
  - DRY  => Don't Repete Yourself
  - User Defined and Built-In
  - Syntax

  returnDataType functionName(Param1, Param2, Param3)
  {
    Function Body Contain Block Of Code
  }

  - Example
  - Why We Use Functions
  - Declare A Function And Call It
*/

#include <iostream>
#include <cmath>
//#include <cctype>
using namespace std;

// Declare Function
void sayHello()
{
  cout << "Hi Osama.\n";
}

void sayHello0(string msg, string name, int age)
{
  cout << msg << " " << name << ",\n";
  cout << name << "\'s Age Is: " << age << "\n";
}

void iceBox(string item){
    if (item == "Coca Cola"){
        cout << item << "Will Be More Cold \n";
    }
    else if (item == "Apple" || item == "Frute"){
        cout << item << "Will Be More Fresh \n";
    }
    else if (item == "Juice"){
        cout << item << "Will Be More Good \n";
    }
    else {
        cout << item << "Is Invalid \n";
    }
}


void calc(int num1, int num2, string op){
    if (op == "+"){
        cout << "The Addition operation + : \n";
        cout << "First Number Is : " << num1 << " \n" ;
        cout << "Secound Number Is : " << num2 << " \n" ;
        cout << num1 << " + " << num2 << " = " << num1 + num2 << " \n";
    }
    else if (op == "-"){
        cout << "The Sub operation - : \n";
        cout << "First Number Is : " << num1 << " \n" ;
        cout << "Secound Number Is : " << num2 << " \n" ;
        cout << num1 << " - " << num2 << " = " << num1 - num2 << " \n";
    }
    else if (op == "*"){
        cout << "The Mul operation - : \n";
        cout << "First Number Is : " << num1 << " \n" ;
        cout << "Secound Number Is : " << num2 << " \n" ;
        cout << num1 << " * " << num2 << " = " << num1 * num2 << " \n";
    }
    else if (op == "/"){
        cout << "The Div operation - : \n";
        cout << "First Number Is : " << num1 << " \n" ;
        cout << "Secound Number Is : " << num2 << " \n" ;
        cout << num1 << " / " << num2 << " = " << num1 / num2 << " \n";
    }
    else if (op == "%"){
        cout << "The Mod operation - : \n";
        cout << "First Number Is : " << num1 << " \n" ;
        cout << "Secound Number Is : " << num2 << " \n" ;
        cout << num1 << " % " << num2 << " = " << num1 % num2 << " \n";
    }
}


// Parameter Default Value
void details(string msg = "Hello", string name = "Unknown"){
    cout << msg << " " << name << "\n" ;
}




// Woung Fun => Static Fun (So Many Modefiying)
void newcalc(int n1, int n2, int n3){
    cout << n1 + n2 + n3 << "\n";
}

void betterCalc(int nums[], int count){
    int result = 0;
    for (int i=0; i<count; i++){
        result += nums[i];
    }
    cout << "The Result is: " << result << "\n";
}



int fun(int n1, int n2){
    cout << "Operation Is Done \n";
    return n1 + n2 ;
    cout<< "Will Not Show";
}


// Forword Declaration
int fun1(int a, int b);


int main()
{
  sayHello();
  sayHello0("Hi", "Dana", 20);

    iceBox("Coca Cola");
    iceBox("Apple");
    iceBox("Juice");
    iceBox("TV Remote");

    int x , y;
    string z;
    cout << "Plese input two number to make calc : \n ";
    cin >> x ;
    cin >> y ;
    cout << "Input The operation ( + , - , * , / , % ) :\n ";
    cin >> z ;
    calc(x, y, z);



    details();   // Hello Unknown
    details("Hi", "Musa"); // Hi Musa
    details("","Dana");   // Dana
    // Defult Parameter Must Be At End Of Function

    int arrayOfNumber[] = {10,20,30};
    int numSize = size(arrayOfNumber);
    betterCalc(arrayOfNumber, numSize);

    //int usreNums[]={0};
    //cin >> usreNums[0];
  //cout << "Hi Ahmed.\n";
  //cout << "Hi Sayed.\n";


  fun(20,70);                // Operation Is Done 90
  int xx = fun(20,70);  // 90
  cout << xx;           //  90
  cout << xx + 100; // 190

  // Call
  cout << fun1 ;


    // Built-In Functions – Math Functions

    /*
- Math Functions
  --- pow
  --- fmod
  --- ceil
  --- floor
  --- round
  --- trunc
    
    */
  cout << pow(2, 4) << "\n";     // 16
  cout << 2 * 2 * 2 * 2 << "\n"; // 16
  cout << 11 % 2 << "\n";        // 1   
  // cout << 11.5 % 2 << "\n";      // Error  => Only Int
  cout << fmod(11.5, 2) << "\n"; // 1.5
  cout << ceil(9.1) << "\n";     // 10
  cout << floor(9.9) << "\n";    // 9
  cout << round(9.5) << "\n";    // 10
  cout << round(9.4) << "\n";    // 9
  cout << round(9.49) << "\n";   // 9
  cout << trunc(9.9) << "\n";    // 9
  cout << trunc(9.5) << "\n";    // 9
  cout << trunc(9.1) << "\n";    // 9



// #include <cctype>
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


  return 0;
}

// Declaration
int fun1(int a, int b){
    return a + b ;
}