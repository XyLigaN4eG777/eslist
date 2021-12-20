#include "easy_list.h"

int itc_sl_list(const vector <int> &mass){
    int count = mass.size();
    int col = 0;
    if(count != 0){
        for(int i = 0; i < count - 1; i++){
            if(mass[i + 1] > mass[i]){
                col++;
            }
        }
    }
    return col;
}
