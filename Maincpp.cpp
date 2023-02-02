#include<iostream>
using namespace std;
bool isKPeriodic(const string & str, int K) //Функция определение кратности в строке 
{
	
	for (int i = 0; i < str.length() - K; i++) //пробегаем циклом по строке 
	{
		if (str[i] == str[i + K]) // Если есть совпадение по символам 
		{
			cout << "Строка кратна  К" << std::endl;
			return true;
		}
	}
	std::cout << "Строка не кратна К" << std::endl; // Если нету совпадения  по символам
	return false;
	
}
int main()
{
	setlocale(LC_ALL, ""); // Для кириллицы в консоли. 
	string str; //Инициализируем строку
	int K; // Инициализируем  переменную с количеством повторяющихся символов
	cout << "Введите строку: " << endl;
	cin >> str; //Вводим строку в программу 
	cout << "Введите K для проверки строки:" << endl;
	cin >> K;// Вводи К
	isKPeriodic(str, K); //Применяем функцию и выводим ответ
	return 0;
}