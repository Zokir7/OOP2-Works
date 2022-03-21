//#include<iostream>
//#include <string>
//using namespace std;
////================================TASK 1==========================
//class Recttangle
//{private:
//	double length, breadth;
//public:
//	double getArea()
//	{
//		int S;
//		S = length * breadth;
//		cout <<S<< endl;
//		return S;
//	}
//	void setLENGTH()
//	{
//		cout << "Please Input the length" << endl;
//		cin >> length;
//	}
//	void setBREADTH()
//	{
//		cout << "Please Input the Breadth" << endl;
//		cin >> breadth ;
//	}
//	Recttangle operator+(Recttangle& r)
//	{
//		r.breadth = r.breadth + breadth;
//		r.length = r.length + length;
//		return r;
//	}
//	friend void operator<<(ostream& h, Recttangle& t);
//	
//};
//void operator<<(ostream &h, Recttangle& t)
//{
//	h << "Breadth = " <<t.breadth << endl;
//	h << "Length = " << t.length << endl;
//}
////=============================================TAASK 2 ======================
//class Distance
//{private:
//	float kilometer, meter;
//public:
//	Distance()
//	{
//		kilometer = 00;
//		meter = 00;
//	}
//	Distance(float kilometer,float meter)
//	{
//		this ->kilometer=kilometer;
//		this->meter = meter;
//	}
//	void ShowDistance()
//	{	if (meter>1000)
//		{
//		cout << "The distance are = "<<meter+kilometer*1000 << " m " << endl;
//		cout << "In kilometers = " << kilometer + meter / 1000 << " km " << endl;
//		}
//		else 
//		{
//		cout << "The distance are = " << meter + kilometer * 1000<<" m " << endl;
//		cout << "In kilometers = " << kilometer + meter / 1000 << " km " << endl;
//		}
//
//	}
//	friend void operator >>(istream& l, Distance& p);
//	friend void operator==(Distance& j,Distance&r);
//};
//void operator>>(istream& l, Distance& p)
//{
//	cout << "Please input kilometers" << endl;
//	l >> p.kilometer;
//	cout << "Please input meters" << endl;
//	l >> p.meter;
//}
//void operator==(Distance& j, Distance& r)
//{
//	if (j.kilometer == r.kilometer && j.meter == r.meter)
//	{
//		cout << "The OJECTS are EQUAL" << endl;
//	}
//	else
//		cout << "The OBJECTS are NOT EQUAL" << endl;
// }
//int main()
//{
//	cout << "U2110301" << "  " << "Zugurov Zokir" << endl;
//	cout << "LAB-Assignment-5" << endl;
//Zoka:
//	int ch;
//	cout << "Please choose which Task do you want to run" << endl;
//	cout << "[0]-Stop the execution of the programm" << endl;
//	cout << "[1]-Task 1" << endl;
//	cout << "[2]-Task 2" << endl;
//	cin >> ch;
//	if (ch == 1)
//	{
//		//============Task 1==============
//		Recttangle r1, r2, r3;
//		cout << "Input the first object " << endl;
//		r1.setBREADTH();
//		r1.setLENGTH();
//		cout << r1;
//		cout << "Now please set the bradth and length for SECOND object" << endl;
//		r2.setBREADTH();
//		r2.setLENGTH();
//		cout << r2;
//		cout << "The area of the first object = ";
//		r1.getArea();
//		r3 = r1 + r2;
//		cout << "The area of the both objects = ";
//		r3.getArea();
//		goto Zoka;
//	}
//	if (ch == 2)
//	{
//		//===========================Task 2====================
//		Distance d1(85, 66), d2(6, 5);
//		cin >> d1;
//		d1.ShowDistance();
//		cout << "Please Input the values for second object" << endl;
//		cin >> d2;
//		d2.ShowDistance();
//		d1 == d2;
//		goto Zoka;
//	}
//	if(ch==0)
//	{
//		cout << "Thanks for using the programm!" << endl;
//		cout << "====Goodbye====" << endl;
//		system("pause");
//		return 0;
//	}
//	else
//	{
//		cout << "Sorry something went wrong" << endl;
//		goto Zoka;
//	}
//}