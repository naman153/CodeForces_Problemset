#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        char s[100];
        scanf("%s",s);
        int l=strlen(s);
        if(l<=10){
            printf("%s\n",s);
        }
        else{
            printf("%c%d%c\n",s[0],l-2,s[l-1]);
        }
        
    }

    return 0;
}