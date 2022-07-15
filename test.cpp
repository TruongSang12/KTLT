#include<stdio.h>
void Swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
int main()
{
	int a = 5, b = 10;
	Swap(&a, &b); // a = 10, b = 5
    printf("%d %d", a, b);
}