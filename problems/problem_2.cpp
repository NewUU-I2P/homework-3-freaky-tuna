float problemSolution2(float i, float j, float k) {
    float result;
    result = (i > j) ? i: j;
    if (result == i){
        result = (i > k) ? i: k;
    }else{
        result = (j > k) ? j: k;
    }
    return result;
}