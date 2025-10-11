#include<stdio.h>
#include<string.h>
int main(){
    #define MAX 100
     
    
    char a[MAX]={"zero","one","two","three","four","five","six","seven","eight","nine","hundred","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    char input[]={"three","hundred", "forty" ,"seven"};
    int length= sizeof(input)/sizeof(input[0]);
     int num[length];
    int size=sizeof(a)/sizeof(a[0]);
    for(int j=0;j<length;j++){
    for(int i=0;i<size;i++){
        if(strcmp(input[j],a[i])==0){
            num[j]=i;
            break;
        }
    }
    }
   
//int num[length];
//for(int i=0;i<length;i++){
  //  num[i]=input[i];
//}
printf("Converted numeric array");
for(int i=0;i<length;i++){
printf("%d",num[i]);
}
printf("\n");
return 0;
}