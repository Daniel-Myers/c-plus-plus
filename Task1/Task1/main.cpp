#include <iostream>

int main()
{
	// Using cout and cin in std namespace
	using std::cout;
	using std::cin;

	// Declare score variable
	unsigned int score;

	// Input Score
	cout << "Input Score: ";
	cin >> score;

	// Conditional statements
	if (score > 100 or score < 0) cout << "Invalid score";
	else if (score >= 90) cout << "Grade A";
	else if (score >= 80) cout << "Grade B";
	else if (score >= 70) cout << "Grade C";
	else if (score >= 60) cout << "Grade D";
	else if (score >= 0) cout << "Grade F";

	return 0;
}