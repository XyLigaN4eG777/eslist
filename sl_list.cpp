#include "easy_list.h"

int itc_sl_list(const vector <int> &mass){
    int c = mass.size();
    int b = 0;
    if(c != 0){
        for(int i = 0; i < c - 1; i++){
            if(mass[i + 1] > mass[i]){
                b = b + 1;
            }
        }
    }
    return b;
}
