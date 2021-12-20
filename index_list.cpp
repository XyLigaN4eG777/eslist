#include "easy_list.h"

void itc_even_index_list(const vector <int> &mass, vector <int> &mass2){
    int count = mass.size();
    if(count != 0){
        for(int i = 0; i < count; i += 2){
            mass2.push_back(mass[i]);
        }
    }
}
