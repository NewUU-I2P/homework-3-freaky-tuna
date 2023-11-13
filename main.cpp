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
    cout << "Enter the water record in cubic meters: "
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
    problemSolution3();
    cout << "Problem 4\n";
    problemSolution4();
    cout << "Problem 5\n";
    problemSolution5();
    return 0;
}