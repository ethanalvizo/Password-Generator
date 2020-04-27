#include <iostream>
#include <string>
#include <ctime>
#include <stdlib.h>

	using namespace std;
	
	int main()
	{
		
		int length; //stores how long the user wants the password to be
		cout << "How long would you like the password to be?" << endl;
		cin >> length;
		
		string password[length]; //stores the generated password
		int randomIndex; //stores which character will be added to the password from the char array
		char characters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890 ";

		randomIndex = rand() % 63 + 1; //generates a random value for an index within the char array
		srand (time(0)); //makes sure that we get a different random value each time it is called
		
		for (int index = 0; index < length; ++index){
			password[index] = characters[randomIndex];
		}
		
		cout << password << endl;
	}
