#include <iostream>

using namespace::std;

template <class S>
//Returns the minimum float, integer, double or character
S minimum (S num1, S num2){
	
	if ((int) num1 > (int) num2){
		
		return num2;
		
	}else{
		
		return num1;
	}
	
}
//Returns the maximum float, integer, double or character
template <class S>
S maximum (S num1, S num2){
	
	if ((int) num1 > (int) num2){
		
		return num1;
		
	}else{
		
		return num2;
	}
	
}

int main(){

	double value1, value2;
	char letter1, letter2;
	
	int option;
	
	cout << "Enter the following: " << endl;
	cout << "Press 1 to find minimum or maximum of a number. " << endl;
	cout << "Press 2 to find minimum or maximum of a character. " << endl;
	cin >> option;
	
	if (option == 1){
	
	cout << "Enter value 1: ";
	cin >> value1;
	
	cout << "Enter value 2: ";
	cin >> value2;
	
	cout << "The minimum is: " << minimum(value1, value2) << endl;
	cout << "The maximum is: " << maximum(value1, value2);
	
	}else if (option == 2){
	
	cout << "Enter character 1: ";
	cin >> letter1;
	
	cout << "Enter value 2: ";
	cin >> letter2;
	
	cout << "The minimum is: " << minimum(letter1, letter2) << endl;
	cout << "The maximum is: " << maximum(letter1, letter2);
		
	}else{
		
		cout << "Error: Invalid Option" << endl;
		
	}
	
	return 0;
	
}
///////////////////////////////////////////////////////////////////////////////////////////////
//Esto fue lo que yo hice en clase pues entendí que esto era lo que pedía el ejercicio:
#include <iostream>
using namespace std;


template <class Greater>
Greater compareGreater(Greater a, Greater b) {
	return a > b ||a<b;
}
template <class Lesser>
Lesser compareLesser(Lesser a, Lesser b) {
	return a < b || a > b;
}

int main()
{
	double a, b;
	cout << "Enter two numbers: ";
	cin >> a >> b;
	cout << "The Greater Number is:" << compareGreater(a, b) << endl;
	cout << "The Lesser Number is: " << compareLesser(a, b) << endl;

}
//Esto fue lo que me salio como resultado:
/*
Enter two numbers: 1
2
The Greater Number is:1
The Lesser Number is: 1

C:\Users\Alejandro Carrera\source\repos\EjerciciosTresTemplates\Debug\EjerciciosTresTemplates.exe (process 12172) exited with code 0.
Press any key to close this window . . .
*/
