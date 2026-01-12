/******************************************************************************
//compute for the sum 
input a,b,c,d,e sum = a+b+c+d+e
*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int a[100];
    int i, n;
    long sum=0;

    cout << "Enter n: "<< endl;
    cin >> n;
    cout << "Enter " << n  << " numbers "<<endl;
    for (i=0; i<n;i++){
        cin >> a[i];
    }
    for (i=0; i<n;i++){
        sum += a[i];        
        cout <<  sum << endl;
    }
    cout <<  sum << endl;


    return 0;
}
