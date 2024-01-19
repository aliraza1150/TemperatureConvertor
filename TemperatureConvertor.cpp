// TemperatureConvertor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;
using std::cin;

int main()
{
    cout << "Temprature Convertor APP\n";
    cout << "Enter the Temprature (Faranhite): ";
    double temp_C{}, temp_F{};
    cin >> temp_F;

    // conversion formula
    temp_C = (temp_F - 32.0) * (5.0/9.0);

    cout << "Temprature in Calcious (C) = "    <<  temp_C;

}
