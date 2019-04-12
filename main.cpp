/*******************************************************************************
** Author:       Brandon Jones
** Date:         04/11/2019
** Description:  This is the 
*******************************************************************************/

#include "count_letters.hpp"
#include "output_letters.hpp"

#include <iostream>
#include <fstream>
#include <string>

int main()
{
    //File stream
    std::ifstream inputFile;
    std::ofstream outputFile;

    std::string fileName; //string variable for file name
    std::string outFile;

    //User input
    std::cout << "Enter the file name you would like to open: ";
    std::cin >> fileName;

    inputFile.open(fileName); //opens the file stream

    //validation for input file
    while (!inputFile)
    {
        std::cout << "File did not open! Try again: ";
        std::cin >> fileName;
        inputFile.open(fileName); //opens the file stream
    }

    int *ptrArray = new int[26]; //pointer array

    //runs the cout_letters function
    count_letters(inputFile, ptrArray);

    delete[] ptrArray; //deletes array

    inputFile.close();  //closes inputfile
    outputFile.close(); //closes outputfile

    return 0;
}
