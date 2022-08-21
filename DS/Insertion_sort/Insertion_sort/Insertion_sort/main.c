//  main.c
//  Insertion_sort

//  Created by Abdullah Al Abid on 21/8/22.

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a[]={8,4,1,3,2};
    int value,hole,i;
    
    for(i=1; i<5; i++){
        value= a[i];
        hole= i;
        
        while(hole >0 && a[hole-1] > value){
            a[hole] = a[hole - 1];
        }
    }
    
    return 0;
}
