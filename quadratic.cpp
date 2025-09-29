// Import relevant standard libraries to use
#include <iostream>
#include <cmath>
#include <complex>


//I have cleaerly misunderstood the assignment brief, will try and figure it out another time<?>

void quadratic_solve(double V, double R, double P) 
{
    std::complex<double> root1, root2;
    std::complex<double> discriminant = std::complex<double>(R*R - 4*V*P);

    root1 = (-R + std::sqrt(discriminant)) / (2.0 * V);
    root2 = (-R - std::sqrt(discriminant)) / (2.0 * V);
  
    std::cout << "Root 1 is " << root1 << "\n";
    std::cout << "Root 2 is " << root2 << "\n\n";  

}

int main() 
{
    // not the best way to do it, but quick and dirty
    int V = 20;
    int R = 10;
    int P = 5;

    for (int i = 0; i <= 8; i++)
    {
        std::cout << "Iteration " << i+1 << " Values are: " << V << " " << R << " " << P << "\n";
        quadratic_solve(V, R, P);
        V = V + 10;
        R = R + 10;
        P = P + 5;
    }
}
