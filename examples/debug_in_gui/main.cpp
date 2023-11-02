#include"simple_random.h"
#include<stdio.h>

int main(){

    for(int i = 0; i < 5; i++){
        printf("0x%08x\n", get_random());
    }
}