#include <stdio.h>

int b;
int temp = 3;
int set_b(int &i, int &a)
{
i = i + 1;
b = a;
}
int p(int &x, int &S)
{
for (x = 0; x < 3; x++) {
temp = temp + S;
S = temp;
}
return temp + b;
}
int main()
{
int a[3][3];
a[0][0] = 0; a[0][1] = 0; a[0][2] = 0;
a[1][0] = 0; a[1][1] = 0; a[1][2] = 0;
a[2][0] = 0; a[2][1] = 0; a[2][2] = 0;
int b;
int r;
int temp = 4;
int i = 1;
set_b(i, a[i][i]);
a[0][0] = 100; a[0][1] = 10; a[0][2] = 10;
a[1][0] = 1; a[1][1] = 10; a[1][2] = 100;
a[2][0] = 100; a[2][1] = 100; a[2][2] = 100;
b = 0;
r = p(i, a[i][b]);
printf("%d %d %d %d\n", i, temp, b, r);
printf("%d %d %d\n", a[0][0], a[0][1], a[0][2]);
printf("%d %d %d\n", a[1][0], a[1][1], a[1][2]);
printf("%d %d %d\n", a[2][0], a[2][1], a[2][2]);
}