#include <stdio.h>
#include <string.h>
int main(){
    int n,x=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        char s[4];
        scanf("%s",&s);

        if(strcmp(s, "x++")==0 || strcmp(s, "++x")==0){
            x++;
        }
        else if(strcmp(s, "--x")==0 || strcmp(s, "x--")==0){
            --x;
        }

    }
    
    
    printf("%d",x);
    return 0;
}