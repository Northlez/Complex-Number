#include "ComplexNumber.h"
	ComplexNumber::ComplexNumber()
	{
		_x = 1;
		_y = 1;
	};


	ComplexNumber::ComplexNumber(float x, float y)//����������� � �����������
	{
		_x = x;
		_y = y;
	};


	void ComplexNumber::SetRealNumber(float RN)//���� �������������� �����
	{
		_x = RN;
	};


	void ComplexNumber::SetImaginaryNumber(float IN)//���� ������ �����
	{
		_y = IN;
	};


	void ComplexNumber::Input()//���� ������� �����
	{
		cout << "�� ������� ������� �������������� � ������ ����� ������������ �����" << endl;
		scanf_s("%f %f", _x, _y);
	};


	float ComplexNumber::GetRealNumber()//����� �������������� �����
	{
		return _x;
	};


	float ComplexNumber::GetImaginaryNumber()//����� ������ �����
	{
		return _y;
	};


	void ComplexNumber::Output()//����� ����� �� �����
	{
		if (_y>0) cout << _x << "+i" << _y << endl;//���� y>0, �� ����� ��������� � ������� x+iy
		else if (_y == 0) cout << _x << endl;//���� y=0, �� ����� ��������� � ������� x
		else cout << _x << "-i" << abs(_y) << endl;//���� y<0, �� ����� ��������� � ������� x-iy(y ��������� ��� ���������� ��������)
	};

	ComplexNumber ComplexNumber::reverse()//���������� �����������
	{
		ComplexNumber temp;
		temp._x = _x;
		temp._y = _y * -1;
		return(temp);
	}
	float ComplexNumber::absol()//������
	{
		float abs;
		abs = sqrt(_x * _x + _y * _y);
		return abs;
	}

	float ComplexNumber::arg()//��������
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

	ComplexNumber ComplexNumber::operator *=(ComplexNumber CN)//���������
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

	ComplexNumber ComplexNumber::operator *=(float N)//���������
	{
		_x *= N;
	}

	ComplexNumber ComplexNumber::operator /=(float N)
	{
		_x /= N;
	}

	ComplexNumber ComplexNumber::operator+(ComplexNumber cn2)
	{
		ComplexNumber cn1 = *this;
		cn1._x += cn2._x;
		cn1._y += cn2._y;
		return cn1;
	}

	ComplexNumber ComplexNumber::operator-(ComplexNumber cn2)
	{
		ComplexNumber cn1 = *this;
		cn1._x -= cn2._x;
		cn1._y -= cn2._y;
		return cn1;
	}

	ComplexNumber ComplexNumber::operator *(ComplexNumber cn2)//���������
	{
		ComplexNumber Z;
		ComplexNumber cn1 = *this;
		Z._x = cn1._x*cn2._x - cn1._y*cn2._y;
		Z._y = cn1._x*cn2._y + cn1._y*cn2._x;
		return Z;
	}

	ComplexNumber ComplexNumber::operator /(ComplexNumber cn2)
	{
		ComplexNumber Z;
		ComplexNumber cn1 = *this;
		Z._x = (cn1._x*cn2._x + cn1._y*cn2._y) / (cn1._x*cn1._x + cn2._y*cn2._y);
		Z._y = (cn2._x*cn1._y - cn1._x*cn2._y) / (cn1._x*cn1._x + cn2._y*cn2._y);
		return Z;
	}

	ComplexNumber ComplexNumber::operator +(float N)
	{
		ComplexNumber cn = *this;
		cn._x += N;
		return cn;
	}

	ComplexNumber ComplexNumber::operator -(float N)
	{
		ComplexNumber cn = *this;
		cn._x -= N;
		return cn;
	}

	ComplexNumber ComplexNumber::operator *(float N)//���������
	{
		ComplexNumber cn = *this;
		cn._x *= N; 
		return cn;
	}

	ComplexNumber ComplexNumber::operator /(float N)
	{
		ComplexNumber cn = *this;
		cn._x /= N;
		return cn;
	}