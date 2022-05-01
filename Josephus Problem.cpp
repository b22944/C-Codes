#include<iostream>
using namespace std;

int josephus(int n, int k)
{
	if (n == 1)
		return 1;
	else
		
		return (josephus(n - 1, k) + k - 1) % n + 1;
}

int main()
{
	int k = 2;
	int n;

	cout << "Enter the number of players: "; cin >> n;

	cout << "The chosen place is " << josephus(n, k);

	cout << endl;

	return main();
}