#include<stdio.h>
int* large(int* a,int* b){
    if(*a>*b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int a=10,b=5;
    int* p=large(&a,&b);
    printf("%d is larger",*p);
}