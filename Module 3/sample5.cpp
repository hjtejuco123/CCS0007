/******************************************************************************
//out
*******************************************************************************/
#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
int main()
{
    char phrase[]="12. The Quick \n Brown Fox #";
    char ltr;
    int n(0); //n=0;

    cout << "Original Phrase "<< endl;
    cout << phrase;
    
    //toupper
    cout << "\ntoupper function"<<endl;
    for (int i=0; i<strlen(phrase); i++) {
        ltr = toupper(phrase[i]);
        cout << ltr;
    }
    //tolower
    cout << "\ntolower function"<<endl;
    for (int i=0; i<strlen(phrase); i++) {
        ltr = tolower(phrase[i]);
        cout << ltr;
    }
    //islower
     cout << "\nislower function"<<endl;
    for (int i=0; i<strlen(phrase); i++) {
        if (islower(phrase[i]))
            cout << phrase[i];
    }
    //isupper
     cout << "\nisupper function"<<endl;
    for (int i=0; i<strlen(phrase); i++) {
        if (isupper(phrase[i]))
            cout << phrase[i];
    }
    
    //isalpha 
    cout << "\nisalpha function"<<endl;
    for (int i=0; i<strlen(phrase); i++) {
        if (isalpha(phrase[i]))
            cout << phrase[i];
    }
    //isdigit
    cout << "\nisdigit function"<<endl;
    for (int i=0; i<strlen(phrase); i++) {
        if (isdigit(phrase[i]))
            cout << phrase[i];
    }
    //isalnum
    cout << "\nisalnum function"<<endl;
    for (int i=0; i<strlen(phrase); i++) {
        if (isalnum(phrase[i]))
            cout << phrase[i];
    }
    
    //Isspace
    cout << "\nIsspace function"<<endl;
    for (int i=0; i<strlen(phrase); i++) {
        if (isspace(phrase[i]))
            n++; //count the spaces 
    }
    cout << n;
    //isprint 
     cout << "\nisprint function"<<endl;
    for (int i=0; i<strlen(phrase); i++) {
        if (isprint(phrase[i]))
            cout << phrase[i];
    }
    //isgraph 
     cout << "\nisgraph function"<<endl;
    for (int i=0; i<strlen(phrase); i++) {
        if (isgraph(phrase[i]))
            cout << phrase[i];
    }
    
    //ispunct 
     cout << "\nispunct function"<<endl;
    for (int i=0; i<strlen(phrase); i++) {
        if (ispunct(phrase[i]))
            cout << phrase[i];
    }
    
    
    return 0;
}
