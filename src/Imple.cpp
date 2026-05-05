#include "../Include/UI.hpp"

double ValorAbsoluto(double x){
    if(x < 0) return -1 * x;
    return x;
}

double Potenciacion(double base, double exponente){
    double potencia = 1;
    double NExponente = exponente;

    if(exponente < 0){
        NExponente = ValorAbsoluto(exponente);
    }

    for(int i = 0; i < NExponente; i++){
        potencia *=  base;
    }

    if(exponente < 0){
        potencia = 1 / potencia;
    }

    return potencia;
}

double RaizCuadrada(double radicando){
    double x = radicando;
    double epsilon = 0.0000001;

    while(true){
        double x_n1 = 0.5 * (x + (radicando / x));

        if((x_n1 - x < epsilon) && (x - x_n1 < epsilon)){
            return x_n1;
        }

        x = x_n1;
    }
}

double NumeroFactorial(int n){
    double f = 1;
    for(int i =  1; i <= n; i++){
        f *= i;
    }
    return f;
}

double Exponencial(double x){
    double suma = 0;

    for(int n = 0; n < 20; n++){
        suma += Potenciacion(x, n) / NumeroFactorial(n);

    }
    return suma;
}



double GradosARadianes(double alpha){
    double pi = 3.141592653589793;
    return alpha * pi /180.0;
}



double Seno(double alpha){
    double sen = 0;
    alpha = GradosARadianes(alpha);
    for(int n = 0; n < 10; n++){
        double termino = Potenciacion(alpha, 2*n+1) / NumeroFactorial(2*n+1);

        if(n % 2 == 0){
            sen += termino;
        }else{
            sen -= termino;
        }
    }
    return sen;
}

double Coseno(double alpha){
    double cos = 0;
    alpha = GradosARadianes(alpha);
    for(int n = 0; n < 10; n++){
        double termino = Potenciacion(alpha, 2*n) / NumeroFactorial(2*n);

        if(n % 2 == 0){
            cos += termino;
        }else{
            cos -= termino;
        }
    }
    return cos;
}
