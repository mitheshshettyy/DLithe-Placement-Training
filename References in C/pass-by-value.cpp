#include <stdio.h>

// Function using pass by value
void updateValue(int y)
{
    
    // y is a local copy of x; changes here do not affect x in main
    y = y + 10; 
}

int main()
{
    int x = 50;

    printf("Before function call: %d\n", x);
    
    // Passes a copy of original
    updateValue(x); 
    
    // original remains unchanged
    printf("After function call: %d\n", x); 

    return 0;
}