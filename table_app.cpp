//The application file table_app.cpp uses the Table Objects
#include <iostream>

//Including interface and implementation file
#include "table.h"
#include "table.cpp"

using namespace std;

int main()
{
    int size;

    do{
        //Asks the user for the size of the Multiplication Table
        cout << "Enter the size of the multiplication table (to quit: -1): ";
        cin >> size;

        //Creates the table using 2D-array only when size entered is positive or zero
        if(size >= 0)
        {
            Table table(size);

            table.populateTable();

            table.printTable();
        }
    }while(size != -1);

    //Thank you message
    cout << "Thank you for using my program. See you soon!";
    return 0;
}