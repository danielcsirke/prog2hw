#pragma once

class Pixel {
    unsigned r;
    unsigned g;
    unsigned b;
    unsigned a;
public:
    Pixel(unsigned r, unsigned g, unsigned b, unsigned a = 255) : r(r), g(g), b(b), a(a) {}
    unsigned getR() const { return r; }
    unsigned getG() const { return g; }
    unsigned getB() const { return b; }
    unsigned getA() const { return a; }
    void setR(unsigned r) { this->r = r; }
    void setG(unsigned g) { this->g = g; }
    void setB(unsigned b) { this->b = b; }
    void setA(unsigned a) { this->a = a; }
    void setRGBA(unsigned r, unsigned g, unsigned b, unsigned a = 255) {
        this->r = r;
        this->g = g;
        this->b = b;
        this->a = a;
    }
};

