#include<stdio.h>//compile time initialization of an 1-D array
int main(){
    int a[]={1,2,3};
    for(int i=0;i<3;i++){
        printf("%d",a[i]);
    }
    return 0;
}
