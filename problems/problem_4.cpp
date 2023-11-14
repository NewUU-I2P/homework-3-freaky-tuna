#include <string>
#include <sstream>

using namespace std;

std::string problemSolution4(const std::string &macAddress) {
    int num;
    if (macAddress[0] == 'F' && macAddress[1] == 'F'){
        cout << "The " << macAddress << " is broadcast." << endl;
    }else{
        num = int(macAddress[0])*16 + int(macAddress[1]);
        if (num % 2 == 0){
            cout << "The " << macAddress << " is unicast." << endl;
        }else{
            cout << "The " << macAddress << " is multicast." << endl;
        }
    }

    return 0;
}
