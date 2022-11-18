#include <iostream>
using namespace std;
class distance
{
	double Ax;
	double Ay;
	double Bx;
	double By;

public:
	

	double get_Ax()const
	{
		return Ax;
	}
	double get_Ay()const
	{
		return Ay;
	}
	void set_Ax(double Ax)
	{
		this->Ax = Ax;
	}
	void set_Ay(double Ay)
	{
		this->Ay = Ay;
	}
	double get_Bx()const
	{
		return Bx;
	}
	double get_By()const
	{
		return By;
	}
	void set_Bx(double Bx)
	{
		this->Bx = Bx;
	}
	void set_By(double By)
	{
		this->By = By;
	}



	void main()
	{
		setlocale(LC_ALL, "Rus");
		distance A;
		A.set_Ax(0);
		A.set_Ay(0);
		cout << "\tТочка -А- с нулевыми начальными координатами" << endl;
		distance B;
		B.set_Bx(4.0);
		B.set_By(4.5);
		cout << "\t Точка -В- до которой необходимо вычислить расстояние с координатами:" << endl;
		cout << B.get_Bx() << "\t" << B.get_By() << endl;
		distance D;
		D.Bx = A.get_Ax() - B.get_Bx();
		D.By = A.get_Ay() - B.get_By();
		double dist = sqrt(D.Ax * D.Ax + D.Ay * D.By);





	}


};
