/*#include<stdio.h>
int main(){
    char a[50]="PARAS";
    char b[50];
    printf("Name before: %s\n",a);
    printf("Enter the name\n");
    scanf("%49s",b);
    printf("Name after: %s\n",b);
    return 0;
}*/
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