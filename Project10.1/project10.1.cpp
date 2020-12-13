#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Coordinate
{
	unsigned pos;
	unsigned row;
};
void PrintTXT(char* fname) // ��������� ����� �� �����
{
	ifstream fin("t.txt");
	string s; // ���������� �����
	while (getline(fin, s)) // ���� ����� ��������� �����
	{
		cout << s << endl; // �������� ���� �� �����
	}
	cout << endl;
}
int find_index_in_row(const string s,int* count)
{
	size_t pos = 0;
	while ((pos = s.find('.', pos)) != -1)
	{
		(*count)++;
		if (*count == 3)
			return pos;
		pos++;
	}
	return 0;
}
Coordinate ProcessTXT1(char* fname) 
{
	Coordinate result;
	int row = 0;
	int pos = -1;
	int count = 0;
	ifstream fin("t.txt"); // ������� ���� ��� ����������
	string s; // ���������� �����
	while (getline(fin, s) || count < 3) 
	{ 
		row++;
		pos = find_index_in_row(s, &count);

	}
	if (count == 3)
	{
		result.pos = pos;
		result.row = row;
	}
	else
	{
		result.pos = 0;
		result.row = 0;
	}
	return result;
}

int main()
{
	// text files
	char fname[100]; // ��'� ������� �����
	PrintTXT(fname); // ������ ���� ������� ����� �� �����
	Coordinate result = ProcessTXT1(fname);
	cout << "row" << result.row << endl;
	cout << "pos" << result.pos << endl;
	return 0;
}