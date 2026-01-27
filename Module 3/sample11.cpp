/******************************************************************************

.append
*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1 = "Hadji";
    string str2 = "Tejuco";
  
    str1.append(" ");
    //Hadji 
    str1.append(str2);
    //Hadji Tejuco
    cout << str1;

    return 0;
}
