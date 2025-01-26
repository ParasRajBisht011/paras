#include<stdio.h>//runtime time initialization of an 1-D array
int main(){
    int a[3];
    printf("Enter the numbers in array");
    for(int i=0;i<3;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<3;i++){
        printf("%d",a[i]);
    }
    
    return 0;
}
