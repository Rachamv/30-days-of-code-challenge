#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

 void printeven(char s[10000]){
     
     int len = strlen(s);
        for (int i=0 ; i<len ; i++){
            if(i%2==0){
                printf("%c", s[i]);
                //puts(s);
            }
        }
    }  
    
    void printodd(char s[10000]){
        int len = strlen(s);
        
        for (int i =0 ; i<len ; i++){
        if(i%2!=0){
            printf("%c" , s[i]);
            //puts(s);
        }
        }
    }
    
    
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n ;
    scanf("%d",&n);
    
    for (int i=1 ; i<=n ; i++){
    char s[10000];
    scanf("%s",s); 
    printeven(s);
    printf(" ");
    printodd(s);
    printf("\n"); 
    }
   
    return 0;
    
}