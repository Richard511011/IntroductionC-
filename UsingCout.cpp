
#include <iostream>
using namespace std;
int main() {
	cout << "Welcome to C++" << endl;
	system("pause");//pauses the code
	cout << "output displayed using cout\n\n";

	cout << "implement the source code to display an output as\n1  2  3  4\n\n";

	cout << "1 - using one cout statement, with the numbers as one string\n1 2 3 4\n\n";

	cout << "2 - using one cout statement, with four cascaded string-inputs\n";
	cout << "1 " << "2 " << "3 " << "4\n\n";

	cout << "3 - repeat, using integer numbers as four inputs\n";
	cout << 1 << " " << 2 << " " << 3 << " " << 4 << "\n\n";

	cout << "4 - repeat, using characters\n";
	cout << '1' << ' ' << '2' << ' ' << '3' << ' ' << '4' << "\n\n";

	cout << "5 - using four individual cout statements, and using only one string at a time\n";
	cout << "1 ";
	cout << "2 ";
	cout << "3 ";
	cout << "4\n\n";
	system("pause"); //Pauses the code

	cout << "Second part : display a table\nImplement a source code, using cout, to display the table:\n"; //part 2 of project
	int n{ 1 };
	cout << "number\tsquare\tcube\n";
	cout << n << "\t" << n << "\t" << n << "\t" << endl;
	cout << n + n << "\t" << n * 4 << "\t" << n * 8 << endl;
	cout << n + n + n << "\t" << n * 9 << "\t" << n * 27 << "\n\n";
	system("pause");//pauses the code

	cout << "Third part : display a triangle using cout with only one input string\n\n";
	cout << "*\n**\n***\n****\n*****\n\n";
	system("pause");
	cout << "fourth part : display a rectange\nUsing cout, implement a source code to display a rectangle\n";
	cout << "^ ------------------\n";
	cout << "| |                |\n";
	cout << "a |                |\n";
	cout << "| |                |\n";
	cout << "v ------------------\n";
	cout << " <--------b---------\n";
	system("pause");//pauses the code




}
