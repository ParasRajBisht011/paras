#include<stdio.h>
int main(){
int n,a[50],i,j,temp;
printf("Enter the number of elements in array");
scanf("%d",&n);
printf("Enter elements in an array");
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
printf("Elements before sorting:\n");
for(i=0;i<n;i++){
    printf("%d\n",a[i]);
}
for(i=0;i<n-1;i++){
    for(j=0;j<n-i-1;j++){
        if(a[j]>a[j+1]){
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
        }
    }
}
printf("Elements after sorting:\n");
for(i=0;i<n;i++){
    printf("%d\n",a[i]);
}
return 0;
}