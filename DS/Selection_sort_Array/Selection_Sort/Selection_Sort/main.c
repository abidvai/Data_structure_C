//Time Complexity:O(n^2)
//Space Complexity:O(1)
#include<stdio.h>
int main(){
    int a[100],n,i,j,temp,min_index;
    
    printf("Enter the size of this array: ");
    scanf("%d",&n);
    
    printf("Enter the value of this array: ");
    for(i=0; i < n; i++){
        scanf("%d",&a[i]);
    }
    //outer loop
    for(i=0; i < n; i++){
        min_index= i;
        //inner loop
        for(j=i+1; j < n; j++){
            if(a[j] < a[min_index]){
                min_index = j;
            }
        }
        //swap two numbers (i, min_index)
        temp = a[i];
        a[i] = a[min_index];
        a[min_index] = temp;
    }
    //print the sorted __array
    for(i=0; i < n; i++){
        printf("%d ",a[i]);
    }
    printf("\n\n");
    return 0;
}

