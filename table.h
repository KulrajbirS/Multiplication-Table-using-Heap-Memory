//The interface file table.h defining the class Table
#include <iostream>
using namespace std;

#ifndef TABLE_H
#define TABLE_H

class Table
{
    //Data Members
    private:
        int size;
        int** array;

    public:
        //Contructors
        Table (int size);
        Table ();
        Table (const Table& table);
        ~Table ();

        //To Populate Multiplication Table
        void populateTable();

        //To Print the Multiplication table
        void printTable();
};

#endif