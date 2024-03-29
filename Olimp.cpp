#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Во время проведения олимпиады каждый из участников получил свой идентификационный номер – натуральное число.
// Необходимо отсортировать список участников олимпиады по количеству набранных ими баллов.
//Входные данные
//На первой строке дано число N(1 ≤ N ≤ 1000) – количество участников.На каждой следующей строке даны идентификационный
//номер и набранное число баллов соответствующего участника.Все числа во входном файле не превышают 105.
//Выходные данные
//В выходной файл выведите исходный список в порядке убывания баллов. Если у некоторых участников одинаковые баллы, 
//то их между собой нужно упорядочить в порядке возрастания идентификационного номера.

bool comp(pair <int, int> a, pair <int, int> b) {
	if (a.second != b.second) {
		return a.second < b.second;
	}
	else {
		return a.first > b.first;
	}
}
int main()
{
	setlocale(LC_ALL, "ru");
	int Number;
	cin >> Number;
	vector < pair <int, int> > Olimp;
	int id, ball;
	for (int i = 0; i < Number; i++) {
		cin >> id >> ball;
		Olimp.push_back(make_pair(id, ball)); //добавляем пару в вектор при этом ее создавая
	}
	cout << "Массив" << endl;
	for (auto it = Olimp.rbegin(); it != Olimp.rend(); it++) {
		cout << (*it).first << " " << (*it).second;
		cout << endl;
	}
	cout << "Сортировка" << endl;
	sort(Olimp.begin(), Olimp.end(), comp);
	for (auto it = Olimp.rbegin(); it != Olimp.rend(); it++) {
		cout << (*it).first << " " << (*it).second;
		cout << endl;
	}
	return 0;
}