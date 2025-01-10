#include<stdio.h>
int main(){
    int n,i,high,low,mid,search,f=0,a[50];
    printf("Enter number of elements in an array");
    scanf("%d",&n);
    printf("Enter elements in an array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter element to search\n");
    scanf("%d",&search);
    low=0;
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;
    
    if(a[mid]==search){
        f=1;
        break;
    }
     else if(a[mid]<search){
    low=mid+1;
    }
    else{
    high=mid-1;
    }
    }
    if(f==1){
        printf("Entered number is preent ");
    }
    else{
        printf("Enter number is not present");
    }
    return 0;
}