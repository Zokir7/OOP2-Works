//#include <iostream>
//#include <string>
//using namespace std;
////==================================FULLNAME=====================================
//class FullName
//{
//private:
//	string FirstName;
//	string MiddleName;
//	string LastName;
//public:
//	FullName()
//	{
//		FirstName = "Default first name";
//		MiddleName = "Default first name";
//		LastName = "Default first name";
//	}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
//	void setFirstName(string f)
//	{	cout << "Please Input the first name = " << endl;
//		cin >> f;
//		FirstName = f;
//	}
//	void getFirstName()
//	{
//		cout << "The FIRST name are = "<<FirstName << endl;
//	}
//	void setMiddleName(string m)
//	{
//		cout << "Please Input the Middle name = " << endl;
//		cin >> m;
//		MiddleName = m;
//	}
//	void getMiddleName()
//	{cout<<"Hello"<<endl;
//		cout << "The MIDDLE name are = " << MiddleName << endl;
//	}
//	void setLastName(string l)
//	{
//		cout << "Please Input the Last name = " << endl;
//		cin >> l;
//		LastName = l;
//	}
//	void getLastName()
//	{
//		cout << "The LAST name are = " << LastName << endl;
//	}
//};
////=================================PLAYER=============================
//class Player
//{private:
//	string Player_ID;
//	int Matches_Played;
//	int Goals_Scored ;
//	FullName f;
//public:
//	Player() :f()
//	{
//		Player_ID = "FFFF";
//		Matches_Played = 0;
//		Goals_Scored = 0;
//	}
//	
//	void SetPlayerName()
//	{
//		f.setFirstName("");
//		f.setMiddleName("");
//		f.setLastName("");
//		
//	}
//	void GetPlayerName()
//	{
//		f.getFirstName();
//		f.getMiddleName();
//		f.getLastName();
//	}
//	void setPlayer_ID(string p)
//	{
//		cout << "Please Input Player ID" << endl;
//		cin >> p;
//		Player_ID = p;
//	}
//	void getPlayer_ID()
//	{
//		cout << "Player ID is equal to = "<<Player_ID << endl;
//	}
//	void setMatches_Played(int m)
//	{
//		cout << "Please Input the number of matches played " << endl;
//		cin >> m;
//		Matches_Played = m;
//	}
//	void getMatches_Played()
//	{
//		cout << "The number of matches played are equal to = " << Matches_Played << endl;
//	}
//	void  setGoals_Scored(int G)
//	{
//		
//		cout << "Please Input the number of Goals Scored " << endl;
//		cin >> G;
//		Goals_Scored = G;
//		
//	}
//	Player& getGoals_Scored()
//	{
//		cout << "HEllo my friend" << endl;
//		
//		cout << "The number of goals scored are equal to = " << Goals_Scored << endl;	
//		return *this;
//	}
//
//	friend double IncGoals(Player &z);
//};
//double IncGoals(Player &z)
//{
//	cout << "===================Goals scored are increased===============" << endl;
//	z.Goals_Scored++;
//	cout << "The Goals scored are = " << z.Goals_Scored << endl;
//	
//	return z.Goals_Scored;
//}
//
////============================MAIN==========================
//int main()
//{
//	cout << "U2110301        Lab-3" << endl;
//	FullName *n;
//	n = new FullName;
//	Player *p,*p1;
//	p = new Player;
//	p1 = new Player;
//	int ch;
//	cout << "==========================Please input any number except 0=======================" << endl;
//	cin >> ch;
//
//	while(ch!=0)
//	{	
//		cout << "==============Please choose what you want to do================ " << endl;
//		cout << "[0]-Stop execution of a programm" << endl;
//		cout << "[1]-add player details" << endl;
//		cout << "[2]-display player details" << endl;
//		cout << "[3]-increase player goal scored" << endl;
//		cout << "[4]-delete player details" << endl;
//		
//		cin >> ch;
//		
//		switch (ch)
//	{
//	case 1:
//		p1->SetPlayerName();
//		p->setPlayer_ID("frriube");
//		p1->setGoals_Scored(0);
//		p->setMatches_Played(0);
//		break;
//	case 2:
//		p1->GetPlayerName();
//		p->getPlayer_ID();
//		p1->getGoals_Scored();
//		p->getMatches_Played();
//		break;
//	case 3:
//		IncGoals(*p1);
//		p1->getGoals_Scored();
//		break;
//	case 4:
//		delete p, n;
//		FullName* n;
//		n = new FullName;
//		Player* p, * p1;
//
//		p = new Player;
//		p1 = new Player;
//		cout << "(((((((((((((((((((((((((Player are deleted))))))))))))))))))))))))" << endl;
//		break;
//	case 0:
//		cout << "***************************Thanks Goodbye****************************" << endl;
//		system("pause");
//		break;
//	}
//}
//	system("pause");
//	return 0;
//}