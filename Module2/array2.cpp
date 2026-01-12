
#include <iostream>
using namespace std;

int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    char x[5] = {'H','e','l','l','o'};
    int i; 
    //display content array 
 
    for (i = 0; i<10;i++){
        cout << a[i] << "\t";
    }
    cout << endl;
    for (i = 0; i<5;i++){
        cout << x[i]<<endl;
    }
    return 0;
}
