#include <iostream>
#include "problems/problem_1.cpp"
#include "problems/problem_2.cpp"
#include "problems/problem_3.cpp"
#include "problems/problem_4.cpp"
#include "problems/problem_5.cpp"

using namespace std;


int main() {
    cout << "Problem 1\n";
    float waterVolume;
    cout << "Enter the water record in cubic meters: ";
    cin >> waterVolume;
    cout << "The total cost is $" << problemSolution1(waterVolume);

    cout << "Problem 2\n";
    float num1, num2, num3;
    cout << "Enter three numbers:" << endl;
    cin >> num1;
    cin >> num2;
    cin >> num3;
    cout<< "The maximum number is " << problemSolution2(num1, num2, num3) << endl;

    cout << "Problem 3\n";
    char G;
    float height;
    cout << "Enter your gender: M/F?" << endl;
    cin >> G;
    cout << "Enter your height in metres:" << endl;
    cin >> height;
    cout << problemSolution3(height, G) << endl;

    cout << "Problem 4\n";
    string macAddress;
    cout << "Enter your MAC address: ";
    cin >> macAddress;
    problemSolution4(macAddress);
    cout << '\n';

    cout << "Problem 5\n";
    float x, y;
    char operation;
    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;
    cout << "Which arithmetic operation would you want to perform?" << endl;
    cin >> operation;
    cout << x << ' ' << operation << ' ' << y << " = " << problemSolution5(x, y, operation) << endl;

    return 0;
}