#include <iostream>
#include <string>
using namespace std;

class Battery
{
private:
    int percentage;

public:
    Battery() : percentage(100) {}

    void showBattery()
    {
        cout << "Battery: " << percentage << "%" << endl;
    }
};

class SmartPhone
{
private:
    Battery battery;

public:
    void showStatus()
    {
        battery.showBattery();
    }
};

int main()
{
    SmartPhone phone;
    phone.showStatus();

    return 0;
}
