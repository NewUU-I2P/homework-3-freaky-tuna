#include <string>

std::string problemSolution3(float height, char S) {
    std::string result;
    if (S == 'M'){
        if (height >= 1.7 && height <= 1.85){
            result = "Normal";
        }else if (height >= 1.85){
            result = "Tall";
        }else{
            result = "Short";
        }
    }else if (S == 'F'){
        if (height >= 1.6 && height <= 1.75){
            result = "Normal";
        }else if (height >= 1.75){
            result = "Tall";
        }else{
            result = "Short";
        }
    }
    return result;
}