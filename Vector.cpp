#include <iostream>
using namespace std;

class Vector {
public:
	int top;
	int* array;
	Vector(int n);
	void push_back(int value);
	void pop_back();
	void size();
};

Vector::Vector(int n) {
	int top = 0;

	cout << "배열의 크기(n): ";
	cin >> n; // 배열의 크기를 입력받을 변수

	array = new int[n]; // 입력받은 크기만큼 배열을 동적 생성
	
	delete[] array; // 배열 할당 해제를 위해 배열 버전 delete 연산자 사용
}

void Vector::push_back(int value) {
	int n = 10;

	if (top == n)
	{
		cout << "배열이 다 찼습니다." << endl;
	}
	else if (top <= n)
	{
		array[top] = value;
		top++;
	}
};

void Vector::pop_back()
{
	int n;
	if (top == 0)
	{
		cout << "배열이 다 찼습니다." << endl;
	}

	else
	{
		array[top - 1];
		top--;
	}
};

void Vector::size()
{
	cout << "배열의 개수 = " << top << '\n';
};

int main(void)
{
	int* array;
	Vector v1(100);

	cout << "배열에 1,2,3,4,5 삽입" << '\n';
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(5);
	v1.size();

	cout << "배열의 마지막 요소부터 삭제" << '\n';
	v1.pop_back();
	v1.pop_back();
	v1.size();

	cout << "배열에 4 삽입" << '\n';
	v1.push_back(4);
	v1.size();

	cout << "배열의 마지막 요소부터 삭제" << '\n';
	v1.pop_back();
	v1.size();

	return 0;
}