#include <iostream>
#include <math.h>
#include <time.h>

using namespace std;

void generation(double realiz, double p1, double p2, double p3, double p4, double* count, double* V) {

	srand(time(NULL));
	double a;
	int coun = 0;
	for (int i = 0; i < realiz; i++)
	{
		a = ((rand() % 100) + 1) / 100.0;

		coun++;
		if (coun == 10) {
			cout << endl;
			coun = 0;
		}
		else cout << a << "  ";

		if (a <= p1)
		{
			count[0]++; V[0] += 10;
		}
		if (p1 < a && a <= (p2 + p1))
		{
			count[1]++; V[1] += 25;
		}
		if (p2 + p1 < a && a <= p3 + p2 + p1)
		{
			count[2]++; V[2] += 100;
		}
		if ((p3 + p2 + p1) < a && a <= 1)
		{
			count[3]++; V[3] += 200;
		}
	}

	for (int i = 0; i < 4; i++)
	{
		count[i] /= realiz;
	}

}