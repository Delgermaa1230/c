#include <stdio.h>

struct Rational {
    int n; 
    int d; 
};

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void simplify(struct Rational *r) {
    int divisor = gcd(r->n, r->d);
    r->n /= divisor;
    r->d /= divisor;
}

struct Rational add(struct Rational a, struct Rational b) {
    struct Rational result;
    result.n = a.n * b.d + b.n * a.d;
    result.d = a.d * b.d;
    simplify(&result);
    return result;
}

struct Rational subtract(struct Rational a, struct Rational b) {
    struct Rational result;
    result.n = a.n * b.d - b.n * a.d;
    result.d = a.d * b.d;
    simplify(&result);
    return result;
}

struct Rational multiply(struct Rational a, struct Rational b) {
    struct Rational result;
    result.n = a.n * b.n;
    result.d = a.d * b.d;
    simplify(&result);
    return result;
}

struct Rational divide(struct Rational a, struct Rational b) {
    struct Rational result;
    result.n = a.n * b.d;
    result.d = a.d * b.n;
    simplify(&result);
    return result;
}

void print_rational(struct Rational r) {
    printf("%d / %d\n", r.n, r.d);
}

int main() {
    struct Rational r1 = {24, 48};
    struct Rational r2 = {3, 9};

    struct Rational sum = add(r1, r2);
    struct Rational yalgavar = subtract(r1, r2);
    struct Rational urjver = multiply(r1, r2);
    struct Rational huvaalt = divide(r1, r2);

    printf("Nemeh: ");
    print_rational(sum);
    printf("Hasah: ");
    print_rational(yalgavar);
    printf("Urjver: ");
    print_rational(urjver);
    printf("Huvaah: ");
    print_rational(huvaalt);

    return 0;
}
