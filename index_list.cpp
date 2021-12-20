#include "easy_list.h"

void itc_even_index_list(const vector <int> &mass, vector <int> &mass2){
    int c = mass.size();
    if(c != 0){
        for(int i = 0; i < c; i = i + 2){
            mass2.push_back(mass[i]);
        }
    }
}
