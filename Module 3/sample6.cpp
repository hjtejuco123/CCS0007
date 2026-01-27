/******************************************************************************
*******************************************************************************/
#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
int main()
{
    char userInput[20]="Admin";
    char storedUser[20]="admin";
    
    for (int i=0; userInput[i]!='\0';i++){
        userInput[i] = tolower(userInput[i]);
    }
    
    if (strcmp(userInput, storedUser)==0)
        cout << "Login successful";
    else
        cout << "Login failed";

    return 0;
}
