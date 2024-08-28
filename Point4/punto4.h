#ifndef FORMAS_GEOMETRICAS_H
#define FORMAS_GEOMETRICAS_H

#include <string>
using namespace std;

class FormaGeometrica {
protected:
    string color;

public:
    FormaGeometrica(const string &color = "blanco");

    virtual double area() const = 0;
    virtual double perimetro() const = 0;

    void setColor(const string &nuevoColor);
    string getColor() const;

    virtual void mostrarDetalles() const;

    virtual ~FormaGeometrica() {}
};

class Rectangulo : public FormaGeometrica {
private:
    double largo, ancho;

public:
    Rectangulo(double l, double a, const string &color = "blanco");

    double area() const override;
    double perimetro() const override;

    void mostrarDetalles() const override;
};

class Cuadrado : public Rectangulo {
public:
    Cuadrado(double lado, const string &color = "blanco");

    void mostrarDetalles() const override;
};

class Triangulo : public FormaGeometrica {
private:
    double base, altura, lado1, lado2, lado3;

public:
    Triangulo(double b, double h, double l1, double l2, double l3, const string &color = "blanco");

    double area() const override;
    double perimetro() const override;

    void mostrarDetalles() const override;
};

#endif // FORMAS_GEOMETRICAS_H