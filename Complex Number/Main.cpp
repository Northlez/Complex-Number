#include "ComplexNumber.h"


int main()
{
	ComplexNumber cn1(2, 2), cn2(1, 1), cn3;
	cn3 = cn1 + cn2;
	cn1.Output();
	cn2.Output();
	cn3.Output();

	system("pause");
}