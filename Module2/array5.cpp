/******************************************************************************
input 10 numbers
1 2 3 4 5 6 7 8 9 10
            odd             even 
            1               2 
            3               4 
            5               6 
            7               8  
            9               10
*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int a[100];
    int n, i;
    cout << "Enter n: ";
    cin >> n;
    //input 
    for (i = 0; i<n;i++){
        cin >> a[i];
    }
    cout << "Odd          Even\n";
    for (i=0; i<n;i++){
        if (a[i]%2==1)
            cout << " "<<a[i] << endl;
        else
            cout << "            " <<a[i] << endl;
    } 
    
    return 0;
}





