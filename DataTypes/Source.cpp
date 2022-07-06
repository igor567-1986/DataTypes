//DataTypes
#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;;

//#define INTEGRAL_TYPES
//#define FLOATING_TYPES
//#define DECLARATION_OF_VARIABLES
//#define CONSTANTS

void main()
{
	setlocale(LC_ALL, "Russian");
	//cout << true << endl;
	//cout << false << endl;

#ifdef INTEGRAL_TYPES
	cout << sizeof(int) << endl;
	INT_MIN;	//����������� �������� ��� int
	INT_MAX;	//������������ �������� ��� int
	UINT_MAX;	//����������� �������� ��� unsigned int
	cout << "unsigned int: " << 0 << " ... " << UINT_MAX << endl;
	cout << "  signed int: " << INT_MIN << " ... " << INT_MAX << endl;
#endif // INTEGRAL_TYPES

#ifdef FLOATING_TYPES
	//cout << sizeof(float) << endl;
//cout << FLT_MIN << " ... " << FLT_MAX << endl;
	cout << sizeof(double) << endl;
	cout << DBL_MIN << " ... " << DBL_MAX << endl;
#endif // FLOATING_TYPES


#ifdef DECLARATION_OF_VARIABLES
	//������������� - ��� ���.
//identifier - ��� ���.
//cout << var << endl;

//�������������������
//������������� - ��� ���������� ���������� ��������.

//double Price;	//������ ���������� ����������
//double Price = 0;	//������������� ��� ���������� ����������
//cout << Price << endl;
//int Count;	//������ ���������� ����������
//Count = 0;	//������������� ����� ����������
//cout << Count << endl;

	double price_of_coffe;
	int number_of_cups;
	cout << "������� ��������� ����� ����: "; cin >> price_of_coffe;//������������� ������ � ����������
	cout << "������� ���������� �����: "; cin >> number_of_cups;


	//				type name;
	int t;
	double price;
	char sign;
#endif // DECLARATION_OF_VARIABLES

	int price_of_coffe;//snake_case_style
	int CammelCaseStyle;//������� �������
	int cammelCaseStyle;//��������� �������
	//��������� ��� �������� PascalCaseStyle

#ifdef CONSTANTS
	int speed = 0;
	const int MAX_SPEED = 250;
	speed = 50;
	//max_speed = 280;

	1024;	//�������� ��������� ���� int
	1024.;	//�������� ��������� ���� double
	.1024;	//�������� ��������� ���� double
	.1024f;	//�������� ��������� ���� float
	cout << sizeof(1024) << endl;
	cout << typeid(1024U).name() << endl;

	cout << typeid('@').name() << endl;
	'@';//���������� ���������, ��� ��������� ���� char.
	cout << sizeof('@') << endl;
	cout << sizeof("@") << endl;
	cout << sizeof("Hello") << endl;
	//'Hello';  
#endif // CONSTANTS

	int a = 2, b = 3;
	cout << a << "\t" << b << endl;
	/*int c = a;
	a = b;
	b = c;*/
	a = a + b;
	b = a - b;
	a = a - b;
	cout << a << "\t" << b << endl;
}

/*
---------------------------
1. ABC...Zabc...z0123...9_;
2.
3.
4.
---------------------------
*/