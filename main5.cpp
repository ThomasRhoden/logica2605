#include <iostream>

int AoCubo(int n)
{
    return n * n * n;
}
int main()
{
    std::cout << "Quadrado de 5: " << AoCubo(5) << std::endl;
    std::cout << "Quadrado de 8: " << AoCubo(8) << std::endl;
    std::cout << "Quadrado de 10: " << AoCubo(10) << std::endl;

    return 0;
}