#include <stdio.h>

struct Rational {
    int n; // Numerator
    int d; // Denominator
};

// Function to find the greatest common divisor (GCD) of two numbers
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to simplify a rational number
void simplify(struct Rational *r) {
    int divisor = gcd(r->n, r->d);
    r->n /= divisor;
    r->d /= divisor;
}

// Function to add two rational numbers
struct Rational add(struct Rational a, struct Rational b) {
    struct Rational result;
    result.n = a.n * b.d + b.n * a.d;
    result.d = a.d * b.d;
    simplify(&result);
    return result;
}

// Function to subtract two rational numbers
struct Rational subtract(struct Rational a, struct Rational b) {
    struct Rational result;
    result.n = a.n * b.d - b.n * a.d;
    result.d = a.d * b.d;
    simplify(&result);
    return result;
}

// Function to multiply two rational numbers
struct Rational multiply(struct Rational a, struct Rational b) {
    struct Rational result;
    result.n = a.n * b.n;
    result.d = a.d * b.d;
    simplify(&result);
    return result;
}

// Function to divide two rational numbers
struct Rational divide(struct Rational a, struct Rational b) {
    struct Rational result;
    result.n = a.n * b.d;
    result.d = a.d * b.n;
    simplify(&result);
    return result;
}

// Function to print a rational number
void print_rational(struct Rational r) {
    printf("%d / %d\n", r.n, r.d);
}

int main() {
    // Example rational numbers
    struct Rational r1 = {24, 48};
    struct Rational r2 = {3, 9};

    // Perform operations
    struct Rational sum = add(r1, r2);
    struct Rational difference = subtract(r1, r2);
    struct Rational product = multiply(r1, r2);
    struct Rational quotient = divide(r1, r2);

    // Print results
    printf("Nemeh: ");
    print_rational(sum);
    printf("Hasah: ");
    print_rational(difference);
    printf("Urjver: ");
    print_rational(product);
    printf("Huvaah: ");
    print_rational(quotient);

    return 0;
}
