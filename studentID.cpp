#include <iostream>
#include <cctype>
#include <vector>
// completed but needs more stuff before finished


int main() 
{
    
    
    std::string input; // Intialise a str called input
    int sum = 0; // Initialise an int sum


    std::cout << "Please enter your student ID: ";
    std::cin >> input; // Assign user input to str


    /* Iterate over each character in the input
    This could also be done in the form (int i = 0; i < input.length(); i++)*/


    for (char c : input) 
    {
        if (std::isdigit(c)) 
        {
                if (c % 2 == 0) // Checking if the digit is divisble by 2 (if true it must be even)
                {
                sum += c - '0'; // Add to sum, the digit converted from ASCII to its integer form


            } else continue; 
       
       
        }


    }


    std::cout << sum;
    return 0;


}