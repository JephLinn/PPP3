// PPP3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	// 2.1 Input
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

	double d = 0;
	while (cin >> d) { //repeat the statements below as long as we type in numbers
		int i = d;  //try to squeeze a floating-point value into an integer value
		char c = i; //try to squeeze an integer value into a character value
		cout << "d == " << d //the original double
			<< ", i == " << i  // the double converted to int
			<< ", c == " << c  //int value of char
			<< "char(" << c << ")\n";	//the char

	}
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
