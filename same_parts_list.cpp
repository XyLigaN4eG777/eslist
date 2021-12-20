#include "easy_list.h"

bool itc_same_parts_list(const vector <int> &mass){
    int count = mass.size();
    int col = 0;
    if(count != 0){
        for(int i = 0; i < count; i++){
            if(mass[i] < 0 and mass[i + 1] < 0){
                col++;
            }
            if(mass[i] >= 0 and mass[i + 1] >= 0 and i + 1 < count){
                col++;
            }
        }
    }
    if(col > 0){
        return true;
    }
    return false;
}
