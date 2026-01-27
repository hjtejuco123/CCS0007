/******************************************************************************
*******************************************************************************/
#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
int main()
{
    char password[]="pass123";
    bool upper=false, lower=false, digit=false;

    for (int i=0;password[i] != '\0';i++ ){
        if (isupper(password[i])) upper=true;
        if (islower(password[i])) lower=true;
        if (isdigit(password[i])) digit=true;
        
    }
    if (upper && lower && digit)
        cout << "Password is strong";
    else
        cout << "Password is weak";
    
    
    return 0;
}
