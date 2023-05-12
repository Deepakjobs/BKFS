//#####################################################################################################################################################################
//Create a function to determine if a word or phrase is a palindrome.																								  #
// The function will take as input a string and return a boolean that is true if the word or phrase is a palindrome and false otherwise.Examples of palindromes are : #
//1. 1881																																							  #
//2. Dad																																							  #
//3. Step on no pets#																																				  #
//Question 1.                                                                                                                                                         #
//#####################################################################################################################################################################



#include<iostream>
#include<string>
using namespace std;

bool Is_Palendrome(const string &s1)
{
	size_t LENGTH = s1.length();
	for (auto i = 0; i < LENGTH / 2; i++)
	{
		if (tolower(s1[i]) != tolower(s1[LENGTH - 1 - i])) //Case Insensitive
		{
			return 0;
		}
		
	}
	return 1;
}
int main()
{
	Is_Palendrome("1881") == 0 ? cout << "1881 is Not a Palindrome \n": cout<< "1881 is a Palindrome\n";
	Is_Palendrome("Dad") == 0 ? cout << "Dad is Not a Palindrome \n" : cout << "Dad is a Palindrome\n";
	Is_Palendrome("Step on no pets") == 0 ? cout << "Step on no pets is Not a Palindrome \n" : cout << "Step on no pets is a Palindrome\n";

	Is_Palendrome("Deepak") == 0 ? cout << "Deepak is Not a Palindrome \n" : cout << "Deepak is a Palindrome\n";


	return 0;
}