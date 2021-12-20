#include "easy_list.h"

void itc_rev_list(vector <int> &mass){
    int count = mass.size();
    int point, col = count - 1;
    if(count != 0){
        for(int i = 0; i < count / 2; i++){
            point = mass[i];
            mass[i] = mass[col - i];
            mass[col - i] = point;
        }
    }
}
