//Name: Jonathan Vencill
//Date: 6/28/2022
//Lucky 7 Assignment


#include <iostream>

void ex1();
void ex2();
void ex3();
void ex4();
void ex5();
void ex6();

int main() {


	//ex1();
	//ex2();
	//ex3();
	//ex4();
	//ex5();
	return 0;
}

void ex1() {
	std::cout << "Please type in 5 different integers with spaces between";
	int num1 = 0; int num2 = 0; int num3 = 0; int num4 = 0; int num5 = 0;
	std::cin >> num1 >> num2 >> num3 >> num4 >> num5;
	int largest = num1;
	if (num2 > largest) {
		largest = num2;
	}
	if (num3 > largest) {
		largest = num3;
	}
	if (num4 > largest) {
		largest = num4;
	}
	if (num5 > largest) {
		largest = num5;
	}
	std::cout << "The largest integer is " << largest << std::endl;
	int smallest = num1;
	if (num2 < smallest) {
		smallest = num2;
	}
	if (num3 < smallest) {
		smallest = num3;
	}
	if (num4 < smallest) {
		smallest = num4;
	}
	if (num5 < smallest) {
		smallest = num5;
	}
	std::cout << "The smallest integer is " << smallest << std::endl;

}

void ex2() {
	int toMult = 7;
	int sum = 0;
	for (int i = 1; i < 51; i++) {
		sum += (toMult * i);
	}
	std::cout << "The sum of the first 50 positive integers that are multiples of " << toMult << " is " << sum;
}

void ex3() {
	int fact = 10;
	int output = 1;
	for (int i = fact; i > 0; i--) {
		output = output * i;
	}
	std::cout << "The factorial of " << fact << " is " << output << std::endl;
}
void ex4(){
	std::string title = "Easy Crafts for the Insane";
	for (int i = 0; i < title.size(); i++){
	std::cout << "title[" << i << "] = " << title[i] << std::endl;
	}
}
void ex5() {
	int toCheck = 0;
	std::cout << "Please type a positive integer";
	std::cin >> toCheck;
	if (toCheck < 0) {
		std::cout << "That number is not positive, please try again";
	} else {
		int flag = 0;
		int limit = toCheck / 2;
		for (int i = 2; i < limit; i++) {
			if (toCheck % i == 0) {
				flag = 1;
				break;
			}
		}
		if (flag == 1) {
			std::cout << toCheck << " is not a prime number" << std::endl;
		} else {
			std::cout << toCheck << " is a prime number" << std::endl;
		}
	}
}

void ex6() {
	double sum = 0.0, avg;
	double num[] = { 12, 76, 23, 9 , 5 };
	double n = sizeof(num) / sizeof(num[0]);
	for (int i = 0; i < n; i++) {

	}
}