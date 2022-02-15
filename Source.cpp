// ������������ ������ ������� C++
#include <iostream>

using namespace std;

/*
inline int func(int num1, int num2, int num3, int num4, int num5 = 5) {
	funcNumb = '1';
	cout << "����� �����.\n";
	return (num1 > num2 ? num1 : num2);
}
double func(double num1, double num2) { 
	funcNumb = '2';
	cout << "������� �����.\n";
	return num1 > num2 ? num1 : num2;
}
bool func(int num1, int num2, double num3) {
	funcNumb = '3';
	if (num1 > num2 && num1 > num3)
		return true;
	return false;
}

char funcNumb;
*/

template <typename T1, typename T2, typename T3> T1 maxFunc(T1 num1, T2 num2, T3 num3) {
	T3 res;
	return num1 > num2 ? num1 : num2;
}
float maxFunc(float num1, float num2) { // �������� ��������� (������ ��������� �������), ����� ������� ���� float
	return num1 > num2 ? num1 : num2;
}
int maxFunc(int num1, int num2) { // �������� ��������� (������ ��������� �������), ����� ������� ���� int
	return num1 > num2 ? num1 : num2;
}

bool maxFunc(bool num1, bool num2) { // �������� ��������� (������ ��������� �������), ����� ������� ���� bool
	return num1 > num2 ? num1 : num2;
}

int main() {
	setlocale(LC_ALL, "Russian");
	float n, m;
	cin >> n >> m;

	cout << maxFunc(n, m) << endl;
	cout << "�����!";

	/*
	cin >> n >> m;
	cout << func(n, m, n) << endl; // cout << (n > m ? n : m) << endl - ����� ����������� ��� ����� ��������� �������.
	cout << func(5.5, 9.5) << endl; // ����� 2 ���������� �������
	cout << n * n * n << endl; // ��� ������������ �������. ������� n � ����������� � func(n)
	cout << 5 * 5 * 5 << endl;
	cout << func(6, 4, 3) << endl; // ���������� 3-�� ��������� ������������� �������.
	if (funcNumb); */

	return 0;
}


