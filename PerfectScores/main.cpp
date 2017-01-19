#include <iostream>
using namespace std;

void displayscores(int scores, int i);

int main()
{
	int scores[10];
	for (int i = 0; i < 10; i++)
	{
		do
		{
			cout << "enter score #" << i + 1 << ": ";
			cin >> scores[i];
		} while (scores[i] < 0 || scores[i] > 100);
	}
	for (int i = 0; i < 10; i++)
	{
		displayscores(scores[i], i);
	}
	system("pause");
	return 0;
}
void displayscores(int score, int i)
{
	if (score == 100)
	{
		cout << "score #" << i + 1 << " is perfect!\n";
	}
}
