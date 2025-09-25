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
                int digit = c - '0'; // quick conversion from ascii form to digit form          
                if (digit % 2 == 0) // Check if digit is divisble by two
                {
                sum += digit; // Add to sum


            } else continue; 
       
       
        }


    }


    std::cout << sum;
    return 0;


}
