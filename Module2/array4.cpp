/******************************************************************************
input 10 numbers
odd
even 
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
    cout << "Odd numbers " << endl;
    for (i=0; i<n;i++){
        if (a[i]%2==1)
            cout << "\t"<<a[i];
    } 
    cout << endl;
    cout << "Even numbers " << endl;
    for (i=0; i<n;i++){
        if (a[i]%2==0)
            cout << "\t"<<a[i];
    }    
    return 0;
}





