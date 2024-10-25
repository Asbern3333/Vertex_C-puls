#include <iostream>
#include <Vector>
#include <numeric>
/*
1-- Ask the user for name and age
2-- a. Ask the user for temperature in Celcuis -- convert to FH -- print to the console.
    b. Km -Miles -- print to console
    c. Pounds - Kgs -- print to the console
    d. Dollar ammount  convert to Euros -- print to the console


3-- Create a vector of 4 float numbers
    a. Ask the user to input 5 integers and store them in a vector
    b. Print the sum of all the integers 
	c. largest and smallest number in the vector
	d. Ask the user for a number - search it to see  if its in the vector
*/

int main()
{
	//1
	std::string name;
	int age;
	std::cout << "Enter your name :";
	std::cin >> name;
	std::cout << std::endl << "Enter your age :" ;
	std::cin >> age;
	std::cout << std::endl << "Your name is : " << name << ".\nYour age is: " << age<<std::endl;

	//2
	float Celcuis, Km, Pounds, Dollars;
	std::cout << "Enter the Celcuis temperature number to convert it to FH: ";
	std::cin  >> Celcuis;
	std::cout << Celcuis << " in FH = " << (Celcuis*9/5) + 32;
	std::cout << "\nEnter the KM number to convert it to Miles: ";
	std::cin  >> Km;
	std::cout << Km << " in Miles = " << Km* 0.621371 <<"Miles";
	std::cout << "\nEnter the pounds number to convert it to KG: ";
	std::cin  >> Pounds;
	std::cout << Pounds << " in KG = " << Pounds * 0.453592 << "KG";
	std::cout << "\nEnter the Dollars number to convert it to Euros: ";
	std::cin  >> Dollars;
	std::cout << Dollars << " in Euro = " << Dollars * 0.92 << "Euros";



	//3
	std::vector<int> vec(5);
	std::cout << "\nPlease Enter 5 numbers = "<<std::endl;
	std::cin >> vec[0] >> vec[1] >> vec[2] >> vec[3] >> vec[4];
	
	std::cout <<std::endl<< "The avg of the numbers is that: " << std::accumulate(vec.begin(), vec.end(), 0.0f) / vec.size();

	return 0;
}