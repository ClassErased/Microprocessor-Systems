#include <iostream>
#include <cctype>
#include <vector>


int main() 
{
    
    std::string input; // Create input string for student ID
    int sum = 0; // Initialise the sum of digits

    std::cout << "Please enter your student ID: ";
    std::cin >> input; // Assign Student ID to input

    /* Iterate over each character in the input
    This could also be done in the form (int i = 0; i < input.length(); i++)*/

    for (char c : input) 
    {
        if (std::isdigit(c)) 
        {
                int digit = c - '0'; // Convert character to integer and check if its even        
                if (digit % 2 == 0) 
                {
                sum += digit; // Add an even integer to sum
            } 
        }
    }
    std::cout << "The sum of the even digits is: " << sum << "\n";
    return 0;
}
