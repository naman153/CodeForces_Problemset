#include<stdio.h>
#include<conio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if((a+b+c)>=2){
            sum++;
        }
    }
    printf("%d",sum);
    return 0;
}