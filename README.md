# Parcial2-EAS02
Esta es la actividad sumativa #2 del Parcial 2. Trabaja de manera individual. Asegúrate que tu código compile en todo momento y guarda cambios constantemente.

##Instrucciones
- Haz un fork de este repositorio a tu cuenta de GitHub con correo institucional.
- Clona el repositorio a tu computadora.
- Tomar el código base que se muestra a continuación y resolverlo.

Extra:
- Separar el archivo en los correspondientes archivos .h y .cpp

```
#include <iostream>
using namespace std;

class Figura{
private:
    int b, h;
    float p;

public:
    Figura();
    Figura(int b, int h);
    void setPerimetro(float a);
    float getPerimetro();
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
```
Notas
Puedes hacer uso de tus trabajos pasados así como de la documentación de C++