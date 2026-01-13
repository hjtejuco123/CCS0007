/******************************************************************************
trace matrix 
enter order of matrix 
4 4 

1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 

1   2   3   4 
5   6   7   8  
9   10  11  12 
13  14  15  16

m and n should be == 
1,1  1 
2,2. 6
3,3. 11
4,4  16 

sum 34

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int n,m,i,j,a[10][10],t=0;
    cout<<"Enter order of matrix: ";
    cin >> n >>m;
    for (i=1; i<=n;i++)
        for (j=1; j<=m;j++)
            cin >> a[i][j];
    
    for (i=1; i<=n;i++){
        for (j=1;j<=m;j++){
            cout << "\t" << a[i][j];
        }
        cout << endl;
    }
    if (m==n){
        for (i=1; i<=n;i++)
            for (j=1; j<=m;j++)
                if (i==j)
                    t+=a[i][j];
        cout << "\n\nTrace of give matrix is " << t;
    }else
        cout << "Not a square matrix ";
    
    
    return 0;
}



