#include<iostream>
#include<string>
#include<windows.h>
#include<fstream>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;
struct Student 
{
	string f{};
	string i{};
	string o{};
	char pol{};
	int voz{};
	double rost{};
	int predm{ 4 };
};
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	ofstream fout;
	ifstream fin;
	fin.open("student.exe");
	Student Ivan = { "Романова", "Мадина", "" };
	fin.close();
	int Column = 10;
	for (size_t i = Column - 6; i < student.size(); i= i + Column)
	{
		if (student[i] != "0") {
			Temp_vozr.push_back(stoi(student[i].c_str()));
		}
	}
	vector <int> vozr;
	Temp_vozr.swap(vozr);
	float SUMMA = 0;
	for (size_t i = 0; i < vozr.size(); i++)
	{
		SUMMA += vozr[i];
	}
	cout << SUMMA / a << endl;
}