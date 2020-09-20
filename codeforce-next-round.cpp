
#include <stdio.h>
int main(){
    int n,k,sum=0;
    scanf("%d",&n);
    int a[n];
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]>=a[k-1] && a[k-1]!=0){
            sum++;
        }
    }
    printf("%d",sum);
}