#include "../Include/UI.hpp"


int main(){
    double x, base, exponente, radicando, alpha, x1;
    std::cout << "Ingrese un numero al cual desea sacarle valor Absoluto(|x|): ";
    std::cin >> x;
    std::cout << "Ingrese los numeros del cual desea sacarles potenciacion: \n" << "Base(a): ";
    std::cin >> base;
    std::cout << "Exponente(n): ";
    std::cin >> exponente;
    std::cout << "Ingrese un numero al cual desea sacarle su raiz cuadrada(x^1/2): ";
    std::cin >> radicando;
    std::cout << "Ingrese un numero en el cual desea evaluar la funcion exponencial (e^x): ";
    std::cin >> x1;
    std::cout << "Ingrese un angulo al cual desea evaluarle su valor en la funcion seno y coseno: ";
    std::cin >> alpha;
    
    std::cout << "ABS(" << x << ") = " << ValorAbsoluto(x) << "\n";
    std::cout << "pow(" << base << "^" << exponente << ") = " << Potenciacion(base, exponente) << "\n";
    std::cout << "sqrt(" << radicando << ") = " << RaizCuadrada(radicando) << "\n";
    std::cout << "exp(e^" << x1 << ") = " << Exponencial(x1) << "\n";
    std::cout << "sen(" << alpha << ") = " << Seno(alpha) << "\n";
    std::cout << "cos(" << alpha << ") = " << Coseno(alpha) << "\n";
}
