#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
    string st_1 , st_2 , st_3 , st_4 , st_5;

    ofstream chalaja("file.txt");
    cout << "Enter your name: " << endl;
    cin >> st_1;
    chalaja << st_1; /* only first word */
    chalaja.close();


    ofstream chalaja;
    chalaja.open("file.txt");
    cout << "Enter your name: " << endl;
    getline(cin, st_1);   /* Read entire line of input */
    chalaja << st_1;
    chalaja.close();


    ifstream aaja;
    aaja.open("file.txt");
    getline(aaja , st_2);   //prints first line 
    getline(aaja , st_3);   //prints second line 
    getline(aaja , st_4);   //prints third line 
    cout << st_2 << endl;
    cout << st_3 << endl;
    cout << st_4 << endl;

    
    ifstream aaja;
    aaja.open("file.txt");
    while(aaja.eof() == 0) {
        getline(aaja,st_5);
        cout << st_5 << endl;
    }
    aaja.close();

    return 0;
}