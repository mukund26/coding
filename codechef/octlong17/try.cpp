#include <iostream>
#include <stdio.h>
     
    int main(){
        int t,n,excess;
        scanf("%d",&t);
        for(int test=1;test<=t;test++){
            scanf("%d",&n);
            printf("99000 ");
            for(int i=0;i<99990;i++)
                printf("42952  ");
     
    	excess = n - 99991;
            for(int i=0;i<excess;i++)
                printf("1 ");
     
            printf("\n");
        }
    }
     