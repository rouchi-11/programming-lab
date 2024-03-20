#include <stdio.h>


struct Complex {
    float real;
    float imag;
};


void readComplex(struct Complex *num) {
    printf("Enter real and imaginary parts: ");
    scanf("%f %f", &num->real, &num->imag);
}

void writeComplex(struct Complex num) {
    printf("%.2f + %.2fi\n", num.real, num.imag);
}


struct Complex addComplex(struct Complex num1, struct Complex num2) {
    struct Complex result;
    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;
    return result;
}


struct Complex multiplyComplex(struct Complex num1, struct Complex num2) {
    struct Complex result;
    result.real = num1.real * num2.real - num1.imag * num2.imag;
    result.imag = num1.real * num2.imag + num1.imag * num2.real;
    return result;
}

int main() {
    struct Complex num1, num2, result;
    char operation;

    printf("Enter the operation you want to perform:\n");
    printf("a) Addition\n");
    printf("m) Multiplication\n");
    printf("Enter your choice: ");
    scanf(" %c", &operation);

    switch (operation) {
        case 'a':
            printf("Enter the first complex number:\n");
            readComplex(&num1);
            printf("Enter the second complex number:\n");
            readComplex(&num2);
            result = addComplex(num1, num2);
            printf("Sum of the two complex numbers: ");
            writeComplex(result);
            break;
        case 'm':
            printf("Enter the first complex number:\n");
            readComplex(&num1);
            printf("Enter the second complex number:\n");
            readComplex(&num2);
            result = multiplyComplex(num1, num2);
            printf("Product of the two complex numbers: ");
            writeComplex(result);
            break;
        default:
            printf("Invalid choice!\n");
            return 1;
    }

    return 0;
}

