//������ �� �������� C++ ���α׷��� ������
//Chapter 01. C��� ����� C++ 1

//Chapter 01-1. printf�� scanf�� ����ϴ� ����� ���
/*#include <iostream>
int main(void) {
	int num = 20;
	std::cout << "Hello World" << std::endl;
	std::cout << "Hello "<< "World" << std::endl;
	std::cout << num << ' ' << 'A';
	std::cout << ' ' << 3.14<<std::endl;
	return 0;
}*/

/*#include <iostream>

int main(void) {
	int val1;
	std::cout << "ù ��° ���� �Է�: ";
	std::cin >> val1;
	int val2;
	std::cout << "�� ��° ���� �Է�: ";
	std::cin >> val2;
	int result = val1 + val2;
	std::cout << "���� ��� : " << result << std::endl;
	return 0;
}*/

/*#include<iostream>

int main(void) {
	int val1, val2;
	int result = 0;
	std::cout << "�� ���� ���ڸ� �Է� >> ";
	std::cin >> val1 >> val2;
	if (val1 < val2) {
		for (int i = val1 + 1; i < val2; i++)
			result += i;
	}
	else {
		for (int i = val2 + 1; i < val1; i++)
			result += i;
	}
	std::cout << "�� �� ������ ������ ��: " << result << std::endl;
	return 0;
}*/

/*#include<iostream>
int main(void) {
	char name[100];
	char lang[200];
	std::cout << "�̸� �Է��Ͻÿ� >> ";
	std::cin >> name;
	std::cout << "�����ϴ� ���α׷��� �� �Է��Ͻÿ� >> ";
	std::cin >> lang;
	std::cout << "�̸��� " << name << "�Դϴ�.\n";
	std::cout << "�����ϴ� ���� " << lang << "�Դϴ�." << std::endl;
	return 0;
}*/

//Chapter 01-2. �Լ��� �����ε�(Function Overloading)
/*#include<iostream>
int MyFunc(int num) {
	num++;
	return num;
}
int MyFunc(int a, int b) {
	return a + b;
}
int main(void)
{
	MyFunc(20);
	MyFunc(30, 40);
	return 0;
}*/

//Chapter 01-3. �Ű������� ����Ʈ ��
/*#include<iostream>
int Adder(int num1 = 1, int num2 = 2);

int main(void) {
	std::cout << Adder() << std::endl;
	std::cout << Adder(5) << std::endl;
	std::cout << Adder(3,5) << std::endl;
	return 0;
}
int Adder(int num1, int num2) {
	return num1 + num2;
}*/

//Chapter 01-4. �ζ���(inline) �Լ�
/*#include<iostream>
inline int SQUARE(int x) {
	return x * x;
}

int main(void) {
	std::cout << SQUARE(5) << std::endl;
	std::cout << SQUARE(12) << std::endl;
	return 0;
}*/

//Chapter 01-5. �̸������� ���� �Ұ�



/*#include <iostream>
using namespace std;
class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	double getArea();
};
double Circle::getArea() {
	return 3.14 * radius * radius;
}
int main() {
	Circle donut;
	Circle pizza(30);
	// ��ü �̸����� ��� ����
	cout << donut.getArea() << endl;
	// ��ü �����ͷ� ��� ����
	Circle* p;
	p = &donut;
	cout << p->getArea() << endl; // donut�� getArea() ȣ��
	cout << (*p).getArea() << endl; // donut�� getArea() ȣ��
	p = &pizza;
	cout << p->getArea() << endl; // pizza�� getArea() ȣ��
	cout << (*p).getArea() << endl; // pizza�� getArea() ȣ��
}*/

#include <iostream>
using namespace std;
class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	void setRadius(int r) { radius = r; }
	double getArea();
};
double Circle::getArea() {
	return 3.14 * radius * radius;
}
int main() {
	Circle circles[2][3];
	circles[0][0].setRadius(1);
	circles[0][1].setRadius(2);
	circles[0][2].setRadius(3);
	circles[1][0].setRadius(4);
	circles[1][1].setRadius(5);
	circles[1][2].setRadius(6);
	for (int i = 0; i < 2; i++) // �迭�� �� ���� ��ü�� ��� ����
		for (int j = 0; j < 3; j++) {
			cout << "Circle [" << i << "," << j << "]�� ������ ";
			cout << circles[i][j].getArea() << endl;
		}
}