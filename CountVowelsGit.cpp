#include <iostream>
#include <iomanip>  // imported this iomanip library to use format manipulators
#include <string>
#include <fstream>

using namespace std;

//decalring constants
int CharacLength = 60;

int main(int argc, char* argv[])
{
	// The executable name and at least one argument?
	if (argc < 2)
	{
		std::cout << "Error with input agrs.." << std::endl;
		return 1;
	}

	// For debugging purposes only
	for (int i = 0; i < argc; i++)
	{
		std::cout << i << ":" << argv[i] << std::endl;
	}

	std::ifstream inFile;
	inFile.open(argv[1]);
	if (!inFile)
	{
		std::cout << "Error with file name.." << std::endl;
		return 1;
	}


	cout << setfill('*');  //setfill() fills character based on the specified character
	cout << setw(60) << "*" << endl; //setw() helps set the field width used for output operations
	cout << setfill('*');
	cout << setw(12) << "*" << " Welcome to My Letter Count Program " << setw(12) << "*" << endl;
	cout << setfill('*');
	cout << setw(60) << "*" << endl;
	cout << endl;

	cout << "Analyzing file '" << argv[1] << "'" << endl; //Anazlyzes the file where the frist argument is passed to
	cout << endl;

	int A = 0, E = 0, I = 0, O = 0, U = 0, B=0, K=0, W=0 ; //Declaring the vowels and initializing

	std::string str;

	//Counting the number of vowels and 3 more letters using if else if statements and then incrementing the value
	//while the file is not ending
	while (!inFile.eof()) {

		inFile >> str;

		for (int i = 0; i < str.size(); i++) {

			if (str[i] == 'A' || str[i] == 'a')

				A++;

			else if (str[i] == 'E' || str[i] == 'e')

				E++;

			else if (str[i] == 'I' || str[i] == 'i')

				I++;

			else if (str[i] == 'O' || str[i] == 'o')

				O++;

			else if (str[i] == 'U' || str[i] == 'u')

				U++;

			else if (str[i] == 'B' || str[i] == 'b')

				B++;

			else if (str[i] == 'K' || str[i] == 'k')

				K++;

			else if (str[i] == 'W' || str[i] == 'w')

				W++;
		}

	}

	inFile.close(); // the file closed and the number of vowels are counted

	cout << setfill('.');

	string p = "The number of A's: ";
	cout << p << std::right << std::setw(CharacLength - p.length()) << A << endl;

	string q = "The number of E's: ";
	cout << q << std::right << std::setw(CharacLength - q.length()) << E << endl;

	string r = "The number of I's: ";
	cout << r << std::right << std::setw(CharacLength - r.length()) << I << endl;

	string s = "The number of O's: ";
	cout << s << std::right << std::setw(CharacLength - s.length()) << O << endl;

	string t = "The number of U's: ";
	cout << t << std::right << std::setw(CharacLength - t.length()) << U << endl;

	string tt = "The number of B's: ";
	cout << tt << std::right << std::setw(CharacLength - tt.length()) << B << endl;

	string m = "The number of K's: ";
	cout << m << std::right << std::setw(CharacLength - m.length()) << K << endl;

	string n = "The number of W's: ";
	cout << n << std::right << std::setw(CharacLength - n.length()) << W << endl;

	string v = "The vowel + 3 more letters count is: ";
	cout << v << std::right << std::setw(CharacLength - v.length()) << (A + E + I + O + U + B + K + W) << endl;



	return 0;
}

