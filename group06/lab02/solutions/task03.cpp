#include <iostream>
using namespace std;

/*������ 3: �������� ��������, ����� ���� �� ������������ ������ �� ���� 
� �������� � ������� �� ��������� ������ ��.*/

const double PI = 3.1415926535;

int main() {
	double radius = 0;
	cout << "Enter radius: ";
	cin >> radius;
	double area = PI * pow(radius, 2);
	cout << "Area: " << area << endl;
	system("pause");
	return 0;
}