#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Declare second integer, double, and String variables.
// Read and save an integer, double, and String to your variables.
// Print the sum of both integer variables on a new line.
// Print the sum of the double variables on a new line.
// Concatenate and print the String variables on a new line
// The 's' variable above should be printed first.

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    int i2;
    double d2;
    char s2[50];
    
    scanf("%d", &i2);
    scanf("%lf", &d2);
    scanf(" %[^\n]", s2);
    
    printf("%d \n", (i+i2));
    printf("%.1lf \n", (d+d2));
    printf("%s%s", s, s2);
    
    return 0;
}