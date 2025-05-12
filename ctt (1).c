
#include <math.h> 

double AreaTriangulo(double a, double b, double c) {

    double p = (a + b + c) / 2.0;
    double area = sqrt(p * (p - a) * (p - b) * (p - c));
    return area;
}

int main() {
    double a, b, c;
    printf("Introduce los lados del triángulo:\n");
    scanf("%lf %lf %lf", &a, &b, &c);
    double area = AreaTriangulo(a, b, c);
    if (area) {
        printf("El área del triángulo es: %.2lf\n", area);
    }
    return 0;
}