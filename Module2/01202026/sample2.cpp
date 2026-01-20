/******************************************************************************
Library - Store Books 
Implement Two array 

*******************************************************************************/
#include <iostream>
using namespace std;

void calculateTotalBooks(int library[3][5],int rows);
int main()
{
    //two dim array - 3 section / 5 Shelf 
    int library[3][5];
    
    cout << "Enter books quantity for 3 sections and 5 shelves\n";
    for (int i = 0; i<3; i++){
        cout << "Section " << i+1 << ":\n";
        for (int j=0;j<5;j++){
            cout << "Shelf " << j+1 << ": ";
            cin >> library[i][j];
        }
    }
    calculateTotalBooks(library,3);

    return 0;
}

void calculateTotalBooks(int library[3][5],int rows){
    int total = 0;
    for (int i=0; i<rows;i++){
        for (int j=0;j<5;j++){
            total += library[i][j];
        }
    }
    cout << "\nTotal Books in the Libary " << total << endl;
    
    
}




