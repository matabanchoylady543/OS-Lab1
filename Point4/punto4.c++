#include <iostream>
#include "punto4.h"

using namespace std;

// Implementación de FormaGeometrica
FormaGeometrica::FormaGeometrica(const string &color) : color(color) {}

void FormaGeometrica::setColor(const string &nuevoColor) {
    color = nuevoColor;
}

string FormaGeometrica::getColor() const {
    return color;
}

void FormaGeometrica::mostrarDetalles() const {
    cout << "Color: " << color << endl;
}

// Implementación de Rectangulo
Rectangulo::Rectangulo(double l, double a, const string &color)
    : FormaGeometrica(color), largo(l), ancho(a) {}

double Rectangulo::area() const {
    return largo * ancho;
}

double Rectangulo::perimetro() const {
    return 2 * (largo + ancho);
}

void Rectangulo::mostrarDetalles() const {
    cout << "Rectangulo:" << endl;
    FormaGeometrica::mostrarDetalles();
    cout << "Largo: " << largo << ", Ancho: " << ancho << endl;
    cout << "Area: " << area() << endl;    
    cout << "Perimetro: " << perimetro() << endl;
}

// Implementación de Cuadrado
Cuadrado::Cuadrado(double lado, const string &color)
    : Rectangulo(lado, lado, color) {}

void Cuadrado::mostrarDetalles() const {
    cout << "Cuadrado:" << endl;
    Rectangulo::mostrarDetalles();
}

// Implementación de Triangulo
Triangulo::Triangulo(double b, double h, double l1, double l2, double l3, const string &color)
    : FormaGeometrica(color), base(b), altura(h), lado1(l1), lado2(l2), lado3(l3) {}

double Triangulo::area() const {
    return (base * altura) / 2;
}

double Triangulo::perimetro() const {
    return lado1 + lado2 + lado3;
}

void Triangulo::mostrarDetalles() const {
    cout << "Triangulo:" << endl;
    FormaGeometrica::mostrarDetalles();
    cout << "Base: " << base << ", Altura: " << altura << endl;
    cout << "Lados: " << lado1 << ", " << lado2 << ", " << lado3 << endl;
    cout << "Area: " << area() << endl;
    cout << "Perimetro: " << perimetro() << endl;
}

// Función principal
int main() {
    Rectangulo rectangulo(5.0, 3.0, "rojo");
    Cuadrado cuadrado(4.0, "azul");
    Triangulo triangulo(3.0, 4.0, 3.0, 4.0, 5.0, "verde");

    rectangulo.mostrarDetalles();
    cout << endl;

    cuadrado.mostrarDetalles();
    cout << endl;

    triangulo.mostrarDetalles();

    return 0;
}
