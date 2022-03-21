//#include <iostream>
//#include <string>
//using namespace std;
////================================QUES1=========================
//class MemberType
//{private:
//	string name_of_aperson;
//	string	member_ID;
//	int number_of_books_bought;
//	float amount_spent;
//public:
//	MemberType()
//	{
//		name_of_aperson = " ";
//		member_ID = "  ";
//		number_of_books_bought = 0;
//		amount_spent = 0;
//	}
//	void ShowNAME()
//	{
//		cout << "PERSONS NAME : " << endl;
//		cout << name_of_aperson << endl;
//	}
//	friend void operator>>(istream& c, MemberType& m);
//	friend void operator<<(ostream& o, MemberType& l);
//};
//void operator<<(ostream& o, MemberType& l)
//{
//	o << "ALL THE DATA" << endl;
//	o << "NAME : " << l.name_of_aperson << endl;
//	o << "ID : " << l.member_ID << endl;
//	o << "NUMBER OF BOOKS BOUGHT : " << l.number_of_books_bought << endl;
//	o << "AMOUNT OF MONEY SPENT ON BOOKS : " << l.amount_spent << endl;
//}
//void operator>>(istream& c, MemberType& m)
//{	ZOKA:
//	int h;
//	cout << "Please choose what do you want to Update/Modify/Input" << endl;
//	cout << "(0)-Go back to the MAIN menu" << endl;
//	cout << "(1)-Input/Modify name of a person" << endl;
//	cout << "(2)-Input/Modify ID of a person" << endl;
//	cout << "(3)-Input/Modify/Update number of books bought" << endl;
//	cout << "(4)-Input/Modify/Update the amount of money spent on the books" << endl;
//
//	cin >> h;
//	//Name of a PERSON 
//	if (h == 1)
//	{
//		cout << "Please Input the name of a person" << endl;
//		c >> m.name_of_aperson;
//		goto ZOKA;
//	}
//	//ID of a PERSON
//	if (h == 2)
//	{
//		cout << "Please Input the member id of a person" << endl;
//		c >> m.member_ID;
//		goto ZOKA;
//	}
//	//Number of BOOKS 
//	if (h == 3)
//	{  
//		int G;
//		cout << "Please choose what do you want to do" << endl;
//		cout << "[1]-INPUT the number of books bought" << endl;
//		cout << "[2]-UPDATE the number of books bought" << endl;
//		cout << "[3]-MODIFY the number of books bought" << endl;
//		cin >> G;
//		if (G == 1)
//		{
//			cout << "Please Input the number of books bought" << endl;
//			c >> m.number_of_books_bought;
//			goto ZOKA;
//		}
//		if(G==2)
//		{
//			int add;
//			cout << "Please Input how many books you bought addtionally" << endl;
//			cin >> add;
//			m.number_of_books_bought = add + m.number_of_books_bought;
//			goto ZOKA;
//		}
//		if (G==3)
//		{
//			cout << "Please Modify how many books you have bought at all" << endl;
//			c >> m.number_of_books_bought;
//			goto ZOKA;
//		}
//		
//	}
//	//The AMOUNT of money spent on the BOOKS
//	if (h == 4)
//	{
//		int P;
//		cout << "Please choose what do you want to do" << endl;
//		cout << "[1]-INPUT the amount of money spent on the books" << endl;
//		cout << "[2]-UPDATE the amount of money spent on the books " << endl;
//		cout << "[3]-MODIFY the amount of money spent on the books " << endl;
//		cin >> P;
//		if (P == 1)
//		{
//			cout << "Please Input the amount of money spent on the books" << endl;
//			c >> m.amount_spent;
//			goto ZOKA;
//		}
//		if (P == 2)
//		{
//			int ad;
//			cout << "Please Input how much additional money you spent on books" << endl;
//			cin >> ad;
//			m.amount_spent = ad + m.amount_spent;
//			goto ZOKA;
//		}
//		if (P == 3)
//		{
//			cout << "Please Modify how much money you have spent on the books at all" << endl;
//			c >> m.amount_spent;
//			goto ZOKA;
//		}
//	}
//	if(h==0)
//	{
//		
//	}
//}
////================================QUES2================================================
//class Fraction
//{private:
//	long chislitel;
//	long znamenatel;
//public:
//	Fraction(int chislitel,int znamenatel)
//	{
//		this->znamenatel = znamenatel;
//		this->chislitel = chislitel;
//		chislitel = 0;
//		znamenatel = 1;
//	}
//	Fraction(int NUM)
//	{
//		
//		if(znamenatel==0)
//		{
//			NUM = 1;
//		}
//		NUM = znamenatel;
//
//	}
//	//UNARY OPERATORS
//	friend void operator>>(istream& c, Fraction& p);
//	friend void operator<<(ostream& c, Fraction& l);
//	//BINARY OPERATORS
//	friend Fraction operator+(Fraction& l, Fraction& l1);
//	friend Fraction operator-(Fraction& l, Fraction& l1);
//	friend Fraction operator*(Fraction& l, Fraction& l1);
//	friend Fraction operator/(Fraction& l, Fraction& l1);
//};
////UNARY OPERATORS
//void operator>>(istream& c, Fraction& p)
//{
//	cout << "Please Input the numenator" << endl;
//	c >> p.chislitel;
//	cout << "Please Input the denominator" << endl;
//	c >> p.znamenatel;
//}
//void operator<<(ostream& c, Fraction& l)
//{
//	cout << "The NUMENATOR are = "<<l.chislitel << endl;
//	cout << "The DENOMINATOR are = " << l.znamenatel << endl;
//	cout << "Fraction: " << endl;
//	cout<<"    " << l.chislitel << endl;
//	cout << "    -" << endl;
//	cout << "    " << l.znamenatel << endl;
//
//}
////BINARY OPERATORS
//Fraction operator+(Fraction& l, Fraction& l1)
//{
//	l.chislitel=l.chislitel * l1.znamenatel + l.znamenatel * l1.chislitel;  
//	l.znamenatel=l.znamenatel * l1.chislitel;
//	return l;
//}
//Fraction operator-(Fraction& l, Fraction& l1)
//{
//	l.chislitel=l.chislitel * l1.znamenatel - l1.chislitel * l.znamenatel;
//	l.znamenatel=l.znamenatel * l1.znamenatel;
//	return l;
//}
//Fraction operator*(Fraction& l, Fraction& l1)
//{
//
//	l.chislitel = l.chislitel * l1.chislitel;
//	l.znamenatel =l.znamenatel * l1.znamenatel;
//	return l;
//}
//Fraction operator/(Fraction& l, Fraction& l1)
//{
//	l.chislitel = l.chislitel * l1.znamenatel; 
//	l.znamenatel=l1.chislitel * l.znamenatel;
//	return l;
//}
////===============================================MAIN==========================================
//int main()
//{	
//	cout << "U2110301" << endl;
//	cout << "Zugurov Zokir" << endl;
//	//================================QUES1=========================
//ZAK:
//	int B;
//	cout << "Please choose which task do you want to run" << endl;
//	cout << "<0>-STOP EXECUTION" << endl;
//	cout << "<1>-TASK 1" << endl;
//	cout << "<2>-TASK 2" << endl;
//	cin >> B;
//	//=========================================TASK 1===========================================================
//	if (B == 1)
//	{
//		MemberType* k;
//		k = new MemberType;
//	ZOKIR:
//		int ch;
//		cout << "Please choose what do you want to do" << endl;
//		cout << "{0}-GO BACK TO MAIN MENU" << endl;
//		cout << "{1}-INPUT Data(Name,ID,Number of books,amount of money spent)" << endl;
//		cout << "{2}-SHOW Name of a person" << endl;
//		cout << "{3}-UPDATE/MODIFY DATA" << endl;
//		cout << "{4}-DISPLAY all the DATA" << endl;
//		cin >> ch;
//		if (ch == 0)
//		{
//			cout << "Thank for using the programm." << endl;
//			goto ZAK;
//		}
//		if (ch == 1)
//		{
//			cin >> *k;
//			goto ZOKIR;
//		}
//		if (ch == 2)
//		{
//			k->ShowNAME();
//			goto ZOKIR;
//		}
//		if (ch == 3)
//		{
//			cin >> *k;
//			goto ZOKIR;
//		}
//		if (ch == 4)
//		{
//			cout << *k;
//			goto ZOKIR;
//		}
//		else
//		{
//			cout << "Sorry something went wrong" << endl;
//			goto ZAK;
//		}
//	}
//	//=========================================TASK 2===========================================================
//	if (B == 2)
//	{
//	Z:
//		int p15;
//		int F;
//		Fraction p(15, 15), p1(15), p2(10), p3(10);
//		cout << "Please Choose what do you want to do" << endl;
//		cout << "[0]-Go back to choosing the tasks" << endl;
//		cout << "[1]-Input values of the Fraction" << endl;
//		cin >> F;
//		if (F == 1)
//		{
//			cin >> p1;
//			cout << p1;
//			cout << "Please input the second object FRACTION" << endl;
//			cin >> p2;
//			cout << p2;
//				int T;
//				K:
//				cout << "Please choose what do you want to do with these two objects" << endl;
//				cout << "<0>-MAIN MENU" << endl;
//				cout << "<1>-OPERATIONS" << endl;
//				cin >> T;
//				if (T == 0)
//				{
//					goto Z;
//				}
//				if (T == 1)
//				{
//					char h;
//					cout << "Please choose which OPERATION do want to do" << endl;
//					cout << "[+]-ADDITION OF TWO OBJECTS " << endl;
//					cout << "[-]-SUBSTRACTION OF TWO OBJECTS " << endl;
//					cout << "[*]-MULTIPLICATION OF TWO OBJECTS " << endl;
//					cout << "[/]-DEVISION OF TWO OBJECTS " << endl;
//					cin >> h;
//					switch (h)
//					{
//					case '+':
//						p3 = p1+p2;
//						cout << p3;
//						goto K;
//						break;
//					case'-':
//						p3 = p1-p2;
//						cout << p3;
//						goto K;
//						break;
//					case'*':
//						p3 = p1 * p2;
//						cout << p3;
//						goto K;
//						break;
//					case'/':
//						p3 = p1 / p2;
//						cout << p3;
//						goto K;
//						break;
//
//					}
//				}
//				else
//				{
//					cout << "Sorry something went wrong" << endl;
//					goto Z;
//				}
//		}
//		if (F == 0)
//		{
//			goto ZAK;
//		}
//		else
//		{
//			cout << "Sorry something went wrong" << endl;
//			goto ZAK;
//		}
//	}
//	if (B == 0)
//	{
//		cout << "GOODBYE" << endl;
//		system("pause");
//		return 0;
//	}
//}
//
//
//
