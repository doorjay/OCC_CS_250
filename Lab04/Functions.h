#include <iostream>
#include <ostream>

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

class Vector2D
{
    friend std::ostream& operator<<(std::ostream& out, const Vector2D& vect);

public:
    Vector2D() : x(0), y(0) {}
    Vector2D(int newX, int newY) : x(newX), y(newY) {}

    int getX() const;
    int getY() const;

    // member functions added
    Vector2D operator+(const Vector2D& vector) const;
    int operator*(const Vector2D& vec1) const;
    bool operator==(const Vector2D& vector) const;
    Vector2D& operator*=(int scaleValue);

    ~Vector2D() {}

private:
    int x;    //first vector value
    int y;    //second vector value
};

#endif