#include <iostream>

class Vector
{
private:
    double x;
    double y;
    double z;
public:

    Vector() : x(0), y(0), z(0)
    {}
    Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z)
    {}
    void show()
    {
        std::cout << std::endl << x << " " << y << " " << z;
    }
    void mul()
    {
        std::cout << std::endl << (x + y + z);
    }
};

int main()
{
    std::cout << "set Vectors\n";
    double x = 0;
    double y = 0;
    double z = 0;

    std::cout << "x = ";
    std::cin >> x;
    std::cout  << "y = ";
    std::cin >> y;
    std::cout  << "z = ";
    std::cin >> z;

    Vector V1(x, y, z);

    V1.show();

    V1.mul();




}

