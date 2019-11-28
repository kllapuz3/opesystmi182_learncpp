#include <iostream>
using namespace std;

int main()
{
    int num1, rem1;
 
    cout << "Input an integer : ";
    cin >> num1 ;
    rem1 = num1 % 2;
    if (rem1 == 0)
        cout << num1 << " is an even integer\n";
    else
        cout << num1 << " is an odd integer\n";

    return 0;
}
