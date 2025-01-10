#include<stdio.h>
int main(){
    int n,temp,remain,reverse=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        remain=n%10;
        reverse=reverse*10+remain;
        n/=10;

    }
    printf("temp=%d",temp);
    printf("\nreverse=%d\n",reverse);
    if(temp==reverse){
        printf("Number is palindrome");

    }

    else{
        printf("Number is not palindrome");
    }
    return 0;
}