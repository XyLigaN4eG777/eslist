#include "easy_list.h"

int itc_positive_list(const vector <int> &mass){
    int count = mass.size();
    int CountOfPos = 0;
    if(count != 0){
        for(int i = 0; i < count; i++){
            if(mass[i] >= 0){
                CountOfPos++;
            }
        }
    }
    return CountOfPos;
}
