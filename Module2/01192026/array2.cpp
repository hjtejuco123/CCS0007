/******************************************************************************
Linear Search 

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int n, i, x, a[100], flag=0;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter " << n << " numbers "<< endl;
    //input
    for (i = 0; i<n;i++)
        cin >> a[i];
    //ask the user to enter x to Search
    cout << "Enter number to search: ";
    cin >> x;
    for(i=0; i<n;i++){
        if (a[i]==x){
            cout << "\nnumber " << x << " is present at position " << i+1;
            flag=1;
        }
    }
    if (flag==0) {
            cout << "number not found " << endl;
    }
    return 0;
}
