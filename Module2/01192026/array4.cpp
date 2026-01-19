/******************************************************************************
Two dim array 
    data_type arrayname [row][col];
    int arrnum[10][10]; 
    
    3 x 3
    1,1     1,2     1,3
    1       2       3 
    2,1     2,2     2,3 
    4       5       6 
    3,1     3,2     3,3 
    7       8       9
*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int n,m, i,j, a[10][10];
    cout << "Enter order of matrix " << endl;
    cin >> n >> m;
    for (i=1;i<=n;i++)
        for (j=1; j<=m;j++)
            cin >> a[i][j];
            
    cout << "given matrix is \n";
    for (i=1; i<=n;i++){
        for (j=1; j<=m;j++)
            cout << "\t" << a[i][j];
            cout << endl;
    }
    return 0;
}


