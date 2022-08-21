//  main.c
//  Bubble_Sort

//  Created by Abdullah Al Abid on 21/8/22.

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int arr[]={200,400,1000,1,5};
    int i,j,temp,size=5,swap;
    
    for(i=0; i<size-1; i++){
        swap=0;
        for(j=0; j<size-1-i; j++){
            if(arr[j] > arr[j+1]){
                //swap two numbers
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swap = 1;
            }
        }
        if(swap == 0){
            break;
        }
    }
    printf("After sorting:\n");
    for(i=0; i < size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
