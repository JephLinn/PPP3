// PPP3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;

int main()
{
	//// 2.1 Input
	//cout << "Please enter your first name (followed by 'enter'):\n";
	//string first_name; //first_name is a variable of type string
	//cin >> first_name; //read characters into first_name
	//cout << "Hello, " << first_name << "!\n";

	// 2.3 Input and Type
	//cout << "Please enter your first name and age\n";
	//string first_name = "???"; //string variable ("???" indicates "don't know the name")
	//double age = -1; //integer variable (-1 means "don't know the age")
	//cin >> first_name >> age; //read a string and an integer
	//cout << "Hello, " << first_name << " (age " << age * 12 << " months old)\n";

	//2.4 Operators and operators
	/*cout << "Please enter a floating-point number: ";
	double n = 0;
	cin >> n;
	cout << "n == " << n
		<< "\nn+1 == " << n + 1
		<< "\nthree times n == " << 3 * n
		<< "\ntwice n == " << n + n
		<< "\nn squared == " << n * n
		<< "\nhalf of n == " << n / 2
		<< "\nsquare root of n == " << sqrt(n)
		<< '\n';*/

	//cout << "Please enter two names\n";
	//string first;
	//string second;
	//cin >> first >> second; // read two strings

	//	if (first == second)
	//		cout << "That's the same name twice\n";
	//	if (first < second)
	//		cout << first << " is alphabetically before " << second << '\n';
	//	if (first > second)
	//		cout << first << " is alphabetically after " << second << '\n';

	// 2.5.1-2.5.3 Repeating words
	//int number_of_words = 0;
	//string previous;  // previous word; initialized to ""
	//string current;   // current word
	//while (cin >> current) { // read a stream of words
	//	number_of_words++;
	//	if (previous == current)
	//		cout << "word number " << number_of_words << " Repeated word : " << current << '\n';
	//	previous = current;
	//}

	//2.6 Names
	//string s = "Goodbye, cruel world!\n";
	//cout << s << "\n";

	// 2.8 gitType Safety
	//double x; //we "forgot" to initialize: the value of x is undefined
	//double y = x; // the value of y is undefined
	//double z = x + 2.0; //the meaning of + and the value of z is undefined

	//double d = 0;
	//while (cin >> d) { //repeat the statements below as long as we type in numbers
	//	int i = d;  //try to squeeze a floating-point value into an integer value
	//	char c = i; //try to squeeze an integer value into a character value
	//	cout << "d == " << d //the original double
	//		<< ", i == " << i  // the double converted to int
	//		<< ", c == " << c  //int value of char
	//		<< "char(" << c << ")\n";	//the char

	//}

	// Drill-2
	
	/*cout << "Enter the name of the person you want to write to:\n";
	string first_name;
	cin >> first_name;
	cout << "Dear " << first_name << ",\n"
			<< "\tHow are you? I am fine. I miss you.\n"
			<< "I hope you are doing well in school.\n"
			<< "What is your favorite subject in school?\n";
	cout << "Please enter the name of another friend:\n";
	string friend_name;
	cin >> friend_name;
	cout << "Have you seen " << friend_name << " lately?\n";
	cout << "Enter an age:\n";
	int age;
	cin >> age;
	if (age <= 0 || age >= 110)
	{
		runtime_error("you're kidding!");
	}
	else
	{
		cout << "I hear you just had a birthday and you are " << age << " years old.\n";
	}

	if (age < 12)
	{
		cout << "Next year you will be " << age + 1 << ".\n";
	}
	else if (age == 17)
	{
		cout << "Next year you will be able to vote.\n";
	}
	else if (age > 70)
	{
		cout << "I hope you are enjoying retirement.\n";
	}

	cout << "Yours sincerely,\n\n\n";

	cout << "Your Name\n";
	
	return 0;*/
	

	//Exercises 2

	//2
	/*cout << "Enter miles: ";
	double miles = 0;
	cin >> miles;
	double km = miles * 1.609;
	cout << miles << " miles is " << km << " kilometers.\n";*/

	//3
    /*int double = 0;
	double char = 5
	char j = 6455*/

	//4-5
	//cout << "Enter an floating-point number: ";
	//double val1 = 0;
	//cin >> val1;
	//cout << "Enter a second floating-point number: ";
	//double val2 = 0;
	//cin >> val2;
	//if (val1 < val2)
	//	cout << "The smaller value is " << val1 << '\n';
	//else if (val1 == val2)
	//cout << "The values are equal.\n";	
	//else
	//	cout << "The smaller value is " << val2 << '\n';
	
	//6
	//cout << "Enter a number: ";
	//int n = 0;
	//cin >> n;
	//cout << "Enter another number: ";
	//int m = 0;
	//cin >> m;
	//cout << "Enter a third number: ";
	//int o = 0;
	//cin >> o;
	//if (n < m && m < o)
	//	cout << n << "," << m << "," << o << "\n";
	//if (m < n && n < o)
	//	cout << m << "," << n << "," << o << "\n";
	//
	//if (m < o && o < n)
	//	cout << m << "," << o << "," << n << "\n";
	//
	//if (n < o && o < m)
	//	cout << n << "," << o << "," << m << "\n";
	//
	//if (o < m && m < n)
	//	cout << o << "," << m << "," << n << "\n";
	//if (o < n && n < m)
	//	cout << o << "," << n << "," << m << "\n";
	//7
	/*cout << "Enter a string: ";
	string n;
	cin >> n;
	cout << "Enter another string: ";
	string m;
	cin >> m;
	cout << "Enter a third string: ";
	string o;
	cin >> o;
	if (n < m && m < o)
		cout << n << "," << m << "," << o << "\n";
	if (m < n && n < o)
		cout << m << "," << n << "," << o << "\n";

	if (m < o && o < n)
		cout << m << "," << o << "," << n << "\n";

	if (n < o && o < m)
		cout << n << "," << o << "," << m << "\n";

	if (o < m && m < n)
		cout << o << "," << m << "," << n << "\n";
	if (o < n && n < m)
		cout << o << "," << n << "," << m << "\n";*/
	
	//8
	//cout << "Enter a number: ";
	//int n = 0;
	//cin >> n;
	//if (n % 2 == 0)
	//cout << "The value " << n << " is an even number.\n";
	//else
	//cout << "The value " << n << " is an odd number.\n";
	//
	//9
	/*cout << "Enter a number word: ";
	string s;
	cin >> s;
	if (s == "zero")
		cout << 0  << "\n";
	else if (s == "one")
		cout << 1 << "\n";
	else if (s == "two")
		cout << 2 << "\n";
	else if (s == "three")
		cout << 3 << "\n";
	else if (s == "four")
		cout << 4 << "\n";
	else
		cout << "I don't know that number. \n";*/

	//10
	/*cout << "Enter an operation: ";
	string op;
	cin >> op;
	cout << "Enter an operands: ";
	double n;
	cin >> n;
	cout << "Enter a second operand: ";
	double m;
	cin >> m;
	if (op == "+")
		cout << n + m;
	else if (op == "-")
		cout << n - m;
	else if (op == "*")
		cout << n * m;
	else if (op == "/")
		cout << n / m;
	else
		cout << "Incorrect input.\n";*/

	//11
	/*cout << "How many pennies do you have? \n";
	int p;
	cin >> p;
	cout << "How many nickels do you have? \n";
	int n;
	cin >> n;
	cout << "How many dimes do you have? \n";
	int d;
	cin >> d;
	cout << "How many quarters do you have? \n";
	int q;
	cin >> q;
	cout << "How many half-dollars do you have? \n";
	int h;
	cin >> h;
	cout << "You have " << p << "penny(ies).\n"
		<< "You have " << n << "nickle(s).\n"
		<< "You have " << d << "dime(s).\n"
		<< "You have " << q << "quarter(s).\n"
		<< "You have " << h << "half-dollars(s).\n"
		<< "The value of all your coins is $" << (p + (n * 5) + (d * 10) + (q * 25) + (h * 50)) * .01 << ".\n";*/



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
