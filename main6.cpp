#include <iostream>

void imprimirAteN(int numero)
{
    for (int i = 0; i <= numero; i++)
    {
        std::cout << i << std::endl;
    }
}

int main()
{
    int numero;
    std::cout << "Digite um numero: " << std::endl;
    // Pedir numero
    std::cin >> numero;

    std::cout << "Vou digitar ate o numero que voce pediu:" << std::endl;
    // Imprimir ate numero
    imprimirAteN(numero);
}