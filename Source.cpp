#include <iostream>
#include <math.h>
#include <time.h>
#include "Source1.cpp"

using namespace std;

int main() 
{
	double realiz;
	cout << "К-сть реалізацій: ";
	cin >> realiz;

	double x1 =0.1 , x2 = 0.3, x3 = 0.55, x4 = 0.05;
	double counter[4] = { 0 };
	double V[4] = { 0 };

	generation(realiz, x1, x2, x3, x4, counter, V);
	cout << "\nРезультат: " << counter[0] << " " << counter[1] << " "
		<< counter[2]<< " " << counter[3] << endl;
	cout << "V: ";
	for (int i = 0; i < 4; i++)
	{
		cout << V[i] << " ";
	}

	double sum = 0;
	for (int i = 0; i < 4; i++)
	{
		sum += counter[i];
	}
	cout << "Сума: " << sum;
	
	return 0;

}