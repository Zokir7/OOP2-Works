//#include<iostream>
//#include <string>
//using namespace std;
//int p;
//class Article
//{
//private:
//	long article;
//	string Article_name;
//	double Sales_price;
//public:
//	Article()
//	{
//		article = 0;
//		Article_name = "";
//		Sales_price = 0;
//	}
//	Article(long article,const string Article_name,double Sales_price)
//	{
//		this->Article_name = Article_name;
//		this->Sales_price = Sales_price;
//		
//		if(this->article<0)
//		{
//			this->article = 0.0;
//		}
//		else
//		{
//			this->article = article;
//		}
//	}
//	void print()
//	{
//		cout << "Article = " << article << endl;
//		cout << "Aricle name = "<<Article_name << endl;
//		cout << "Sales = "<<Sales_price << endl;
//
//	}
//
//
//	
//	friend void operator>>(istream& b, Article& g);
//};
//void operator>>(istream& b, Article& g)
//{
//	cout << "Please Input the article " << endl;
//	b >> g.article;
//	cout << "Please Input the article name  " << endl;
//	b >> g.Article_name;
//	cout << "Please Input the Sales price of the article" << endl;
//	b >> g.Sales_price;
//
//}
//int main()
//{
//	Article k,k1(1,"d",1.2);
//	cin >> k1;
//	k1.print();
//	
//
//
//
//}