#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
double distance(double x1, double y1, double x2, double y2);
int main()
{
	double x[5], y[5], max = 0;
	struct coordinates
	{
		double x, y;
	};
	coordinates co[5];
	int max1, max2;
	for (int i = 0; i < 5; i++)
	{
		scanf("%lf,%lf", &co[i].x, &co[i].y);
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (distance(co[i].x, co[i].y, co[j].x, co[j].y) > max)
			{
				max1 = i + 1;
				max2 = j + 1;
				max = distance(co[i].x, co[i].y, co[j].x, co[j].y);
			}
		}
	}
	printf("%d\n%d", max1, max2);
	return 0;
}
double distance(double x1, double y1, double x2, double y2)
{
	double result;
	result = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	return result;
}