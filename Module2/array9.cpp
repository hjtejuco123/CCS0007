/******************************************************************************
input two dim array 
a[size][size]
*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int n,m,i,j;
    int a[10][10];
    
    cout << "Enter order of matrix \n";
    cin >> n >> m;
    cout << "Enter " << n << " X " << m << " matrix\n";
    //input
    for (i=1;i<=n;i++)
        for (j=1; j<=m;j++)
            cin >> a[i][j];
    
    //output
    cout << "Given matrix \n";
    for (i=1; i<=n;i++){
        for (j=1; j<=m;j++){
            cout << " " << a[i][j];
        }
        cout << endl;
    }
    return 0;
}
