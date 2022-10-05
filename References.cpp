#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//Заполнение массива arr случайными числами (begin;end)
template <typename T>
void fill_arr(T arr[], const int length, int begin , int end) {
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (end - begin) + begin;
}

//Вывод массива arr на экран
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

int mx[10][2]; //10рядов и 2 колонки

int& func(int index) {
	return mx[index][1]; //нумерация с 0, поэтому 2й столбец под номером 1
}

template <typename T>  //функция возвращает ссылку
T& max_arr(T arr[], const int length) {
	int i_max = 0;
	for (int i = 1; i < length; i++)
		i_max = arr[i] > arr[i_max] ? i : i_max;
	return arr[i_max];
}


int main() {
	setlocale(LC_ALL, "Russian");
	int n=10, m=20;
	
	//Задача 1
	/*for (int i = 0; i < 10; i++) {
		cout << "Ряд №" << i + 1 << ": ";
		cin >> mx[i][0];
		func(i) = mx[i][0];
	}
	cout << "Итоговый массив: \n";
	for (int i = 0; i < 10; i++)
		cout << mx[i][0] << '\t' << func(i) << '\n';
	*/


	//Задача 2.Обнуление максимального элемента массива
	const int size = 5;
	int arr[size]{ 4,2,7,1,6 };
	cout << "Изначальный массив: \n";
	show_arr(arr, size);
	cout << "Максимум = " << max_arr(arr, size) << endl;
	cout << "Обнуляем максимум...\nИтоговый массив:\n ";
	max_arr(arr, size) = 0;
	show_arr(arr, size);
	

	//Ссылки как параметры функций
	/*cout << n << ' ' << m << '\n';
	// my_swap(n, m); // удобно, тк передает не адреса а сами переменные, но не работает
	// pswap(&n, &m); //работает, но не удобно , тк.передавать адреса переменных неудобно
	refswap(n, m);
	cout << n << ' ' << m << '\n';
	*/

	//Нейтральный указатель
	/*//int* pn=0; //первый способ
	//int* pn = NULL; //второй способ, значит не 0 как число, а как индикатор, что указатель ПУСТОЙ
	int* pn = nullptr; //третий способ

	pn = &n;

	if (pn == nullptr)
		cout << "Указатель не инициализирован\n";
	else
	cout << *pn << '\n';
	*/
	
	int a = 10, b = 20, c = 30;
	//Указатель на константу. Используя разыменование нельзя поменять значение переменной, на которую указывает.
	/*int const* pa;
	pa = &a;
	cout << *pa << '\n';
	pa = &b;
	cout << *pa << '\n';
	*pa = 15;//ошибка
	*/

	//Константный указатель
	/*const int* pb;
	pb = &b;
	cout << *pb << '\n';
	pb = &c;
	cout << *pb << '\n';
	*pb = 35; //ошибка
	*/

	//Константный указатель на константу. Нельзя менять значение переменной, а также нельзя перенаправлять указатель!
	/*const int* const pc = &c; // этот тип нужно инициализировать сразу
	cout << *pc << '\n';//30
	pc = &a; //ошибка
	*pc = 50; //ошибка
	*/

	//Ссылка на переменную
	/*int& refn = n; //создаем ссылку, связанную с переменной n
	cout << " n = " << n << '\n';
	cout << " refn = " << refn << '\n';

	refn = 15;
	cout << "Новая n = " << n << '\n';
	*/

	//




	return 0;
}