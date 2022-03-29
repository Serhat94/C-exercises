// EX1:
/*Write a C++ program that computes the totaland average of five numbers between 10 and 100, ::1:1
which should be obtained from the user.*/
// Solution 
/*
#include <iostream>
using namespace std;
	int main()
	{
		int a, b, c, d, e;
		cout << "Please enter the numbers: " << endl;
		cin >> a >> b >> c >> d >> e;
		if (10 < a && a < 100 && 10 < b && b < 100 && 10 < c && c < 100 && 10 < d && d < 100 && 10 < e && e < 100) {
			cout << "Toplamları:" << a + b + c + d + e << endl;
			cout << "Ortalaması: " << (a + b + c + d + e) / 2 << endl;
		}
		else {
			cout << "Please write number between 10 and 100" << endl;
		}
		
		return 0;
}
*/
// Ex 2: Ask 3 users to enter their names-surnames and find the length of each entry by also checking if any numbers are entered mistakenly.
/*
#include <iostream>
using namespace std;
int main() {
	string sys_user_1 = "serhat_saygi";
	string sys_user_2 = "berkay_tasasiz";
	string sys_user_3 = "naci_baytu";
	string user_1;
	string user_2;
	string user_3;

	cout << "Please enter the user 1 :" << endl;
	cin >> user_1;
	if (user_1 == sys_user_1) {
		cout << "Welcome Serhat" << endl;
		cout << "Name length: " << sys_user_1.length() << endl;
	}
	else {
		cout << "Wrong User" << endl;
	}
	cout << "Please enter the user 2 :" << endl;
	cin >> user_2;
	if (user_2 == sys_user_2) {
		cout << "Welcome Berkay" << endl;
		cout << "Name length: " << sys_user_2.length() << endl;
	}
	else {
		cout << "Wrong User" << endl;
	}
	cout << "Please enter the user 3 :" << endl;
	cin >> user_3;
	if (user_3 == sys_user_3) {
		cout << "Welcome Naci" << endl;
		cout << "Name length: " << sys_user_3.length() << endl;
	}
	else {
		cout << "Wrong User" << endl;
	}

	return 0;
} 
*/
// Ex 3: Write a program that converts Celsius to Fahrenheit.
/*
#include <iostream>
using namespace std;
int main() {
	int celsius, fahrenheit;
	cout << "Please Wrtie Celsius" << endl;
	cin>> celsius;
	cout << "Fahrenheit: " << (celsius * 9 / 5) + 32 << endl;

	return 0;
}
*/
//Ex 4: A professor generates letter grades using the Table below,Given a numeric grade, print the letter.
/*
#include <iostream>
using namespace std;
int main() {
	int ratio;
	cout << "Please Write Correct Ratio:" << endl;
	cin >> ratio;
	if (91 < ratio && ratio <= 100) {
		cout << "Student Note:A " << endl;
	}
	else if (81 < ratio && ratio <= 90) {
		cout << "Student Note:B " << endl;
	}
	else if (71 < ratio && ratio <= 80) {
		cout << "Student Note:C " << endl;
	}
	else if (61 < ratio && ratio <= 70) {
		cout << "Student Note:D " << endl;
	}
	else if (0 < ratio && ratio <= 60) {
		cout << "Student Note:F " << endl;
	}
	return 0;
}
*/

//Ex 5: Modify the previous program to print out a + or - after the letter grade based on the last digit of the score.The modifiers are listed in Table below :
/*
#include <iostream>
using namespace std;
int main() {
	int ratio;
	cout << "Please Write Correct Ratio:" << endl;
	cin >> ratio;
	if (91 < ratio && ratio <= 100) {
		if ((ratio % 10) == 0 || (ratio % 10) == 9 || (ratio % 10) == 8) {
			cout << "Student Note:A+ " << endl;
		}
		else if (4 <= (ratio % 10) && (ratio % 10) <= 7){
			cout << "Student Note:A" << endl;
		}
		else {
			cout << "Student Note A-" << endl;
		}
	}
	else if (81 < ratio && ratio <= 90) {
		if ((ratio % 10) == 0 || (ratio % 10) == 9 || (ratio % 10) == 8) {
			cout << "Student Note:B+ " << endl;
		}
		else if (4 <= (ratio % 10) && (ratio % 10) <= 7) {
			cout << "Student Note:B" << endl;
		}
		else {
			cout << "Student Note B-" << endl;
		}
	}
	else if (71 < ratio && ratio <= 80) {
		if ((ratio % 10) == 0 || (ratio % 10) == 9 || (ratio % 10) == 8) {
			cout << "Student Note:C+ " << endl;
		}
		else if (4 <= (ratio % 10) && (ratio % 10) <= 7) {
			cout << "Student Note:C" << endl;
		}
		else {
			cout << "Student Note C-" << endl;
		}	
	}
	else if (61 < ratio && ratio <= 70) {
		if ((ratio % 10) == 0 || (ratio % 10) == 9 || (ratio % 10) == 8) {
			cout << "Student Note:D+ " << endl;
		}
		else if (4 <= (ratio % 10) && (ratio % 10) <= 7) {
			cout << "Student Note:D" << endl;
		}
		else {
			cout << "Student Note D-" << endl;
		}
	}
	else if (0 < ratio && ratio <= 60) {

		cout << "Student Note:F " << endl;
	}
	return 0;
}
*/
//Ex 6: A leap year is any year divisible by 4 unless it is divisible by 100, but not 400. Write a program to tell whether a year is a leap year.
/*
#include <iostream>
using namespace std;
int main() {
	int year;
	cout << "Please wtite Year: " << endl;
	cin >> year;
	if (year % 100 == 0 && year % 400 == 0) {
		cout << year << "Artık Yıldır" << endl;
	}
	else {
		cout << year << "Artık Yıl Değil......" << endl;
	}

	return 0;
}
*/
//Ex 8:Write a program to average n numbers.
/*
#include <iostream>
using namespace std;
int main() {
	int i, n, değer ;
	float sum = 0;
	float average = 0;

	cout << "How Many numbers: " << endl;
	cin >> n;
	for (i = 0; i < n; i++) {
		cout << "Enter number " << i + 1 << ": " << endl;
		cin >> değer;
		sum += değer;
	}
	average = sum / n;
	cout << "Mean: " << average << endl;

	return 0;
}
*/
//Ex 9:Write a program to print out the multiplication table
/*
#include <iostream>
using namespace std;
int main() {
	for (int i = 1; i < 11; i++) {
	for (int j = 1; j < 11; j++) {
		cout << i << "X" << j << "=" << i * j << '\n';
			}
	}


	return 0;
}
*/
//Ex10: Write a program that reads a character and prints out whether it is a vowel or a consonant.
/*
#include <iostream>
using namespace std;
int main() {
	char ch;
	cout << "Please write character: "<<endl;
	cin >> ch;
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'|| ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
		cout << ch << " is a vowel" << endl;
	}
	else {
		cout << ch << " is constant" << endl;
	}
	return 0;
}
*/
//Ex11:Write a program that converts numbers to words. Example: 895 results in ''eight nine five."
/*
#include <iostream>
using namespace std;
int main() {
	int sayı,d;
	cout << "Please Write number: " << endl;
	cin >> sayı;
	switch (sayı) {
	case 0:
		cout << "Sifir" << endl;
		break;
	case 1:
		cout << "Bir" << endl;
		break;
	case 2:
		cout << "İki" << endl;
		break;
	}

	return 0;
}
*/
//Ex12: Paralel Resistor Quesions
/*
#include <iostream>
using namespace std;
int main() {
	double resistor,n;
	double sum = 0;
	double total = 0;
	cout << "How many Resistor: " << endl;
	cin >> n;
	for (double i = 0; i < n; i++) {
		cout << "Resistor " << i + 1 << ": " << endl;
		cin >> resistor;
		sum += (1 / resistor);
	}
	total = (1/ sum);

	cout << "Total resistor: " << total << endl;
	return 0;
}
*/
//Ex:13: Fİbonacci Dizisi
/*
#include<iostream>
using namespace std;
int main()
{
	int i, no, first = 0, second = 1, next;
	first = 1;
	second = 1;
	cout << "How Many numbers in fibonacci: ";
	cin >> no;
	cout << "Fibonacci serisi: \n";
	for (i = 0; i < no; i++){
		cout << "\n" << first;
		next = first + second;
		first = second;
		second = next;
	}
	return 0;
}
*/
//Ex:Write a program to tell whether a number is prime.
/*
#include <iostream>
using namespace std;
int main() {
	int a;
	int state = 1;
	cout << "Please write a number: " << endl;
	cin >> a;
	for (int i = 2; i < a; i++) {
		if (a % i == 0) {
			cout << a << " is not a prime number " << endl;
			state = 0;
			break;
		}
	}
	if(state){
			cout << a << " is a prime number" << endl;
	}
	return 0;
}
*/