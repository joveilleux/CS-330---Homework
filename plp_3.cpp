//This program consists of code that goes along with PLP3


#include <iostream>
#include <vector> //needed for Part 1 of Code Related Questions
#include <map>	  //needed for Part 1 of Code Related Questions
#include <string> //needed for access to stoi, stof, and tostring methods 
int main()
{
	//CODE RELATED QUESTIONS -- CODE

	//PART 1

	int my_integer = 7;
	std::string my_string = "My String";
	float my_float = 2.5;
	bool my_bool = false;
	std::vector<int> my_vector(7, 100);		//this is a vector of 7 integers with the value of 100
	std::map<int, int> my_map;				//this is a map that will contain a key:value pair of integers

	//PART 2

	//PART a.
	std::cout << "Narrowing Conversion" << std::endl;
	int conversion = my_integer + my_float;				
	std::cout << conversion << std::endl;
	std::cout << "Widening Conversion" << std::endl;
	float conversion2 = my_integer + my_float;			
	std::cout << conversion2 << std::endl;

	//PART c.

	std::cout << "Type-casting float to int" << std::endl;
	int placeholder_int = (int)my_float;					//type casting float to int
	std::cout << placeholder_int << std::endl;
	std::cout << "Type-casting int to float" << std::endl;
	float placeholder_float = (float)my_integer;			//type casting int to float
	std::cout << placeholder_float << std::endl;

	//type-casting with strings

	/*
	This code will not compile!
	std::string num_string = "5";
	int placeholder3 = (int)num_string;
	std::cout << placeholder3 << std::endl;
	*/

	//but these will
	std::cout << "Type-casting string to int" << std::endl;
	int placeholder_int_2 = std::stoi("7");					//type-casting string to int
	std::cout << placeholder_int_2 << std::endl;

	std::cout << "Type-casting string to float" << std::endl;
	float placeholder_float_2 = std::stoi("7");				//type-casting string to float
	std::cout << placeholder_float_2 << std::endl;

	/*
	This code will not compile!
	x = 5;
	int placeholder3 = (string)num_string;
	std::cout << placeholder3 << std::endl;
	*/

	//but these will
	std::cout << "Type-casting int to string" << std::endl;
	std::string placeholder_string;
	placeholder_string = std::to_string(my_integer);		//type-casting int to string
	std::cout << placeholder_string << std::endl;

	std::cout << "Type-casting float to string" << std::endl;
	std::string placeholder_string_2;
	placeholder_string_2 = std::to_string(my_float);		//type-casting float to string
	std::cout << placeholder_string_2 << std::endl;

	//DISCUSSION QUESTIONS -- CODE

	//PART 4
	/*
	This code will not compile!
		int x;
		x = "5" + 6;
		std::cout << x;
	*/

	//but this will
	std::cout << "Type-casting string to int to use in equation" << std::endl;
	int x = std::stoi("5") + 6; //uses same method as Part 2c
	std::cout << x << std::endl;


	return 0;
}



