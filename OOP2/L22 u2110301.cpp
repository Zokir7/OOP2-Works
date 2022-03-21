//#include <iostream>
//#include<math.h>
//using namespace std;
////================================Task 1===============================
//class Person
//{private:
//	string name;
//	int age;
//public:
//	Person(string b, int a = 15)
//	{
//		age = a;
//		name = b;
//	}
//	Person()
//	{
//		age = 0;
//		name = "Hello";
//	}
//	void Display()
//	{
//		cout << "The name are " << name << endl;cout << "The age are = "<<age << endl;
//	}
//	
//};
//
////================================Task 2===============================
//class Records
//{
//private:
//	string name;
//	float salary;
//	string date_of_birth;	
//public:
//	Records()
//	{
//		name = "Default name ";
//		salary = 0000;
//		date_of_birth = "00.00.0000";
//	}
//
//	Records(string n, string d, float s=500)
//	{
//		cout << "Please Input the name" << endl; cin >> n;
//		cout << "Please Input the date of birth" << endl; cin >> d;
//		cout << "Please Input the salary " << endl; cin >> s;
//
//		name = n;
//		salary = s;
//		date_of_birth = d;
//	
//	}
//	void Display()
//	{
//		cout << "Name = " << name<< endl;
//		cout << "Date of birth = " << date_of_birth << endl;
//		cout << "Salary = " << salary << endl;
//	}
//};
////================================Task 3===============================
//class Account
//{private:
//	string name;
//	string account_number;
//	float balance;
//public:
//	Account(string n, string a, float b = 500)
//	{
//		cout << "Please Input the name" << endl; cin >> n;
//		cout << "Please Input the account number" << endl; cin >> a;
//		cout << "Please Input the balance  " << endl; cin >> b;
//
//		name = n;
//		account_number = a;
//		balance = b;
//
//	}
//	Account()
//	{
//		name = "Default name ";
//		balance = 0000;
//		account_number = "AF5151561841";
//	}
//	void Display()
//	{
//		cout << "Name = " << name << endl;
//		cout << "Account number = " <<account_number << endl;
//		cout << "Balance = " << balance << endl;
//	}
//	~Account()
//	{
//		cout << "destructor are called" << endl;
//	}
//};
////================================Task 4===============================
//class Triangle
//{private:
//	double height;
//	double base;
//public:
//	Triangle(double k=0,double p=0)
//	{ 
//		base = k;
//		height=p;
//	}
//	~Triangle()
//	{
//		cout << "The destructor are called" << endl;
//	}
//	void getHeight()
//	{
//		cout << "The base of the triangle are equal to = " << height << endl;
//	}
//	void setHeight(double h)
//	{
//		
//		cout << "Please input the height of the triangle" << endl; cin >> h;
//		cout << "Please note that triangle is isosceles" << endl;
//		height = h;
//	}
//	void getBase()
//	{
//		cout << "The base of the triangle are equal to = " << base << endl;
//	}
//	void  setBase(double b)
//	{
//		
//		cout << "Please input the base of the triangle" << endl; cin >> b;
//		base = b;
//	}
//	void getArea()
//	{
//		cout << "The area of the triangle are equal to  = " << 0.5*base * height << endl;
//	}
//	void getPerimeter(double a)
//	{
//		a=sqrt(base * base + height * height);
//
//		cout << "The perimeter of the Triangle are = " << a + base + a << endl;
//	}
//};
////================================Task 5===============================
//class Box 
//{private:
//	double width;
//public:
//	void setWidth()
//	{
//		cout << "Please input the Width of the box" << endl;
//		cin >> width;
//	}
//	friend void printWidth(Box&);
//};
//void printWidth(Box& b)
//{
//	cout << "The width of the box are = " << b.width << endl;
//}
////======================================MAIN================================
//int main()
//{
//	/*cout << "U2110301        Lab-3" << endl;
//	int ch;
//	cout << "Please choose which task do you want to run (0-Stop;1-Task 1;2-Task 2;3-Task 3;4-Task 4;5-Task 5)" << endl;
//	cin >> ch;
//	if (ch == 1) {
//		cout << "===========================Task-1==========================" << endl;
//		Person p, p1("This is parametric age");
//		p.Display();
//		p1.Display();
//		return main();
//	}
//	else if (ch == 2) {
//		cout << "===========================Task 2==========================" << endl;
//		Records r, r1("", "");
//		r.Display();
//		r1.Display();
//		return main();
//	}
//	else if (ch == 3) {
//		cout << "===========================Task 3===========================" << endl;
//		Account a, a1("bhbhbfk", "bfidsbfb"), a2;
//		a.Display();
//		a1.Display();
//		a2.~Account();
//		return main();
//	}
//	else if (ch == 4) {
//		cout << "===========================Task 4===========================" << endl;
//		Triangle t, t1,t2;
//		t1.setHeight(0.1);
//		t1.getHeight();
//		t1.setBase(0.1);
//		t1.getBase();
//		t1.getArea();
//		t1.getPerimeter(0);
//		return main();
//	}
//	else if(ch==5)
//	{
//		cout << "===========================Task 5===========================" << endl;
//		Box b;
//		b.setWidth();
//		printWidth(b);
//		return main();
//	
//	}
//
//
//	else {
//		cout << "Thanks Goodbye" << endl;
//		system("pause");
//		return 0;
//	}*/
//
//
//}