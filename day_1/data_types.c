#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int num;
    double pointed;
    char sentence[100];
    
    // Read and save an integer, double, and String to your variables.
        scanf("%d\n", &num);
        scanf("%lf\n", &pointed);
        fgets(sentence, 100, stdin);
        
    // Print the sum of both integer variables on a new line.
        printf("%d\n", i+num);    
    
    // Print the sum of the double variables on a new line.
        printf("%.1lf\n", d+pointed);
           
    // Concatenate and print the String variables on a new line
        printf("%s%s", s, sentence);
    // The 's' variable above should be printed first.

    return 0;
}