#incllude<stdio.h>
int main() {
    // Declare a variable named 'input_string' to hold our input.
    char input_string[105];
    
    // Read a full line of input from stdin (cin) and save it to our variable, input_string.
    scanf("%[^\n]s",input_string);
    
    // Print a string literal saying "Hello, World." to stdout using cout.
    printf("Hello, World.");
    printf("%s", input_string);//My CODE************************************

    // TODO: Write a line of code here that prints the contents of input_string to stdout.

    return 0;
}
