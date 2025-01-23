#include<stdio.h>
#include<string.h>
int main(){
    char a[50],b[50],f;
    int i,j,k=0,d,e;
    printf("Enter original name\n");
        scanf("%s",a);
        printf("Original name is %s\n",a);
       d=strlen(a);
       char c[d];
        printf("Enter jumbled name\n");
        scanf("%s",b);
        printf("Jumbled name is %s\n",b);
         e=strlen(b);
        for(i=0;i<d;i++){
          for(j=0;j<e;j++){
            if(a[i]==b[j]){
              c[k++]=a[i];
              break;
            }
          }
          }
                for(j=0;j<e;j++){
                  b[j]='\0';
                  
                }
                printf("Deleted array:%s\n",b);
                for(j=0;j<e;j++){
            printf("%c",b[j]);
          }
          if(k>0){
           printf("Array after:\n");
           for(i=0;i<k;i++){
            printf("%c",c[i]);
           }
          }
           return 0;
        }