/*
Devun Schneider
CS140
Prof Hawkins
Write a program that asks the user for a positive integer, then 
prints the factorial of that integer. Write a function factorial 
(no class is needed). This function takes an int and returns a long 
long of the factorial of that int using a "for" loop. A factorial is 
defined n! =  n * n-1 * n-2 * … * 3 *  2 * 1. So given a number n, n 
factorial (n!) is the product of all positive integers less than or 
equal to n. Start the total at 1, as you will be multiplying into it. 
Have a "for" loop from n to 1 that multiples the counter into the total.
*/

#include <iostream>
using namespace std;


//function that calculates factorial product
long long factorial(int n) 
{	
	//product starts at 1
	long long product = 1;
	//for loop starts at 1 and multiplies by 'n' until i=n
	for (int i = 1; i <= n; i++) {
		product = product * i;
	}
	return product;
}
//main prompts for an integer 'n', initializes 'n' to input, 
//calls function factorial, prints results
int main() {
	int n;
	cout << "Enter n for n!"<<endl;
	cin >> n;
	cout << "Factorial of " << n <<" is:"<< factorial(n) << endl;
}