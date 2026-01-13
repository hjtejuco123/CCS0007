/******************************************************************************
base on previous example with simulation 
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
        cout << "Procesing element a["<< i <<"] = "<<a[i]<<endl;
        if (small>a[i]){
            small=a[i];
            cout << "Updated smallest value " << small <<endl;   
        }
        if(lar<a[i]){ 
            lar=a[i];
            cout << "Updated largest value " << lar <<endl;     
        }
         cout << "largest = " << lar << " smallest = " << small << endl;
         cout << "=================================="<<endl;
    }
    cout <<endl;
    cout << "Final Result " <<endl;
    cout << "largest = " << lar << " smallest = " << small << endl;
    return 0;
}
