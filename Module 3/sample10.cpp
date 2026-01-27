/******************************************************************************

.concatenate
*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1 = "Hadji";
    string str2 = "Tejuco";
  
    string result = str1 + " " + str2;
    string result2 = str1 + str2;
    cout << result << endl;
    cout << result2 << endl;

    return 0;
}
