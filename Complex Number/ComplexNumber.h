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

	void Input(float RN, float IN);

	float GetRealNumber();

	float GetImaginaryNumber();

	ComplexNumber ComplexNumber::Output();

	ComplexNumber reverse();

	float abs();

	float arg();

	inline ComplexNumber operator +=(ComplexNumber CN);

	inline ComplexNumber operator -=(ComplexNumber CN);

	inline ComplexNumber operator *=(ComplexNumber CN);

	inline ComplexNumber operator /=(ComplexNumber CN);

	inline ComplexNumber operator +=(float N);

	inline ComplexNumber operator -=(float N);

	inline ComplexNumber operator *=(float N);

	inline ComplexNumber operator /=(float N);

	const ComplexNumber operator+ (ComplexNumber cn2);

	const ComplexNumber operator- (ComplexNumber cn2);

	const ComplexNumber operator* (ComplexNumber cn2);

	const ComplexNumber operator/ (ComplexNumber cn2);

	const ComplexNumber operator+ (float N);

	const ComplexNumber operator- (float N);

	const ComplexNumber operator* (float N);

	const ComplexNumber operator/ (float N);
}; 