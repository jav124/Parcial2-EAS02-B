#include <iostream>
#include "figura.h"
#include "cuadrado.h"
using namespace std;

class Cuadrado: public Figura
{
Cuadrado::Figura(Perimetro)
{
    per = bas*hal;

}
};
class Rectangulo: public Figura
{
    Rectangulo::Figura(Perimetro)
    {
        float perR = per;
        int basR = bas, halR = hal;
        perR = basR*halR;
    }
};

class Circulo: public Figura
{
    Circulo::Figura(Perimetro)
};



/*
    Implementa los constructores y funciones de la clase Figura.
    La función setPerimetro UNICAMENTE recibe el perímetro y lo asigna, NO lo calcula.
*/

/*
    Implementa la clase Cuadrado que hereda de Figura.
    Crear constructor de Cuadrado que herede del constructor de Figura.
    Calcular y asignar el perímetro del cuadrado.
*/

/*
    Implementa la clase Rectángulo que hereda de Figura.
    Crear constructor de Rectángulo que herede del constructor de Figura.
    Calcular y asignar el perímetro del Rectángulo.
*/

/*
    Implementa la clase Círculo que hereda de Figura.
    Crear constructor de Círculo que herede del constructor de Figura.
    Calcular y asignar el perímetro del Círculo.
*/

int main () {

    Cuadrado s(5);
    cout << s.getPerimetro() << endl; // 20
    Rectangulo r(5,10);
    cout << r.getPerimetro() << endl; // 30
    Circulo t(5);
    cout << t.getPerimetro() << endl; // ~31.41592
    return 0;
}
