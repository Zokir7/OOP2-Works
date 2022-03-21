#include<iostream>
#include<string>
using namespace std;
class StudenT
{
private:
	string student_ID;
	string student_name;
	double OOP2_scores;
	double math_scores;
	double english_scores;
public:
	void setStudent_ID(string)
	{
		cout << "enter ID of the student "; cin >> student_ID;
	}
	void getStudent_ID()
	{
		cout << "ID of the student is " << student_ID;
	}
	void setStudent_name(string)
	{
		cout << "enter name of the student "; cin >> student_name;
	}
	void getStudent_name()
	{
		cout << "name of the student is " << student_name;
	}
	void setOOP2_scores(double)
	{
		cout << "enter scores from OOP2 "; cin >> OOP2_scores;

	}
	void getOOP2_scores()
	{
		cout << "score from OOP2 is " << OOP2_scores;
	}
	void setmath_scores(double)
	{
		cout << "enter scores from math "; cin >> math_scores;
	}
	void getmath_scores()
	{
		cout << "scores from math is " << math_scores;

	}
	void setEng_scores(double)
	{
		cout << "enter english scores "; cin >> english_scores;
	}
	void getEng_scores()
	{
		cout << "english score is " << english_scores;
	}
	void getAverage_score()
	{
		double average;
		average = (OOP2_scores + math_scores + english_scores) / 3;
		cout << "average score is " << average;
	}
	void getTotal_score()
	{
		double total;
		total = OOP2_scores + math_scores + english_scores;
		cout << "total score is " << total;
	}
}; 
