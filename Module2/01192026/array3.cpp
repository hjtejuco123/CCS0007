/******************************************************************************
//apply linear search  + divisible numbers 
*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int n, i, x, a[100];
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter " << n << " numbers ";
    for (i=0; i<n; i++)
        cin  >> a[i];
    cout << "Enter a nubmer to divide " << endl;
    cin >> x;
    for (i=0; i<n;i++){
        if (a[i]%x==0)
            cout << "\t" << a[i];
    }
    return 0;
}
