//
//  main.c
//  Insertion_Sort
//
//  Created by Abdullah Al Abid on 6/3/23.
//

#include <stdio.h>


void inser(int arr[], int length){
    
    for(int i = 1; i < length; i++){
        int key = arr[i],j;
        j = i-1;
        
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}


int main(int argc, const char * argv[]) {
    int arr[] = {8,4,9,5,7,6,3,2},i;
    inser(arr,8);
    
    for(int i=0; i < 8; i++){
        printf("Sorted array is:[%d] = %d\n",i,arr[i]);
    }
    return 0;
}
