#include<iostream>
#include<string>
using namespace std;


void start() {
	string name;
	cout << "Enter Your Name : ";
	getline(cin, name);

	cout << "Welcome " << name << endl;


}

void game() {
	string choice;
	cout << "Do you want to play (yes/no) : ";
	getline(cin, choice);

	if (choice == "yes" || choice == "Yes" || choice == "YES") 
	{ 
		cout << "Okay lets play"; 
	}
	if (choice == "no" || choice == "No" || choice == "NO") 
	{ 
		system("exit"); 
	}
}

int main() {

	int score = 10;

	cout << "You are going on an adventure:" << endl;

	start();
	game();

	system("cls");

	string choice2;
	cout << "You have entered a two way road. Where do you want to go? (Left/Right) : ";
	getline(cin,choice2);

	if (choice2 == "left" || choice2 == "Left" || choice2 == "LEFT")
	{
		cout << "You fell down on the road \n";
		score -= 4;
	}

	if (choice2 == "right" || choice2 == "Right" || choice2 == "RIGHT")
	{
		cout << "You have reached towards the railway station \n";
		score += 1;
	}

	else
	{
		system("exit");

	}

	cout << "Your score is :" << score << endl;
	
	    cout << endl;
	    system("PAUSE");
		return 0;

}