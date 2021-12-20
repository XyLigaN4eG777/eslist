#include "easy_list.h"

void itc_super_shift_list(vector <int> &mass, int n){
    int count = mass.size();
    if(count != 0){
        if(n >= 0){
            n = (n + count) % count;
            for(int i = 0; i< n; i++){
                itc_rshift_list(mass);
            }
        }
        else{
            n = n * -1;
            n = (n + count) % count;
            for(int i = 0; i < n; i++){
                itc_lshift(mass);
            }
        }
    }
}
