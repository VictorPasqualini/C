#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Declare a variable named 'input_string' to hold our input.
// Read a full line of input from stdin and save it to our variable, input_string.
// Print a string literal saying "Hello, World." to stdout using printf.

int main() {
    char input_string[105];
    
    scanf("%[^\n]", input_string); 
    
    printf("Hello, World.\n");
    printf("%s", input_string);
    
    return 0;
}