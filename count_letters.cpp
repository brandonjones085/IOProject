/*******************************************************************************
** Author:       Brandon Jones
** Date:         04/011/2019
** Description:  The count_letters function takes in a file stream and a pointer, then loops through each paragraph of the file, and sets the sets a 
*******************************************************************************/

#include "count_letters.hpp"
#include "output_letters.hpp"
#include <iostream>
#include <fstream>
#include <string>

void count_letters(std::ifstream &file, int *array)
{

    std::string letters = "abcdefghijklmnopqrstuvwxyz";
    char singleCharacter;
    int count;
    std::string text;
    std::ofstream outputFile;
    std::string outFile;

    while (!file.eof())
    {
        std::getline(file, text);
	
	int len = text.length(); 	

        if (len >1 ) //tests for space between paragraphs
        {
		
	    int letLen = letters.length(); 

            //loops through letters string for all letters in the alphabet
            for (int i = 0; i < letLen; i++)
            {
                array[i] = 0; //sets all values in array to zero
                count = 0;    //sets the number of each letter to zero

                //loops throught the text
                for (int j = 0; j < len; j++)
                {
                    //Each character in the text is converted to lower case and compared to the letters in the letters string
                    singleCharacter = tolower(text[j]);
                    if (letters[i] == singleCharacter)
                    {
                        count++; //If there is a match, the count for that letter increases
                    }
                }
                array[i] = count; //Sets the count for that letter
            }

            //Creates a file for the output
            std::cout << "Enter the file you would like to create: ";
            std::cin >> outFile;

            outputFile.open(outFile); //opens output file

            //Runs the outputFunction
            output_letters(outputFile, array);
        }
    }
}
