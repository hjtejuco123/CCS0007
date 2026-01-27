/******************************************************************************
//getline 
*******************************************************************************/
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[80];
    cout << "Enter a string value: ";
    //cin >> str;
    cin.getline(str,80);
    cout << "Value of string " << str << endl;

    return 0;
}
