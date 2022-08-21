#include<stdio.h>
int main(){
    int a[10],n,i,pos;
    
    printf("Enter the size of this array: ");
    scanf("%d",&n);
    
    for(i=0; i<n; i++){
        printf("succesfullly added item a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    
    printf("Enter the position You want to delete: ");
    scanf("%d",&pos);
    
    for(i = pos-1; i < n-1; i++){
        a[i]=a[i+1];
    }
    printf("After deleting: ");
    for(i=0; i<n-1; i++){
        printf("%d \n",a[i]);
    }
    return 0;
}
