//
//  main.c
//  Inserting
//
//  Created by Abdullah Al Abid on 19/8/22.

#include<stdio.h>
int main(){
    int a[20],n,i;
    int searchItem;
    
    printf("Enter the size of this array less than 20: ");
    scanf("%d",&n);
    
    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++){
        printf("Elements of the array a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the element You want to search: ");
    scanf("%d",&searchItem);
    
    for(i=0; i<n; i++){
        if(a[i]==searchItem){
            printf("Item found at index: %d\n",i);
            return 0;
        }
    }
    printf("Sorry!!! Item not found.\n");
    return 0;
}
  
