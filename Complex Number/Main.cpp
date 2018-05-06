#include "ComplexNumber.h"
void Enter_Complex_Number(ComplexNumber &CN)
{
	float RN, IN;
	cout << "¬ведите сначала действительную, а затем мнимую часть комплексного числа" << endl;
	cin >> RN >> IN;
	CN.Input(RN, IN);
};


void Enter_Real_Part(ComplexNumber &CN)
{
	float RN;
	cout << "¬ведите действительную часть комплексного числа" << endl;
	cin >> RN;
	CN.SetRealNumber(RN);
}

void Enter_Imaginary_Part(ComplexNumber &CN)
{
	float IN;
	cout << "¬ведите мнимую часть комплексного числа" << endl;
	cin >> IN;
	CN.SetImaginaryNumber(IN);
};


int main()
{
	setlocale(LC_ALL, "Russian");
	ComplexNumber cn1(2, 2), cn2(1, 1), cn3, cn4;
	Enter_Complex_Number(cn4);
	cn3 = cn1 + cn2;
	cn1.Output();
	cn2.Output();
	cn3.Output();
	cn4.Output();

	system("pause");
}