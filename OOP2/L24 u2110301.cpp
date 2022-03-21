//#include<iostream>
//#include<string>
//using namespace std;
////===========================================TASK-1==============================
//class Daytime
//{private:
//	int hour,minute,second;
//public:
//	Daytime()
//	{}
//	Daytime(int hour,int minute,int second)
//	{	this->hour=hour;
//		this->minute=minute;
//		this->second=second;}
//	int getHOUR()const
//	{return hour;}
//	int getMINUTE()const
//	{return minute;}
//	int getSECONDS()const
//	{return second;}
//	friend void operator<<(ostream &o,Daytime &R);
//	friend void operator>>(istream& t, Daytime& D);
//	int asSECONDS()
//	{	
//		cout<<"The Daytime in seconds are equal to  = "<<hour*60*60+minute*60+second<<endl;
//	 return 0;
//	}
//	void operator++()
//	{
//		++second;
//	}
//	void operator++(int)
//	{
//		second++;
//	}
//	void operator--(int)
//	{
//		minute--;
//	}
//	void operator--()
//	{
//		
//		--minute;
//	}
//};
//void operator<<(ostream  &o, Daytime& R)
//{
//	o << "The number of HOURS are equal to = " << R.hour << endl;
//	o << "The number of MINUTES are equal to = " << R.minute << endl;
//	o << "The number of SECONDS are equal to =  " << R.second << endl;
//	o << "----------" << R.hour << ":" << R.minute << ":" << R.second << "----------" << endl;
//
//}
//void operator>>(istream &t, Daytime& D)
//{
//	cout << "Please Input the number of hours" << endl;
//	cin >> D.hour;
//	cout << "Please Input the number of minutes" << endl;
//	cin >> D.minute;
//	cout << "Please Input the number of seconds" << endl;
//	cin >> D.second;
//	if(D.hour>=24&&D.hour<48)
//		{
//		D.hour = D.hour - 24;
//		}
//	 if(D.minute>=60&&D.minute<120)
//		{
//		 
//		 D.minute = D.minute - 60;
//		 D.hour++;
//		}
//	 if (D.second >= 60&&D.second<120)
//	 { 
//		 D.second = D.second - 60;
//		 D.minute++;
//		}	
//	 if (D.hour >= 48 && D.hour <72 )
//	 {
//		 D.hour = D.hour - 48;
//	 }
//	 if (D.minute >= 120 && D.minute < 180)
//	 {
//
//		 D.minute = D.minute - 120;
//		 D.hour++;
//		 D.hour++;
//	 }
//	 if (D.second >= 120 && D.second < 180)
//	 {
//		 D.second = D.second - 120;
//		 D.minute++;
//		 D.minute++;
//	 }
//	 if(D.minute>59)
//	 {
//		 D.minute = D.minute - 60;
//		 D.hour++;
//	 }
//	 if(D.hour>23)
//	 {
//		 D.hour = D.hour - 24;
//	 }
//}
////=====================================Task-2===========================
//class Dollar
//{
//private:
//	float currency, soums, euro;
//public:
//	float getDOLLAR()
//	{
//		int recurrency;
//		recurrency = 1 / currency;
//		cout << "The Rate of currency is like 1 euro = " << currency << "soums" << endl;
//		cout << "The rate of currency from persepctive of 1 soum =" << recurrency << "euros" << endl;
//		return currency;
//	}
//	float getSOUMS()
//	{
//		return soums;
//	}
//	float getEURO()
//	{
//		return euro;
//	}
//	void setRates()
//	{
//		cout << "Please Input the current rates of curency of  1 euro into soums (like 1-euro= to inputed amount of soums) " << endl;
//		cin >> currency;
//	}
//	friend void operator<<(ostream& t, Dollar& P);
//	friend void operator>>(istream& n, Dollar& d);
//};
//void operator<<(ostream& t, Dollar& P)
//{
//	int p;
//	cout << "Please tells in what CURRENCY you have inputed the rate of currency" << endl;
//	cout << "[1]-Soums" << endl;
//	cout << "[2]-Euro" << endl;
//	cin >> p;
//	if (p == 1)
//	{
//		t << "The amount of soums in euros are equal to = " << P.soums/P.currency << endl;
//	}
//	else if (p == 2)
//	{
//		t << "The amount of euro in soums are equal to = " << P.euro*P.currency << endl;
//	}
//	else 
//	{
//		cout << "Sorry something went wrong" << endl;
//	}
//}
//void operator>>(istream& n, Dollar& d)
//{
//	int ch;
//	cout << "Pleae choose in what currency you want to input the currency" << endl;
//	cout << "[1]-EURO" << endl;
//	cout << "[2]-SOUMS" << endl;
//	cin >> ch;
//	if (ch == 1)
//	{
//		cout << "Please Input the amount of euro" << endl;
//		n >> d.euro;
//	}
//	else if (ch ==2)
//	{
//		cout << "Please Input the amount of soums" << endl;
//		n >> d.soums;
//	}
//	else 
//	{
//		cout << "Sorry something went wrong" << endl;
//	}
//}
////=====================================MAIN=====================
//int main()
//{//=======================TASK-1===========================
//	cout << "U2110301"<<endl;
//	cout << "Zugurov Zokir" << endl;
//	cout << "LAB-4" << endl;
//	int x;
//	Zokir:
//	cout << "Please choose which task do you want to run" << endl;
//	cout << "[0]-STOP EXECUTION OF A PROGRAMM" << endl;
//	cout << "[1]-TASK 1" << endl;
//	cout << "[2]-TASK 2 " << endl;
//	cin >> x;
//	if (x == 1)
//	{
//		Daytime d2(00, 00, 00);
//		int ch;
//		cout << "Please Input any number except 0" << endl;
//		cin >> ch;
//		while (ch != 0)
//		{
//			cout << "==============Please choose what you want to do================ " << endl;
//			cout << "[0]-Go back to the menu" << endl;
//			cout << "[1]-Input current time" << endl;
//			cout << "[2]-Display a time" << endl;
//			cout << "[3]-Display time in seconds" << endl;
//			cout << "[4]-Increment seconds" << endl;
//			cout << "[5]-Decrement Minutes" << endl;
//			cin >> ch;
//			switch (ch)
//			{
//			case 1:
//				cin >> d2;
//				break;
//			case 2:
//				cout << d2;
//				break;
//			case 3:
//				d2.asSECONDS();
//				break;
//			case  4:
//				d2++;
//				break;
//			case 5:
//				--d2;
//				break;
//			case 0:
//				cout << "THANKS FOR USING THE PROGRAM" << endl;
//				goto Zokir;
//				break;
//			default:
//				cout << "Sorry something went wrong" << endl;
//				goto Zokir;
//
//
//			}
//		}
//	}
//	//=========================================TASK-2=====================================
//	else if (x == 2)
//	{
//		Dollar f;
//		int c;
//		cout << "Please Input any number except 0" << endl;
//		cin >> c;
//		while (c != 0)
//		{
//			cout << "==============Please choose what you want to do================ " << endl;
//			cout << "[0]-Go back to the menu" << endl;
//			cout << "[1]-Input amount currency and the rate of currency" << endl;
//			cout << "[2]-Display currency " << endl;
//			cin >> c;
//			switch (c)
//			{
//			case 1:
//				cin >> f;
//				f.setRates();
//				break;
//			case 2:
//				cout << f;
//				break;
//			case 0:
//				cout << "THANKS GOODBYE" << endl;
//				goto Zokir;
//				break;
//			default:
//				cout << "Sorry something went wrong" << endl;
//				goto Zokir;
//
//
//			}
//
//
//		}
//
//		system("pause");
//		return 0;
//	}
//	else if(x==0)
//	{
//		cout << "GOODBYE" << endl;
//		system("pause");
//		return 0;
//	}
//	else
//	{
//		cout << "SORRY SOMETHING WENT WRONG" << endl;
//		system("pause");
//		return 0;
//
//	}
//}
