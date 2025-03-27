//윤성우 저 열혈강의 C++ 프로그래밍 개정판
//Chapter 01. C언어 기반의 C++ 1

//Chapter 01-1. printf와 scanf를 대신하는 입출력 방식
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
	std::cout << "첫 번째 숫자 입력: ";
	std::cin >> val1;
	int val2;
	std::cout << "두 번째 숫자 입력: ";
	std::cin >> val2;
	int result = val1 + val2;
	std::cout << "덧셈 결과 : " << result << std::endl;
	return 0;
}*/

/*#include<iostream>

int main(void) {
	int val1, val2;
	int result = 0;
	std::cout << "두 개의 숫자를 입력 >> ";
	std::cin >> val1 >> val2;
	if (val1 < val2) {
		for (int i = val1 + 1; i < val2; i++)
			result += i;
	}
	else {
		for (int i = val2 + 1; i < val1; i++)
			result += i;
	}
	std::cout << "두 수 사이의 정수의 합: " << result << std::endl;
	return 0;
}*/

/*#include<iostream>
int main(void) {
	char name[100];
	char lang[200];
	std::cout << "이름 입력하시오 >> ";
	std::cin >> name;
	std::cout << "좋아하는 프로그래밍 언어를 입력하시오 >> ";
	std::cin >> lang;
	std::cout << "이름은 " << name << "입니다.\n";
	std::cout << "좋아하는 언어는 " << lang << "입니다." << std::endl;
	return 0;
}*/

//Chapter 01-2. 함수의 오버로딩(Function Overloading)
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

//Chapter 01-3. 매개변수의 디폴트 값
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

//Chapter 01-4. 인라인(inline) 함수
/*#include<iostream>
inline int SQUARE(int x) {
	return x * x;
}

int main(void) {
	std::cout << SQUARE(5) << std::endl;
	std::cout << SQUARE(12) << std::endl;
	return 0;
}*/

//Chapter 01-5. 이름공간에 대한 소개



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
	// 객체 이름으로 멤버 접근
	cout << donut.getArea() << endl;
	// 객체 포인터로 멤버 접근
	Circle* p;
	p = &donut;
	cout << p->getArea() << endl; // donut의 getArea() 호출
	cout << (*p).getArea() << endl; // donut의 getArea() 호출
	p = &pizza;
	cout << p->getArea() << endl; // pizza의 getArea() 호출
	cout << (*p).getArea() << endl; // pizza의 getArea() 호출
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
	for (int i = 0; i < 2; i++) // 배열의 각 원소 객체의 멤버 접근
		for (int j = 0; j < 3; j++) {
			cout << "Circle [" << i << "," << j << "]의 면적은 ";
			cout << circles[i][j].getArea() << endl;
		}
}
