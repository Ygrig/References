#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//���������� ������� arr ���������� ������� (begin;end)
template <typename T>
void fill_arr(T arr[], const int length, int begin , int end) {
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (end - begin) + begin;
}

//����� ������� arr �� �����
template <typename T>
void show_arr(T arr[], const int length) {
	cout << '[';
	for (int i = 0; i < length; i++)
		cout << arr[i] << ", ";
	cout << "\b\b]\n";
}


void my_swap(int num1, int num2) {
	int tmp = num1;
	num1 = num2;
	num2 = tmp;
}
void pswap(int *pn1, int *pn2) {
	int tmp = *pn1;
	*pn1 = *pn2;
	*pn2 = tmp;
}

void refswap(int &refn1, int &refn2) {
	int tmp = refn1;
	refn1 = refn2;
	refn2 = tmp;
}

int mx[10][2]; //10����� � 2 �������

int& func(int index) {
	return mx[index][1]; //��������� � 0, ������� 2� ������� ��� ������� 1
}

template <typename T>  //������� ���������� ������
T& max_arr(T arr[], const int length) {
	int i_max = 0;
	for (int i = 1; i < length; i++)
		i_max = arr[i] > arr[i_max] ? i : i_max;
	return arr[i_max];
}


int main() {
	setlocale(LC_ALL, "Russian");
	int n=10, m=20;
	
	//������ 1
	/*for (int i = 0; i < 10; i++) {
		cout << "��� �" << i + 1 << ": ";
		cin >> mx[i][0];
		func(i) = mx[i][0];
	}
	cout << "�������� ������: \n";
	for (int i = 0; i < 10; i++)
		cout << mx[i][0] << '\t' << func(i) << '\n';
	*/


	//������ 2.��������� ������������� �������� �������
	const int size = 5;
	int arr[size]{ 4,2,7,1,6 };
	cout << "����������� ������: \n";
	show_arr(arr, size);
	cout << "�������� = " << max_arr(arr, size) << endl;
	cout << "�������� ��������...\n�������� ������:\n ";
	max_arr(arr, size) = 0;
	show_arr(arr, size);
	

	//������ ��� ��������� �������
	/*cout << n << ' ' << m << '\n';
	// my_swap(n, m); // ������, �� �������� �� ������ � ���� ����������, �� �� ��������
	// pswap(&n, &m); //��������, �� �� ������ , ��.���������� ������ ���������� ��������
	refswap(n, m);
	cout << n << ' ' << m << '\n';
	*/

	//����������� ���������
	/*//int* pn=0; //������ ������
	//int* pn = NULL; //������ ������, ������ �� 0 ��� �����, � ��� ���������, ��� ��������� ������
	int* pn = nullptr; //������ ������

	pn = &n;

	if (pn == nullptr)
		cout << "��������� �� ���������������\n";
	else
	cout << *pn << '\n';
	*/
	
	int a = 10, b = 20, c = 30;
	//��������� �� ���������. ��������� ������������� ������ �������� �������� ����������, �� ������� ���������.
	/*int const* pa;
	pa = &a;
	cout << *pa << '\n';
	pa = &b;
	cout << *pa << '\n';
	*pa = 15;//������
	*/

	//����������� ���������
	/*const int* pb;
	pb = &b;
	cout << *pb << '\n';
	pb = &c;
	cout << *pb << '\n';
	*pb = 35; //������
	*/

	//����������� ��������� �� ���������. ������ ������ �������� ����������, � ����� ������ �������������� ���������!
	/*const int* const pc = &c; // ���� ��� ����� ���������������� �����
	cout << *pc << '\n';//30
	pc = &a; //������
	*pc = 50; //������
	*/

	//������ �� ����������
	/*int& refn = n; //������� ������, ��������� � ���������� n
	cout << " n = " << n << '\n';
	cout << " refn = " << refn << '\n';

	refn = 15;
	cout << "����� n = " << n << '\n';
	*/

	//




	return 0;
}