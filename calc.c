#include <stdio.h>
#include <math.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero\n");
        return 0;
    }
    return a / b;
}


int main() {
    int n1, n2;
    char c;
    
    printf("Enter number1, number2, and choice of operation (+, -, *, /): ");
    scanf("%d%d %c", &n1, &n2, &c); // Note the space before %c
    
    int result;
    
    if (c == '+') {
        result = add(n1, n2);
    } else if (c == '-') {
        result = subtract(n1, n2);
    } else if (c == '*') {
        result = multiply(n1, n2);
    } else if (c == '/') {
        result = divide(n1, n2);
    } else {
        printf("NO operation performed\n");
        return 1;
    }

    printf("Result: %d\n", result);
    return 0;
}
