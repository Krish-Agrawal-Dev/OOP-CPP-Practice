#include <iostream>
#include <string>
using namespace std;

class Vehicle
{

protected:
    string brand;

public:
    Vehicle(string n) : brand(n) {}
};

class Car : public Vehicle
{
public:
    Car(string name) : Vehicle(name) {}

    void showBrand()
    {

        cout << "Brand : " << brand << endl;
    }
};

int main()
{

    Car c1("Toyota");
    c1.showBrand();

    return 0;
}
