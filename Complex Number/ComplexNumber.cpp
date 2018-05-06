#include "ComplexNumber.h"
	ComplexNumber::ComplexNumber()
	{
		_x = 1;
		_y = 1;
	};


	ComplexNumber::ComplexNumber(float x, float y)//Конструктор с параметрами
	{
		_x = x;
		_y = y;
	};


	void ComplexNumber::SetRealNumber(float RN)//Ввод действительной части
	{
		_x = RN;
	};


	void ComplexNumber::SetImaginaryNumber(float IN)//Ввод мнимой части
	{
		_y = IN;
	};


	void ComplexNumber::Input(float RN, float IN)//Ввод полного числа
	{
		_x = RN;
		_y = IN;
	};


	float ComplexNumber::GetRealNumber()//Вывод действительной части
	{
		return _x;
	};


	float ComplexNumber::GetImaginaryNumber()//Вывод мнимой части
	{
		return _y;
	};


	void ComplexNumber::Output()//Вывод числа на экран
	{
		if (_y>0) cout << _x << "+i" << _y << endl;//Если y>0, то число выводится в формате x+iy
		else if (_y == 0) cout << _x << endl;//Если y=0, то число выводится в формате x
		else cout << _x << "-i" << std::abs(_y) << endl;//Если y<0, то число выводится в формате x-iy(y выводится как абсолютное значение)
	};

	ComplexNumber ComplexNumber::reverse()//Нахождение сопряжённого
	{
		ComplexNumber temp;
		temp._x = _x;
		temp._y = _y * -1;
		return(temp);
	}
	float ComplexNumber::abs()//Модуль
	{
		float abs;
		abs = sqrt(_x * _x + _y * _y);
		return abs;
	}

	float ComplexNumber::arg()//Аргумент
	{
		return atan(_y / _x);
	}

	ComplexNumber ComplexNumber::operator +=(ComplexNumber CN)
	{
		this->_x += CN._x;
		this->_y += CN._y;
	}

	ComplexNumber ComplexNumber::operator -=(ComplexNumber CN)
	{
		this->_x -= CN._x;
		this->_y -= CN._y;
	}

	ComplexNumber ComplexNumber::operator *=(ComplexNumber CN)//Умножение
	{
		ComplexNumber Z = *this;
		_x = Z._x*CN._x - Z._y*CN._y;
		_y = Z._x*CN._y + Z._y*CN._x;
	}

	ComplexNumber ComplexNumber::operator /=(ComplexNumber CN)
	{
		ComplexNumber Z = *this;
		_x = (Z._x*CN._x + Z._y*CN._y) / (Z._x*Z._x + Z._y*Z._y);
		_y = (CN._x*Z._y - Z._x*CN._y) / (Z._x*Z._x + Z._y*Z._y);
	}

	ComplexNumber ComplexNumber::operator +=(float N)
	{
		_x += N;
	}

	ComplexNumber ComplexNumber::operator -=(float N)
	{
		_x -= N;
	}

	ComplexNumber ComplexNumber::operator *=(float N)//Умножение
	{
		_x *= N;
	}

	ComplexNumber ComplexNumber::operator /=(float N)
	{
		_x /= N;
	}

	const ComplexNumber ComplexNumber::operator+(ComplexNumber cn2)
	{
		ComplexNumber cn1 = *this;
		cn1._x += cn2._x;
		cn1._y += cn2._y;
		return cn1;
	}

	const ComplexNumber ComplexNumber::operator-(ComplexNumber cn2)
	{
		ComplexNumber cn1 = *this;
		cn1._x -= cn2._x;
		cn1._y -= cn2._y;
		return cn1;
	}

	const ComplexNumber ComplexNumber::operator *(ComplexNumber cn2)//Умножение
	{
		ComplexNumber Z;
		ComplexNumber cn1 = *this;
		Z._x = cn1._x*cn2._x - cn1._y*cn2._y;
		Z._y = cn1._x*cn2._y + cn1._y*cn2._x;
		return Z;
	}

	const ComplexNumber ComplexNumber::operator /(ComplexNumber cn2)
	{
		ComplexNumber Z;
		ComplexNumber cn1 = *this;
		Z._x = (cn1._x*cn2._x + cn1._y*cn2._y) / (cn1._x*cn1._x + cn2._y*cn2._y);
		Z._y = (cn2._x*cn1._y - cn1._x*cn2._y) / (cn1._x*cn1._x + cn2._y*cn2._y);
		return Z;
	}

	const ComplexNumber ComplexNumber::operator +(float N)
	{
		ComplexNumber cn = *this;
		cn._x += N;
		return cn;
	}

	const ComplexNumber ComplexNumber::operator -(float N)
	{
		ComplexNumber cn = *this;
		cn._x -= N;
		return cn;
	}

	const ComplexNumber ComplexNumber::operator *(float N)//Умножение
	{
		ComplexNumber cn = *this;
		cn._x *= N; 
		return cn;
	}

	const ComplexNumber ComplexNumber::operator /(float N)
	{
		ComplexNumber cn = *this;
		cn._x /= N;
		return cn;
	}