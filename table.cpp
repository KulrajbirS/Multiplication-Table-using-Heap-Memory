//The implementation file table.cpp consisting of Data Member Function Definitions
#include <iostream>

//Including interface file
#include "table.h"
using namespace std;

//Parametric Constructor
Table :: Table (int s)
: size (s)
{
    //Creating 2D-Array in Heap Memory
    array = new int* [s +2];
    for(int i = 0; i < s +2; i++)
    {
        array[i] = new int[s +2];
    }
}

//Default Constructor
Table :: Table ()
: size (5)
{
    //Creating 2D-Array in Heap Memory
    array = new int* [size +2];
    for(int i = 0; i < size +2; i++)
    {
        array[i] = new int[size +2];
    }
}

//Copy Constructor
Table :: Table (const Table& table)
: size (table.size), array(table.array)
{}

//Destructor
Table :: ~Table ()
{
    //Deleting 2D-Array from Heap Memory
    for(int i = 0; i < size + 2; i++)
    {
        delete [] array [i];
    }
    delete [] array;
}

//To Populate Multiplication Table
void Table :: populateTable()
{
    for(int i = 0; i < size +2; i++)
    {
        for(int j = 0; j < size +2; j++)
        {
            //Enters numbers in series from 0 in 1st horizontal line
            if(i == 0 && j > 1)
            {
                array[i][j] = j - 1;
            }
            //Enters numbers in series from 0 in 1st vertical line
            else if(j == 0 && i > 1)
            {
                array[i][j] = i - 1;
            }
            //Enters the products in the rest of the array
            else
            {
                array[i][j] = (i-1)*(j-1);
            }
            
        }
    }
}

//To Print Multiplication Table
void Table :: printTable()
{
    for(int i = 0; i < size +2; i++)
    {
        for(int j = 0; j < size +2; j++)
        {
            //Prints X at the top left of the table
            if(i == 0 && j == 0)
            {
                cout << "X\t";
            }
            //Prints the entire 2D-array in Table format
            else
            {
                cout << to_string(array[i][j]) << "\t";
            }
        }
        cout << endl;
    }
}