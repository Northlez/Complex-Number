#include <stdio.h>
#include <stdlib.h> 
#include <iostream>

using namespace std;

class ComplexNumber
{
private:
	float _x, _y;
public:
	ComplexNumber();

	ComplexNumber(float x, float y);

	void SetRealNumber(float RN);

	void SetImaginaryNumber(float IN);

	void Input();

	float GetRealNumber();

	float GetImaginaryNumber();

	void Output();

	ComplexNumber reverse();

	float absol();

	float arg();

	inline ComplexNumber operator +=(ComplexNumber CN);

	inline ComplexNumber operator -=(ComplexNumber CN);

	inline ComplexNumber operator *=(ComplexNumber CN);

	inline ComplexNumber operator /=(ComplexNumber CN);

	inline ComplexNumber operator +=(float N);

	inline ComplexNumber operator -=(float N);

	inline ComplexNumber operator *=(float N);

	inline ComplexNumber operator /=(float N);

	ComplexNumber operator+ (ComplexNumber cn2);

	ComplexNumber operator- (ComplexNumber cn2);

	ComplexNumber operator* (ComplexNumber cn2);

	ComplexNumber operator/ (ComplexNumber cn2);

	ComplexNumber operator+ (float N);

	ComplexNumber operator- (float N);

	ComplexNumber operator* (float N);

	ComplexNumber operator/ (float N);
}; 