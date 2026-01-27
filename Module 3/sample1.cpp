/******************************************************************************

strcpy
strcat
strlen
strcmp 

*******************************************************************************/
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str1[20] = "Happy";
    char str2[20];
    cout << "Count the length of str1: ";
    cout << strlen(str1) << endl;
    strcpy(str2,"Good morning");
    strcat(str1,str2);
    cout << "Count the length of str1 (new value): ";
    cout << strlen(str1) << endl;
    cout << strcmp(str1,"HappyGood morning");
    cout << endl;
    if (!strcmp(str1,"Happy Good morning"));
        cout << str1;
    cout << endl;
    return 0;
}
