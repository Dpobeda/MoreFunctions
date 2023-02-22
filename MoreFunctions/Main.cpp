#include <iostream>

int NUM;
const double PI = 3.1416;
int ARR[3];

void num_x2() {
	NUM *= 2;
}
void use_static() {
	static int a = 1;
	std::cout << "a = " << a << '\n';
	a++;
}
int power(int num1, int num2 = 2) {
	int tmp = 1;
	for (int i = 1; i <= num2; i++) 
		tmp *= num1;
		return tmp;
}
inline int absolute(int num) {
	return (num < 0 ? -num : num);
}
inline int sum_arr(int arr[], const int length){
	int sum = 0;
	for (int i = 0; i < length; i++)
		sum += arr[i];
	return sum;

}
int max(int num1, int num2) {
	std::cout << "INT\n";
	return num1 > num2 ? num1 : num2;
}
double max(double num1, double num2) {
	std::cout << "Doble\n";
	return num1 > num2 ? num1 : num2;
}
int max(int num1, int num2, int num3) {
	std::cout << "Thee int\n";
	return num1 > (num2 > num3 ? num2 : num3) ? num1 : (num2 > num3 ? num2 : num3);
}

template <typename T>
T absol(T num) {
	return num < 0 ? -num : num;
}

int main(){
	setlocale(LC_ALL, "Russian");
	int n;

	std::cout << absol(1) << '\n';
	std::cout << absol(-1.1f) << '\n';

	// Перегруженная функция.
	/*std::cout << max(7, 15) << '\n'; // 15.
	std::cout << max(5.8, 5.2 ) << '\n'; // 5. 
	std::cout << max(5, 17, 10) << '\n'; // 17.*/
	
	// Встраиваимые функции.
	/*std::cout << "Введите число -> ";
	std::cin >> n;
	std::cout << '|' << n << "| = " << absolute(n) << std::endl;

	int mass[3]{ 10, 15, 7 };
	std::cout << sum_arr(mass, 3) << '\n';*/

	// Области видимости данных.
	/*for (int i = 0; i < 5; i++)
		std::cout << '$';
	// i = 0; // Ошибка! Переменная i недоступна за пределами цикла.
	
	std::cout << std::endl;
	std::cout << "NUM = " << NUM << std::endl;
	NUM = 33;
	num_x2();
	std::cout << "NUM = " << NUM << std::endl;
	

	use_static();
	for (int i = 0; i < 9; i++)
		use_static();
	// a = 5; // Ошибка!!!!
	std::cout << std::endl; */
	
	/*std::cout << "4^3 = " << power(4, 3) << '\n';
	std::cout << "5^2 = " << power(5) << '\n';*/
	
	// Информация.
	/* Перегруженная функция - это функция, обладающая несколькими различными реализациями, отличаяющимися между собой наборами параметров.
	 Любая локальная переменная, может быть использована только в рамках тех фигурных скобочек, в которых она была объявлена.*/

	return 0;
} 