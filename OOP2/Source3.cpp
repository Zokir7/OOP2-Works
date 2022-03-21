//#include<iostream>
//#include <string>
//using namespace std;
//class Student
//{
//private :
//	int age;
//	float sub[3];
//	string name;
//public:
//	void Input()
//	{
//		cout << "Input age:";
//		cin >> age;
//		cout << "Input name:";
//		cin >> name;
//		cout << "Input marks of student in 3  :";
//		for (int i=0;i<3;i++)
//		{
//			cin >> sub[i];
//		}
//		
//		
//
//	}
//	void Print();
//	float Total();
//
//
//};
//void Student::Print() //class Function Definition ourside class
//{
//	cout << "Age = "<<age << endl;
//	cout << "Name = " << name << endl;
//	cout << "Marks in 3 subjects are  "<< endl;
//	for(int i=0;i<3;i++)
//	{
//		cout << sub[i] << endl;
//	}
//}
//
//
//float Student::Total()
//{
//	float total = 0;
//	for (int i = 0; i < 3; i++) {
//		total = total + sub[i];
//		
//	}
//
//	return total;
//}
//
//int main()
//{
//	Student s1,s2;
//	s1.Input();
//	s1.Print();
//	cout << "Total marks of s1 in all 3 subjects are = ";
//	cout << s1.Total() << endl;
//	s2.Input();
//	s2.Print();
//	cout << "Total marks of s1 in all 3 subjects are = ";
//	cout << s2.Total() << endl;
//
//
//	system("pause");
//	return 0;
//}