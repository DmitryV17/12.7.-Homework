#include<iostream>
using namespace std;
bool isKPeriodic(const string & str, int K) //������� ����������� ��������� � ������ 
{
	
	for (int i = 0; i < str.length() - K; i++) //��������� ������ �� ������ 
	{
		if (str[i] == str[i + K]) // ���� ���� ���������� �� �������� 
		{
			cout << "������ ������  �" << std::endl;
			return true;
		}
	}
	std::cout << "������ �� ������ �" << std::endl; // ���� ���� ����������  �� ��������
	return false;
	
}
int main()
{
	setlocale(LC_ALL, ""); // ��� ��������� � �������. 
	string str; //�������������� ������
	int K; // ��������������  ���������� � ����������� ������������� ��������
	cout << "������� ������: " << endl;
	cin >> str; //������ ������ � ��������� 
	cout << "������� K ��� �������� ������:" << endl;
	cin >> K;// ����� �
	isKPeriodic(str, K); //��������� ������� � ������� �����
	return 0;
}