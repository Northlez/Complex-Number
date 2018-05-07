#include "ComplexNumber.h"
void Enter_Complex_Number(ComplexNumber &CN)
{
	float RN, IN;
	cout << "Введите сначала действительную, а затем мнимую часть комплексного числа" << endl;
	cin >> RN >> IN;
	CN.Input(RN, IN);
};


void Enter_Real_Part(ComplexNumber &CN)
{
	float RN;
	cout << "Введите действительную часть комплексного числа" << endl;
	cin >> RN;
	CN.SetRealNumber(RN);
}

void Enter_Imaginary_Part(ComplexNumber &CN)
{
	float IN;
	cout << "Введите мнимую часть комплексного числа" << endl;
	cin >> IN;
	CN.SetImaginaryNumber(IN);
};

void ComplexNumber_Output(ComplexNumber CN)
{
	if (CN.GetImaginaryNumber()>0) cout << CN.GetRealNumber() << "+i" << CN.GetImaginaryNumber() << endl;//Если y>0, то число выводится в формате x+iy
	else if (CN.GetImaginaryNumber() == 0) cout << CN.GetRealNumber() << endl;//Если y=0, то число выводится в формате x
	else cout << CN.GetRealNumber() << "-i" << std::abs(CN.GetImaginaryNumber()) << endl;//Если y<0, то число выводится в формате x-iy(y выводится как абсолютное значение)
}


int main()
{
	setlocale(LC_ALL, "Russian");
	ComplexNumber cn1(2, 2), cn2(1, 1), cn3, cn4;
	Enter_Complex_Number(cn4);
	cn3 = cn1 + cn2;
	ComplexNumber_Output(cn1);
	ComplexNumber_Output(cn2);
	ComplexNumber_Output(cn3);
	ComplexNumber_Output(cn4);

	system("pause");
}