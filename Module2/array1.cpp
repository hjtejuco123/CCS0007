//array  - collection of data 
// syntax - data_type arrayname[elements];
// int number[255]; // start to count 0
/*
    a[0] = 1 
    a[1] = 2 
    a[2] = 3 
    a[3] = 4 
    a[4] = 5
    
*/
//access -> cout << number[10] << endl;

// int number = 1 

//input and display
#include <iostream>
using namespace std;
int main()
{
    int a[50];
    int n, i;    //ask the n, i - loop (array)
    cout << "Enter n: ";
    cin >> n; //5
    cout << "Please enter " << n << " numbers: "<<endl;
    //input 
    for (i = 0; i<n;i++){
        cin >> a[i];
        /*
        a[0] = 1 
        a[1] = 2 
        a[2] = 3 
        a[3] = 4 
        a[4] = 5
        */
    }
    cout << "Display array content " <<endl;
     for (i = 0; i<n;i++){
        cout << " " << a[i];
    }

    return 0;
}





