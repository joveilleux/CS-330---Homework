//This program consists of code that goes along with PLP4

#include <iostream>
#include <string>
#include <vector>
int main() {

	//CODE RELATED QUESTIONS 

	//Some variables to test with statements
	int x = 5;
	int y = 4;

	bool t = true;
	bool f = false;
	
	// 1. This is a one-condition if/else statement
	std::cout << "\n-----------------One-Condition Else Statement------------------------------\n" << std::endl;
	if (x == 5) { std::cout << "x is 5" <<std::endl; }
	else { std::cout << "x is not equal to 5" << std::endl; }

	// 2. This is a multi-condition if/else statement
	std::cout << "\n-------------Multi-Condition Else Statetement------------------------------\n" << std::endl;
	if (x == 5 && y == 4) { std::cout << "x is 5 and y is 4" << std::endl; }
	else { std::cout << "x is not 5 or/and y is not 4" << std::endl; }

	// 3a. This is a while loop
	std::cout << "\n-------------While Loop----------------------------------------------------\n" << std::endl;
	while (x < 10) {
		std::cout << x << std::endl;
		x++;
	}
	// 3b. This is a do while loop
	std::cout << "\n-------------Do-While Loop-------------------------------------------------\n" << std::endl;

	do {
		std::cout << x << std::endl;
			x++;
			y++;
	} while (y < 10);	

	// 3c. This is a for loop
	std::cout << "\n------------For Loop-------------------------------------------------------\n" << std::endl;
	for (int i = 0; i < 10; i++) {
		std::cout << i << std::endl;
	}

	/* 3d. There is no foreach loop available in C++
	   But the same effect can be achieved by coding the following: 
	*/
	std::cout << "\n------------Foreach Equivalent--------------------------------------------\n" << std::endl;
	std::vector<int> my_vector{ 1,2,3,4,5 };
	for (int a : my_vector) {
		std::cout << a << std::endl;
	}

	// 4. This is a switch-case statement
	std::cout << "\n------------Switch-Case Statement-----------------------------------------\n" << std::endl;
	int z = 2;
	switch (z) {
	case 1:
		std::cout << "z is 1" << std::endl;
		break;
	case 2: 
		std::cout << "z is 2" << std::endl;
		break;
	}

	// 5. This is a break statement
	std::cout << "\n-----------Break Statement------------------------------------------------\n" << std::endl;
	for (int i = 0; i < 10; i++) {
		if (i == 5) {
			break;
		}
		std::cout << i << std::endl;
	}

	// 6. This is a continue statement
	std::cout << "\n-----------Continue Statement--------------------------------------------\n" << std::endl;
	for (int i = 0; i < 10; i++) {
		if (i == 5) {
			continue;
		}
		std::cout << i << std::endl;
	}

	//DISCUSSION QUESTIONS

	// 2. short-circuit evaluation
	std::cout << "\n------------Short Circuit Evaluation-------------------------------------\n" << std::endl;
	bool true_var = true;
	bool false_var = false;

	if (false_var && true_var) {
		std::cout << "Oops this shouldn't have printed" << std::endl;
	}
	else {
		std::cout << "This is short-circuit evaluation" << std::endl;
	}

	// 3. Dangling Else Problem
	/*
		if statement
		if statement
		else statemnt

		can be read two ways
		if statement
			if statement
		else statemnt

		or

		if statement
			if statement
			else statement

		you can fix this by doing this:

		if statement{
			if statement
		}
		else statement

	*/

	//5. Break statements in loops
	std::cout << "\n------------Break Statements in Loops------------------------------------\n" << std::endl;
	int a = 10;
	while(a != 0) {
		std::cout << a << std::endl;
		if (a == 5) {
			break;
		}
		else {
			a--;
		}
	}

	// 7. Not Addressed - For range
	std::cout << "\n-----------For Range Loop------------------------------------------------\n" << std::endl;
	std::string str = "My name is Joanna";
	for (char c : str)
	{
		std::cout << c;
	}
	std::cout << std::endl;
	
	//goto statement
	std::cout << "\n-----------GoTo Statement------------------------------------------------\n" << std::endl;
	std::string name = "Joanna";
	std::cout << name << std::endl;
	label:;
	if (name == "Joanna") {
		std::cout << "String is \"Joanna\"" << std::endl;
		name = "Not Joanna";
		goto label;
	}
	else {
		std::cout << "String is not \"Joanna\"" << std::endl;
	}
	
	return 0;
}
