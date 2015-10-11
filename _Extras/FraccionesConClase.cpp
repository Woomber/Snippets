// Simplificación de fracciones
// Agosto de 2009 Con Clase, Salvador Pozo
#include <iostream>
using namespace <i>std</i>;

struct fraccion {
    int num;
    int den;
};

fraccion Simplificar(fraccion);

int MCD(int, int);

int main() {
    fraccion f, s;
    f.num = 1204;
    f.den = 23212;

    s = Simplificar(f);
    cout << "Simplificar(" << f.num << "/" << f.den << ") = "; 
    cout << s.num << "/" << s.den << endl;

    return 0;
}

fraccion Simplificar(fraccion f) {
    int mcd = MCD(f.num,f.den);
    f.num /= mcd;
    f.den /= mcd;
    return f;
}

int MCD(int n1, int n2) {
    // Buscar los factores primos que dividen tanto a n1 como a n2
    int resultado = 1; // El 1 siempre es un CD
    int factor = 2;    // Empezamos en 2

    while(factor <= n1 || factor <= n2) {
        while(!(n1 % factor) && !(n2 % factor)) {
            resultado *= factor;
            n1 /= factor;
            n2 /= factor;
        }
        if(factor == 2) factor++;  // Si factor es 2, el siguiente primo es 3
        else factor+=2;            // Si no, elegimos el siguiente número impar
    }
    return resultado;
}