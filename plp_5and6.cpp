#include <iostream>
#include <string>
#include <vector>

//Discussion Question 8
int global = 0;


//Discussion Question 1 (function)
int subtract(int num1, int num2) {
	int difference = num1 - num2;
	return difference;
}

//Discussion Question 2 (function)
//located before main() by declaring addition before it was written
int addition(int , int);

//Discussion Question 3 (function)
void multiply(int num) {
	if (num < 100) {
		num = num * 2;
		std::cout << num << std::endl;
		multiply(num);
	}
}

//Discussion Question 4 (function)
void concat(std::string name, int age) {
	std::cout << "My name is " << name << " and I am " << age << " years old" << std::endl;
}

//Discussion Question 5 (functions)
 void returnMultiplePointer(int* p_num1, int* p_num2) {
	*p_num1 = 3;
	*p_num2 = 4;
	
}

 struct multipleNumbersStruct {
	 int number, number2;
 };

 typedef struct multipleNumbersStruct Struct;

 Struct returnMultipleStruct(int a, int b) {
	 Struct multipleNum;
	 multipleNum.number = a;
	 multipleNum.number2 = b;

	 return multipleNum;
 }

 std::vector<int> returnMultipleVector(int a, int b) {
	 std::vector<int> multiple_nums;
	 multiple_nums.push_back(a);
	 multiple_nums.push_back(b);

	 return multiple_nums;
 }

//Discussion Question 7 (function)
void variableScope() {
	int z = 2;
	std::cout << "This is z inside the function: " << z << std::endl;
}

//Discussion Question 9 (function)
void alterInput(int x) {
	x = x + 3 * 5;
	std::cout << "This is before inside Function: " << x << std::endl;

}

int main() {
	//Discussion Question 1 (main)
	int number_1 = 4;
	int number_2 = 2;
	int sum = addition(number_1, number_2);
	std::cout << "This is the sum of " << number_1 << " and " << number_2 << " : " << sum << std::endl;

	//Discussion Question 2 (main)
	int difference = subtract(number_1, number_2);
	std::cout << "This is the difference of " << number_1 << " and " << number_2 << " : " << difference << std::endl;

	//Discussion Question 3 (main)
	int number_5 = 5;
	multiply(number_5);

	//Discussion Question 4 (main)
	std::string name = "Joanna";
	int age = 21;
	concat(name, age);

	//Discussion Question 5 (main) 
	int number_3 = 0;
	int number_4 = 0;
	returnMultiplePointer( &number_3, &number_4);
	std::cout << "This is number_3: " << number_3 << std::endl;
	std::cout << "This is number_4: " << number_4 << std::endl;

	Struct returned_struct = returnMultipleStruct(3, 5);
	std::cout << "This is the first number: " << returned_struct.number << std::endl;
	std::cout << "This is the second number: " << returned_struct.number2 << std::endl;

	std::vector<int> returned_vector = returnMultipleVector(6, 9);
	std::cout << "This is the first number: " << returned_vector.at(0) << std::endl;
	std::cout << "This is the second number: " << returned_vector.at(1) << std::endl;

	//Discussion Question 6
	int x = 0;
	int y = 0;
	while ( y < 10) {
		int x = 1;
		x += y;
		y += x;
		std::cout << "This is x in the loop: " << x << std::endl; 
	}
	std::cout << "Thsi is x out of the loop: " << x << std::endl; 

	//Discussion Question 7
	int z = 1; 
	variableScope();
	std::cout << "This is z outside the function: " << z <<  std::endl;


	//Discussion Question 9 (main)
	int before = 0;
	alterInput(before);
	std::cout << "This is before after Function: " << before << std::endl;

	//Discussion Question 10
	std::vector<char> a = { 'c', 'a', 't' };
	std::vector<char> b = { 'd', 'o', 'g' };
	a = b;
	b.at(1) = 'u';
	//fix this
	std::cout << "This is the contents of a: " << std::endl;
	for (auto start = a.begin(); start != a.cend(); start++) {
		std::cout << *start <<std::endl;
	}
	std::cout << "This is the contents of b: " << std::endl;
	for (auto start = b.begin(); start != b.cend(); start++) {
		std::cout << *start << std::endl;
	}

}

//Discussion Question 2 (function)
//actual function is located after main()
int addition(int num1, int num2) {
	int sum = num1 + num2;
	return sum;
}