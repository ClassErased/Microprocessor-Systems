#include <iostream>
#include <cctype>


int main() 
{
    
    std::string input; // Create input string for student ID
    int sum = 0; // Initialise the sum of digits

    std::cout << "Please enter your student ID: ";
    std::cin >> input; // Assign Student ID to input

    /* Iterate over each character in the input
    This could also be done in the form (int i = 0; i < input.length(); i++)*/


    //TODO: Input validation
    for (char c : input) 
    {


        /* Essentially, we are checking to see if the value of char is between 48 and 57
        If so, it must be a digit between 0 and 9, however the stdlib has a fn for this:
        https://en.cppreference.com/w/cpp/string/byte/isdigit.html */
        if (std::isdigit(c)) 
        {

            /* If 0 is the 48th ASCII char
            then taking away 48 from any number between (0-9)
            yields it's decimal value */
            int digit = c - '0';
            // Use of modulo operator to check for divisibility by 2
            if (digit % 2 == 0) 
            {
            sum += digit; // Add an even integer to sum
            } 
        }
    }
    std::cout << "The sum of the even digits is: " << sum << "\n";
    return 0;
}
