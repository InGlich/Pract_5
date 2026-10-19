#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>
#define M_PI 3.14159265358979323846
int main() {
	setlocale(LC_ALL,"RUS");
	TaskDZ();
}
int Task1() {
	double gr;
	printf("Введите угол в градусах: ");
	scanf("%lf", &gr);
	double rad = gr * M_PI / 180.0;
	double sin_val = sin(rad);

	printf("sin(%.2f)=%.6f\n", gr, sin_val);
	printf("\nПроверка на контрольных значениях:\n");
	printf("30° = %.6f (должно быть 0.500000)\n", sin(30.0 * M_PI / 180.0));
	printf("60° = %.6f (должно быть 0.866025)\n", sin(60.0 * M_PI / 180.0));
	printf("90° = %.6f (должно быть 1.000000)\n", sin(90.0 * M_PI / 180.0));
	return 0;
}
int Task2() {
	double c = 0.4;
	double x = 3.5;
	double a = log(x);
	double b = a * a + sqrt(c * x);
	double y = exp(2 * x) + pow(9.7, b);
	printf("  a  = %.6f\n", x, a);
	printf("  b  = %.6f\n", b);
	printf("  y  = %.2f\n\n", y);

	printf("\n=== ЗАДАНИЕ 3: Проверка логических условий ===\n");
	int A = (int)a;
	int B = (int)b;
	int C = (int)y;

	printf("Целые части: A = %d, B = %d, C = %d\n", A, B, C);

	int condition_a = ((A % 2 == 0) && (B % 2 != 0)) || ((A % 2 != 0) && (B % 2 == 0));
	int condition_b = (A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0);

	printf("\nРезультаты проверки условий:\n");
	printf("Условие (а) - только одно из A и B четное: %d (1 - да, 0 - нет)\n", condition_a);
	printf("Условие (б) - каждое из A, B, C кратно трем: %d (1 - да, 0 - нет)\n", condition_b);

	return 0;
}
int TaskDZ() {
	double x;
	printf("Введите значение х: ");
	scanf("%lf", &x);
	double a = sin(3 * M_PI - 2 * x);
	double b = cos(5 * M_PI + 2 * x);
	double F = 0.25 * a * a * b * b;
	printf("  F(%.2f) = %.1e\n", x, F);
	return 0;
}