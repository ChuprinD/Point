#include <iostream>
#include "main.hpp"

using namespace std;

int main()
    {
    int x, y;
    cout << "Enter first vector:\nx = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    Point first_point (x, y);
    
    cout << "Enter second vector:\nx = ";
    cin >> x;
    cout << "y = ";
    cin >> y;

    Point second_point (x, y);

    cout << "first + second = "                 << (first_point + second_point) << endl;
    cout << "first * second = "                 << (first_point * second_point) << endl;
    cout << "first * 6 = "                      << (first_point * 6) << endl;
    cout << "first % second (oblique) = "       << (first_point % second_point) << endl;
    cout << "len of second = "                  << second_point.get_len() << endl;
    cout << "angle between first and second = " << first_point.get_angle(second_point) << endl;
    cout << "first == second = "                << (first_point == second_point) << endl;
    _getch();
    return 0;
    }   