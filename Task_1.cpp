#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int num, guess, t = 0;
	srand(time(0)); 
	num = rand() % 100 + 1; 
  cout << "-Hii, My name is Debasmita Jana.\n\n";
  cout << "This is Task 1\n\n";
	cout << "--------Guess The Number Game ---------\n\n";

	do
	{
		cout << "Enter a guess between 1 and 100 : ";
		cin >> guess;
		t++;

		if (guess > num)
			cout << "The number is Too high!\n\n";
		else if (guess < num)
			cout << "The number is Too low!\n\n";
		else
			cout << "\n\nCorrect! You have got it in ";
	} while (guess != num);

	return 0;
}
