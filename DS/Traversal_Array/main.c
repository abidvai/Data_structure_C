//
//  main.c
//  Traversal_Array
//
//  Created by Abdullah Al Abid on 4/9/22.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int arra[50],size,i;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    
    printf("Enter elements of array: ");
    for(i=0; i < size; i++){
        scanf("%d",&arra[i]);
    }
    
    printf("Elements in array are: ");
    for(i=0; i < size; i++){
        printf("%d\t",arra[i]);
    }
    return 0;
}
