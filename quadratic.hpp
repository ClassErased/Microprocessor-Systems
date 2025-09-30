template<typename T>
T quadratic_solve(T a, T b, T c) {
    T discriminant = b * b - 4 * a * c;
    if (discriminant < 0) {
        std::cout << "No real roots";
        exit(1);

    }
    T root1 = (-b + std::sqrt(discriminant)) / (2 * a);
    T root2 = (-b - std::sqrt(discriminant)) / (2 * a);
    std::cout << "Roots are :" << root1 << " and " << root2 << "\n";
    return 0;
}
