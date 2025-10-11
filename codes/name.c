
#include<stdio.h>
#include<string.h>
int main(){
    char a[]="PARAS";
    char b[6];
    printf("Name before reversing : %s\n",a);
    strcpy(b,a);
    printf("Reversed name :");
    for(int i=5;i>=0;i--){
        printf("%c",b[i]);
    }
    return 0;
}