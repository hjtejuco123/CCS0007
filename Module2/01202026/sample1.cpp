/******************************************************************************
syntax = data_type array_name [row][col];
            int arrnum[4][2];
TWO DIM ARRAY
*******************************************************************************/
//Banking app - Store Account Balances
#include <iostream>
using namespace std;

void calculateTotalBalance(int accounts[3][4], int rows);

int main()
{
    int accounts[3][4]; //3 customers, 4 months
    cout << "Enter account balances for 3 customers over 4 months\n";
    for (int i=0; i<3; i++){
        cout << "Customer " << i+1 << ":\n";
        for (int j = 0; j<4;j++) {
            cout << "Month " << j+1 << ": ";
            cin >> accounts[i][j];
        }
    }
    //udf 
    calculateTotalBalance(accounts,3);

    return 0;
}

void calculateTotalBalance(int accounts[3][4], int rows){
    cout << "\nTotal Balances of Each Customer: \n";
    for (int i=0; i<rows;i++){
        int total = 0;
        for (int j = 0; j<4;j++){
            total += accounts[i][j];
        }
        cout << "Customer " << i+1 << ": " << total <<endl;
    }
}



