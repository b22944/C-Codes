#include<iostream>
using namespace std;

//This should only be used for educational purpose

int main() {

	int seq[5];

	cout << "This algorithm is used to calculate formula for Arethmetic series created by Usama Hassan\n "<< endl;
	cout << "Enter Numbers: (The First term Can't be 0 or 1 )\n";

	for (int i = 0; i < 5; i++)
	{
		cout << "Enter Number " << i + 1 << ":";
		cin >> seq[i];
	}
    
	system("cls");

	cout << "\n The Sequence is : " << seq[0] << " , " << seq[1] << " , " << seq[2] << " , " << seq[3] << " , " << seq[4] << "..." << endl;


	int fd[4];
	fd[0] = seq[1] - seq[0];
	fd[1] = seq[2] - seq[1];
	fd[2] = seq[3] - seq[2];
	fd[3] = seq[4] - seq[3];

	cout << "\nThe First difference is :" << fd[0] << " , " << fd[1] << " , " << fd[2] << " , " << fd[3] << endl;

	int sd[3];
	sd[0] = fd[1] - fd[0];
	sd[1] = fd[2] - fd[1];
	sd[2] = fd[3] - fd[2];

	cout << "\nThe Second difference is :" << sd[0] << " , " << sd[1] << " , " << sd[2] << endl;

	/*
	2a = 2nd Difference
	3a + b = seq[1] - seq[0] = (fd[0]);
	a + b + c = seq[0]; 

	*/

	int a, b, c;
	int M, sum;

	a = sd[0] / 2; //Value of a

	M = 3 * a;

	b = fd[0] / M; //Value of b
	
	sum = a + b ;

	c = seq[0] - sum; // Value of C


	/*
	Un = an^2 + bn + c
	*/

	cout << "\nThe Formula for the Sequence :" << a <<"n^2 + " << b << " n + " << c << endl;


	cout << endl;
	system("PAUSE");
	return 0;

}