#include<cstdio>  
int main()  {  
    int h;  
    while(scanf("%d",&h) != EOF){  
        int i;  
        int m = h;  
        for(i = 0; i < m; i++) {  
            int j;  
            for(j = 0; j < 2*h - 2*(i+1); j++)  
                printf(" ");  
            for(j = 2*h - 2*(i+1); j < 3*h - 2; j++)  
                printf("*");  
            printf("\n");  
        }  
    } 
}
