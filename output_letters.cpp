/*******************************************************************************
** Author:       Brandon Jones
** Date:         04/011/2019
** Description:  Output_letters function takes in a file stream and a pointer to an int array. The function the number of times a letter is used in the paragraph. 
*******************************************************************************/

#include "output_letters.hpp"
#include <fstream>

void output_letters(std::ofstream &file, int *array)
{
    std::string letters = "abcdefghijklmnopqrstuvwxyz";

    if (file.is_open())
    {

	int letlen = letters.length();     
        for (int i = 0; i < letlen; i++)
        {
            //loops through the letters string and prints out each character
            file << letters[i] << " : ";

            //Loops through the pointer array and prints out the ints
            file << array[i] << std::endl;
        }
    }

    file.close(); //closes file
}
