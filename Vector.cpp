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

	cout << "�迭�� ũ��(n): ";
	cin >> n; // �迭�� ũ�⸦ �Է¹��� ����

	array = new int[n]; // �Է¹��� ũ�⸸ŭ �迭�� ���� ����
	
	delete[] array; // �迭 �Ҵ� ������ ���� �迭 ���� delete ������ ���
}

void Vector::push_back(int value) {
	int n = 10;

	if (top == n)
	{
		cout << "�迭�� �� á���ϴ�." << endl;
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
		cout << "�迭�� �� á���ϴ�." << endl;
	}

	else
	{
		array[top - 1];
		top--;
	}
};

void Vector::size()
{
	cout << "�迭�� ���� = " << top << '\n';
};

int main(void)
{
	int* array;
	Vector v1(100);

	cout << "�迭�� 1,2,3,4,5 ����" << '\n';
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(5);
	v1.size();

	cout << "�迭�� ������ ��Һ��� ����" << '\n';
	v1.pop_back();
	v1.pop_back();
	v1.size();

	cout << "�迭�� 4 ����" << '\n';
	v1.push_back(4);
	v1.size();

	cout << "�迭�� ������ ��Һ��� ����" << '\n';
	v1.pop_back();
	v1.size();

	return 0;
}