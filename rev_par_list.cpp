#include "easy_list.h"

void itc_rev_par_list(vector <int> &mass){
    int count = mass.size();
    int point;
    if(count != 0){
        for(int i = 0; i < count; i = i + 2){
            if(i < count - 1){
                point = mass[i];
                mass[i] = mass[i + 1];
                mass[i + 1] = point;
            }
        }
    }
}
