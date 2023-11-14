float problemSolution1(float consumed_water) {
    float cost;
    cost = 0;
    if (consumed_water > 30){
        cost += 30*0.4;
        consumed_water -= 30;
        if (consumed_water > 20){
            cost += 20*0.12;
            consumed_water -= 20;
            if (consumed_water > 10){
                cost += 10*1.4;
                consumed_water -= 10;
                if (consumed_water > 0){
                    cost += consumed_water*1.5;
                }else{
                    cost += consumed_water*1.5;
                }
            }else{
                cost += consumed_water*1.4;
            }
        }else{
            cost += consumed_water *0.12;
        }
    }else{
        cost = consumed_water*0.4;
    }
    return cost;
}