/******************************************************************************
Enter n: 8 

100 530 840 320 3 12 43 121 

smallest = 3 
largest = 840 

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int n, i, a[100],small,lar;
    cout << "enter n ";
    cin >> n;
    for (i =0;i<n;i++){
        cin >> a[i];
    }
    lar=a[0];
    small=a[0];
    for (i =0; i<n; i++){
        //cout << " " <<a[i] ;
        if (small>a[i])
            small=a[i];
        else if(lar<a[i]) 
            lar=a[i];
    }
    //
    cout <<endl;
    cout << "largest = " << lar << " smallest = " << small << endl;

    return 0;
}
