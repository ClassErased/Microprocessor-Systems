// Import relevant standard libraries to use
#include <iostream>
#include <cmath>
//#include <complex> Uncomment if complex numbers are needed

//Import header file for the quadratic solver function
#include "quadratic.hpp"


//TODO: Actually figure out what im supposed to do rather than writing this for fun
int main() 
{
    // not the best way to do it, but quick and dirty
    int V = 1;
    int R = 11;
    int P = 7;
    double root1, root2;

    for (int i = 0; i <= 8; i++)
    {
        std::cout << "Iteration " << i+1 << " Values are: " << V << " " << R << " " << P << "\n";
        quadratic_solve(V, R, P);
        V++;
        R++;
        P++;
    }
}
