#include "Functions.h"

using namespace std;


// Question 1
ostream& operator<<(ostream& out, const Vector2D& vect)
{
   return out << "<" << vect.x << "," << vect.y << ">";
}

// Question 2
Vector2D Vector2D::operator+(const Vector2D& vector) const
{
   Vector2D sumVector(x + vector.x, y + vector.y);
   
   return sumVector;
}

// Question 3
Vector2D operator-(const Vector2D& vec1, const Vector2D& vec2)
{
   Vector2D difference(vec1.getX() - vec2.getX(), vec1.getY() - vec2.getY());
   
   return difference;
}

// Question 4
int Vector2D::operator*(const Vector2D& vec1) const
{
   return (x * vec1.x) + (y * vec1.y);
}

// Question 5
Vector2D& Vector2D::operator*=(int scaleValue)
{
   x *= scaleValue;
   y*= scaleValue;
   
   return *this;
}

// Question 6
bool Vector2D::operator==(const Vector2D& vector) const
{
   return x == vector.x && y == vector.y;
}
