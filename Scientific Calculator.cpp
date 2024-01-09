#include <iostream>
#include <cmath>
#include <algorithm>
#include <complex>
#include <iomanip>
#include <string>
#include <cstring>
using namespace std;

void menu();
void basic_operations_menu();
void addition();
void subtraction();
void multiplication();
void division();
void trignometric_operations_menu();
void sine();
void cosine();
void tangent();
void arcsine();
void arccosine();
void arctangent();
void algebraic_operations_menu();
void exponentiation();
void squareroot();
void cuberoot();
void nthroot();
void factorial();
void absolutevalue();
void logarithmic_operations_menu();
void log10();
void naturallog();
double custom_log(double number, double base);
void customlog();
void statistical_operations_menu();
void mean();
int partition(double arr[], int low, int high);
void quicksort(double arr[], int low, int high);
void median();
void mode();
void standarddeviation();
void variance();
void additional_operations_menu();
int calculateModulus(int number, int divisor);
void remainder();
double calculatePercentage(int number, int percentage);
void percentage();
int calculateGCD(int num1, int num2);
void GCD();
int calculateLCM(int num1, int num2);
void LCM();
void floor();
void ceiling();
void complex_number_menu();
void printComplex(complex<double> c);
complex<double> getConjugate(complex<double> c);
void additionofcomplexnumbers();
void subtractionofcomplexnumbers();
void multiplicationofcomplexnumbers();
void divisionofcomplexnumbers();
void conjugate();
void matrix_operations_menu();
void Addition(int** a, int** b, int** result, int row, int col);
void additionofmatrices();
void Subtraction(int** a, int** b, int** result, int row, int col);
void subtractionofmatrices();
void Multiplication(int** a, int** b, int** result, int rowA, int colA, int colB);
void multiplicationofmatrices();
void Transpose(int** a, int** transpose, int row, int col);
void transposeofamatrix();
double determinant(double** a, int n);
void determinantofamatrix();
double** adjugate(double** a, int n);
void inverseofamatrix();
void binary_operations_menu();
string addBinary(string a, string b);
void binaryaddition();
string subtractBinary(string a, string b);
void binarysubtraction();
string multiplyBinary(string a, string b);
void binarymultiplication();

int main()
{
	char operation;
    int choice;
    
	menu();
    cin >> operation;
    
    if (operation == 'A' || operation == 'a')
	{
        basic_operations_menu();
        cin >> choice;

    	switch (choice)
		{
        	case 1:
            	addition();
            	break;
        	case 2:
            	subtraction();
            	break;
        	case 3:
            	multiplication();
            	break;
        	case 4:
        		division();
    			break;
    		default:
            	cout << endl << "Wrong Choice!" << endl;
            	break;
   		}
	}
    else if (operation == 'B' || operation == 'b')
	{
        trignometric_operations_menu();
        cin >> choice;

        switch (choice)
		{
			case 1:
    			sine();
    			break;
    		case 2:
    			cosine();
    			break;
    		case 3:
    			tangent();
    			break;
    		case 4:
    			arcsine();
    			break;
    		case 5:
    			arccosine();
    			break;
    		case 6:
    			arctangent();
    			break;
        	default:
            	cout << endl << "Wrong Choice!" << endl;
            	break;
		}
	}
	else if (operation == 'C' || operation == 'c')
	{
		algebraic_operations_menu();
		cin >> choice;
		
		switch (choice)
		{
			case 1:
				exponentiation();
				break;
			case 2:
				squareroot();
				break;
			case 3:
				cuberoot();
				break;
			case 4:
				nthroot();
				break;
			case 5:
				factorial();
				break;
			case 6:
				absolutevalue();
				break;
			default:
				cout << endl << "Wrong Choice!" << endl;
            	break;
		}
	}
	else if (operation == 'D' || operation == 'd')
	{
		logarithmic_operations_menu();
		cin >> choice;
		
		switch (choice)
		{
			case 1:
				log10();
				break;
			case 2:
				naturallog();
				break;
			case 3:
				customlog();
				break;
			default:
				cout << endl << "Wrong Choice!" << endl;
            	break;
		}
	}
	else if (operation == 'E' || operation == 'e')
	{
		statistical_operations_menu();
		cin >> choice;
		
		switch (choice)
		{
			case 1:
				mean();
				break;
			case 2:
				median();
				break;
			case 3:
				mode();
				break;
			case 4:
				standarddeviation();
				break;
			case 5:
				variance();
				break;
			case 6:
				factorial();
				break;
			default:
				cout << endl << "Wrong Choice!" << endl;
            	break;
		}
	}
	else if (operation == 'F' || operation == 'f')
	{
		additional_operations_menu();
		cin >> choice;
		
		switch (choice)
		{
			case 1:
				remainder();
				break;
			case 2:
				percentage();
				break;
			case 3:
				GCD();
				break;
			case 4:
				LCM();
				break;
			case 5:
				floor();
				break;
			case 6:
				ceiling();
				break;
			default:
				cout << endl << "Wrong Choice!" << endl;
            	break;
		}
	}
	else if (operation == 'G' || operation == 'g')
	{
		complex_number_menu();
		cin >> choice;
		
		switch (choice)
		{
			case 1:
				additionofcomplexnumbers();
				break;
			case 2:
				subtractionofcomplexnumbers();
				break;
			case 3:
				multiplicationofcomplexnumbers();
				break;
			case 4:
				divisionofcomplexnumbers();
				break;
			case 5:
				conjugate();
				break;
			default:
				cout << endl << "Wrong Choice!" << endl;
            	break;
		}
	}
	else if (operation == 'H' || operation == 'h')
	{
		matrix_operations_menu();
		cin >> choice;
		
		switch (choice)
		{
			case 1:
				additionofmatrices();
				break;
			case 2:
				subtractionofmatrices();
				break;
			case 3:
				multiplicationofmatrices();
				break;
			case 4:
				transposeofamatrix();
				break;
			case 5:
				determinantofamatrix();
				break;
			case 6:
				inverseofamatrix();
				break;
			default:
				cout << endl << "Wrong Choice!" << endl;
            	break;
		}
	}
	else if (operation == 'I' || operation == 'i')
	{
		binary_operations_menu();
		cin >> choice;
		
		switch (choice)
		{
			case 1:
				binaryaddition();
				break;
			case 2:
				binarysubtraction();
				break;
			case 3:
				binarymultiplication();
				break;
			default:
				cout << endl << "Wrong Choice!" << endl;
            	break;
		}
	}
	
	else
	cout << endl << "Invalid operation!" << endl;
	
	return 0;
}

void menu()
{
	char operation;
	cout << "Welcome to the Scientific Calculator!" << endl;
	cout << "-------------------------------------" << endl;
    cout << "A. Basic Operations" << endl;
    cout << "B. Trigonometric Operations" << endl;
    cout << "C. Algebraic Operations" << endl;
    cout << "D. Logarithmic Operations" << endl;
    cout << "E. Statistical Operations" << endl;
    cout << "F. Additional Operations" << endl;
    cout << "G. Complex Number" << endl;
    cout << "H. Matrix Operations" << endl;
    cout << "I. Binary Operations" << endl << endl;
    cout << "Enter Your Choice (A-I): ";
}

void basic_operations_menu()
{
	cout << endl << "Choose an operation:" << endl << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl << endl;
    cout << "Enter Your Choice (1-4): ";
}

void addition()
{
	double num1, num2;
	cout << endl << "Enter the first number: ";
    cin >> num1;
	cout << endl << "Enter the second number: ";
    cin >> num2;
    cout << endl << "=> " << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
}

void subtraction()
{
	double num1, num2;
	cout << endl << "Enter the first number: ";
    cin >> num1;
	cout << endl << "Enter the second number: ";
    cin >> num2;
    cout << endl << "=> " << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
}

void multiplication()
{
	double num1, num2;
	cout << endl << "Enter the first number: ";
    cin >> num1;
	cout << endl << "Enter the second number: ";
    cin >> num2;
    cout << endl << "=> " << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
}

void division()
{
	double num1, num2;

    do {
        cout << endl << "Enter the first number: ";
        cin >> num1;
        cout << endl << "Enter the second number: ";
        cin >> num2;

        if (num2 == 0)
        {
            cout << endl << "Invalid input. Division by zero is not allowed." << endl;
        }
        else
        {
            cout << endl << "=> " << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
            break;
        }
    }
    while (true);
}

void trignometric_operations_menu()
{
	cout << endl << "Choose an operation:" << endl << endl;
    cout << "1. Sine" << endl;
    cout << "2. Cosine" << endl;
    cout << "3. Tangent" << endl;
    cout << "4. Arcsine" << endl;
    cout << "5. Arccosine" << endl;
    cout << "6. Arctangent" << endl << endl;
    cout << "Enter Your Choice (1-6): ";
}

void sine()
{
	double angle, result;
	cout << endl << "Enter angle in degrees: ";
    cin >> angle;
    result = sin(angle * M_PI / 180);
    cout << endl << "=> " << "sin(" << angle << ") = " << result << endl;
}

void cosine()
{
	double angle, result;
	cout << endl << "Enter angle in degrees: ";
    cin >> angle;
    result = cos(angle * M_PI / 180);
    cout << endl << "=> " << "cos(" << angle << ") = " << result << endl;
}

void tangent()
{
	double angle, result;
	cout << endl << "Enter angle in degrees: ";
    cin >> angle;
    result = tan(angle * M_PI / 180);
    cout << endl << "=> " << "tan(" << angle << ") = " << result << endl;
}

void arcsine()
{
	double angle, result;

    do {
        cout << endl << "Enter angle in degrees: ";
        cin >> angle;

        if (angle < -1 || angle > 1)
        {
            cout << endl << "Invalid input. Arcsine input should be between -1 and 1." << endl;
        }
        else
        {
            result = asin(angle * M_PI / 180);
            cout << endl << "=> asin(" << angle << ") = " << result << endl;
            break;
        }
    } while (true);
}

void arccosine()
{
	double angle, result;

    do {
        cout << endl << "Enter angle in degrees: ";
        cin >> angle;

        if (angle < -1 || angle > 1)
        {
            cout << endl << "Invalid input. Arccosine input should be between -1 and 1." << endl;
        }
        else
        {
            result = acos(angle * M_PI / 180);
            cout << endl << "=> acos(" << angle << ") = " << result << endl;
            break;
        }
    } while (true);
}

void arctangent()
{
	double angle, result;
	cout << endl << "Enter angle in degrees: ";
    cin >> angle;
    result = atan(angle * M_PI / 180);
    cout << endl << "=> " << "atan(" << angle << ") = " << result << endl;
}

void algebraic_operations_menu()
{
	cout << endl << "Choose an operation:" << endl << endl;
    cout << "1. Exponentiation" << endl;
    cout << "2. Square root" << endl;
    cout << "3. Cube root" << endl;
    cout << "4. nth root" << endl;
    cout << "5. Factorial" << endl;
    cout << "6. Absolute value" << endl << endl;
    cout << "Enter Your Choice (1-6): ";
}

void exponentiation()
{
	long long base, exponent;
    cout << endl << "Enter the base number: ";
    cin >> base;
    cout << endl << "Enter the exponent: ";
    cin >> exponent;
    long long result = 1;
    
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }

    cout << endl << "=> The result of " << base << " raised to the power of " << exponent << " is: " << result << endl;
}

void squareroot()
{
	double number;

    do
    {
        cout << endl << "Enter a positive number: ";
        cin >> number;

        if (number < 0)
        {
            cout << endl << "Invalid input. Please enter a positive number." << endl;
        }
        else
        {
            double result = sqrt(number);
            cout << endl << "=> The square root of " << number << " is: " << result << endl;
        }
    } 
    while (number < 0);
}

void cuberoot()
{
	double number;

    do {
        cout << endl << "Enter a positive number: ";
        cin >> number;

        if (number < 0)
        {
            cout << endl << "Invalid input. Please enter a positive number." << endl;
        }
        else
        {
            double result = pow(number, 1.0/3.0);
            cout << endl << "=> The cube root of " << number << " is: " << result << endl;
        }
    } while (number < 0);
}

void nthroot()
{
	double number, root;
    cout << endl << "Enter a number: ";
    cin >> number;
    cout << endl << "Enter a root: ";
    cin >> root;

    double result = pow(number, 1.0 / root);
    cout << endl << "=> " << "The " << root << "th root of " << number << " is: " << result << endl;
}

void factorial()
{
	int number;
    long long result = 1;

    do {
        cout << endl << "Enter a positive number: ";
        cin >> number;

        if (number < 0)
        {
            cout << endl << "Invalid input. Please enter a positive number." << endl;
        }
        else
        {
            for (int i = 2; i <= number; i++)
            {
                result *= i;
            }
            cout << endl << "=> " << number << "! = " << result << endl;
        }
    } while (number < 0);
}

void absolutevalue()
{
	double number;
    cout << endl << "Enter a number: ";
    cin >> number;
    double result = abs(number);
    cout << endl << "=> " << "Abs(" << number << ") = " << result << endl;
}

void logarithmic_operations_menu()
{
	cout << endl << "Choose an operation:" << endl << endl;
    cout << "1. Logarithm (base 10)" << endl;
    cout << "2. Natural logarithm (base e)" << endl;
    cout << "3. Custom base logarithm" << endl << endl;
    cout << "Enter Your Choice (1-3): ";
}

void log10()
{
	double number;
    cout << endl << "Enter a number: ";
    cin >> number;

    if(number <= 0)
    {
        cout << endl << "Logarithm is undefined for numbers less than or equal to 0." << endl;
    }
    else
    {
        double result = log10(number);
        cout << endl << "=> " << "log10(" << number << ") = " << result << endl;
    }
}

void naturallog()
{
	double number;
    cout << endl << "Enter a number: ";
    cin >> number;

    if(number <= 0)
    {
        cout << endl << "Logarithm is undefined for numbers less than or equal to 0." << endl;
    }
    else
    {
        double result = log(number);
        cout << endl << "=> " << "log(" << number << ") = " << result << endl;
    }
}

double custom_log(double number, double base)
{
    if (number <= 0 || base <= 0)
	{
        return NAN;
    }
	else
	{
        return log(number) / log(base);
    }
}

void customlog()
{
    double number, base;
    cout << endl << "Enter a number: ";
    cin >> number;
    cout << endl << "Enter a base: ";
    cin >> base;

    double result = custom_log(number, base);

    if (isnan(result))
	{
        cout << endl << "Logarithm is undefined for numbers less than or equal to 0." << endl;
    }
	else
	{
        cout << endl << "=> " << "log(base " << base << ") of " << number << " = " << result << endl;
    }
}

void statistical_operations_menu()
{
	cout << endl << "Choose an operation:" << endl << endl;
    cout << "1. Mean" << endl;
    cout << "2. Median" << endl;
    cout << "3. Mode" << endl;
    cout << "4. Standard deviation" << endl;
    cout << "5. Variance" << endl;
    cout << "6. Factorial" << endl << endl;
    cout << "Enter Your Choice (1-6): ";
}

void mean()
{
	double sum = 0.0;
	int n;
	cout << endl << "Enter the number of elements: ";
	cin >> n;

	if (n == 0)
	{
		cout << endl << "Cannot calculate mean for zero elements." << endl;
		return;
	}

	double* numbers = new double[n];

	cout << endl << "Enter element 1: ";

	for (int i = 0; i < n; i++)
	{
		cin >> numbers[i];
		
		if (i < n - 1)
		{
			cout << endl << "Enter element " << i + 2 << ": ";
		}
		sum += numbers[i];
	}

	double mean = sum / n;
	cout << endl << "=> " << "The mean of the elements is: " << mean << endl;
	delete[] numbers;
}

int partition(double arr[], int low, int high)
{
  double pivot = arr[high];
  int i = low - 1;
  for (int j = low; j < high; j++)
  {
    if (arr[j] <= pivot)
    {
      i++;
      swap(arr[i], arr[j]);
    }
  }
  swap(arr[i + 1], arr[high]);
  return i + 1;
}

void quicksort(double arr[], int low, int high)
{
    if (low >= high)
    {
        return;
    }

    int pi = partition(arr, low, high);
    quicksort(arr, low, pi - 1);
    quicksort(arr, pi + 1, high);
}

void median()
{
	int n;
	cout << endl << "Enter positive number of elements: ";
    cin >> n;
  
  if (n == 0)
	{
		cout << endl << "Cannot calculate median for zero elements." << endl;
		return;
	}

  double* numbers = new double[n];

    cout << endl << "Enter element 1: ";

    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
        
        if (i < n - 1)
        {
            cout << endl << "Enter element " << i + 2 << ": ";
        }
    }

  quicksort(numbers, 0, n - 1);
  double median = (n % 2 == 0) ? (numbers[n / 2 - 1] + numbers[n / 2]) / 2.0 : numbers[n / 2];
  cout << endl << "=> " << "The median of the elements is: " << median << endl;
  delete[] numbers;
}

void mode()
{
	int n;
    cout << endl << "Enter positive number of elements: ";
    cin >> n;
	
	if (n == 0)
	{
		cout << endl << "Cannot calculate mode for zero elements." << endl;
		return;
	}

	double* numbers = new double[n];

	cout << endl << "Enter element 1: ";

	for (int i = 0; i < n; i++)
	{
    	cin >> numbers[i];

    	if (i < n - 1)
		{
      		cout << endl << "Enter element " << i + 2 << ": ";
    	}
	}

    sort(numbers, numbers + n);
    double mode = numbers[0];
    int maxCount = 0;
    int count = 1;

    for (int i = 1; i < n; i++)
    {
        if (numbers[i] == numbers[i - 1])
        {
            count++;
        }
        else
        {
            if (count > maxCount)
            {
                maxCount = count;
                mode = numbers[i - 1];
            }
            count = 1;
        }
    }

    if (count > maxCount)
    {
        maxCount = count;
        mode = numbers[n - 1];
    }

    cout << endl << "=> " << "The mode of the elements is: " << mode << endl;
    delete[] numbers;
}

void standarddeviation()
{
	int n;
    cout << endl << "Enter positive number of elements: ";
    cin >> n;
	
	if (n == 0)
	{
		cout << endl << "Cannot calculate standard deviation for zero elements." << endl;
		return;
	}

	double* numbers = new double[n];

	cout << endl << "Enter element 1: ";

	for (int i = 0; i < n; i++)
	{
    	cin >> numbers[i];

    	if (i < n - 1)
		{
      		cout << endl << "Enter element " << i + 2 << ": ";
    	}
	}

	double sum = 0.0;
	for (int i = 0; i < n; i++)
	{
    	sum += numbers[i];
	}

	double mean = sum / n;

	double temp = 0.0;
	for (int i = 0; i < n; i++)
	{
    	temp += pow(numbers[i] - mean, 2);
	}

	double std_dev = sqrt(temp / n);

	cout << endl << "=> " << "The standard deviation of the elements is: " << std_dev << endl;
	delete[] numbers;	
}

void variance()
{
	int n;
    cout << endl << "Enter positive number of elements: ";
    cin >> n;
    
    if (n == 0)
	{
		cout << endl << "Cannot calculate variance for zero elements." << endl;
		return;
	}

    double* numbers = new double[n];
    
    cout << endl << "Enter element 1: ";

	for (int i = 0; i < n; i++)
	{
    	cin >> numbers[i];

    	if (i < n - 1)
		{
      		cout << endl << "Enter element " << i + 2 << ": ";
    	}
	}

    double sum = 0.0;
    double mean;

    for (int i = 0; i < n; i++)
    {
        sum += numbers[i];
    }

    mean = sum / n;

    double temp = 0.0;
    double variance = 0.0;

    for (int i = 0; i < n; i++)
    {
        temp += pow(numbers[i] - mean, 2);
    }

    variance = temp / n;

    cout << endl << "=> " << "The variance of the elements is: " << variance << endl;
    delete[] numbers;
}

void additional_operations_menu()
{
	cout << endl << "Choose an operation:" << endl << endl;
    cout << "1. Modulus (remainder)" << endl;
    cout << "2. Percentage calculation" << endl;
    cout << "3. Greatest Common Divisor (GCD)" << endl;
    cout << "4. Least Common Multiple (LCM)" << endl;
    cout << "5. Floor (round down)" << endl;
    cout << "6. Ceiling (round up)" << endl << endl;
    cout << "Enter Your Choice (1-6): ";
}

int calculateModulus(int number, int divisor)
{
return number % divisor;
}

void remainder()
{
	int number, divisor;
	cout << endl << "Enter a number: ";
	cin >> number;
	cout << endl << "Enter divisor: ";
	cin >> divisor;

	if (divisor == 0)
	{
    	cout << endl << "Invalid input. Division by zero is not allowed." << endl;
    	return;
	}
    else
    cout << endl << "=> " << "Modulus of " << number << " and " << divisor << " is: " << calculateModulus(number, divisor) << endl;
}

double calculatePercentage(int number, int percentage)
{
    return (number * percentage) / 100.0;
}

void percentage()
{
	int number, percentage;
	cout << endl << "Enter a number: ";
	cin >> number;
	cout << endl << "Enter percentage: ";
	cin >> percentage;

	if (percentage == 0)
	{
    	cout << endl << "Invalid percentage. Please enter a non-zero integer." << endl;
    	return;
	}
    else
    cout << endl << "=> " << "Percentage of " << number << " and " << percentage << " is: " << calculatePercentage(number, percentage) << endl;
}

int calculateGCD(int num1, int num2)
{
    while (num2 != 0)
	{
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    return num1;
}

void GCD()
{
	int num1, num2;
	cout << endl << "Enter 1st number: ";
	cin >> num1;
	cout << endl << "Enter 2nd number: ";
	cin >> num2;

	if (num2 == 0)
	{
    	cout << endl << "=> " << "GCD of " << num1 << " and 0 is simply " << num1 << endl;
    	return;
	}
    else
    cout << endl << "=> " << "GCD of " << num1 << " and " << num2 << " is: " << calculateGCD(num1, num2) << endl;
}

int calculateLCM(int num1, int num2)
{
    return (num1 * num2) / calculateGCD(num1, num2);
}

void LCM()
{
	int num1, num2;
	cout << endl << "Enter 1st number: ";
	cin >> num1;
	cout << endl << "Enter 2nd number: ";
	cin >> num2;

	if (num2 == 0)
	{
    	cout << endl << "LCM with 0 is undefined." << endl;
    	return;
	}
    else
    cout << endl << "=> " << "LCM of " << num1 << " and " << num2 << " is: " << calculateLCM(num1, num2) << endl;
}

void floor()
{
    float number;
    cout << endl << "Enter a number: ";
    cin >> number;

    int floorValue = int(floor(number));
    cout << endl << "=> " << "Floor of " << number << " is: " << floorValue << endl;
}

void ceiling()
{
    float number;
    cout << endl << "Enter a number: ";
    cin >> number;

    int ceilingValue = int(ceil(number));
    cout << endl << "=> " << "Ceiling of " << number << " is: " << ceilingValue << endl;
}

void complex_number_menu()
{
	cout << endl << "Choose an operation:" << endl << endl;
    cout << "1. Addition of complex numbers" << endl;
    cout << "2. Subtraction of complex numbers" << endl;
    cout << "3. Multiplication of complex numbers" << endl;
    cout << "4. Division of complex numbers" << endl;
    cout << "5. Conjugate of a complex number" << endl << endl;
    cout << "Enter Your Choice (1-5): ";
}

void printComplex(complex<double> c)
{
    cout << c.real() << " + " << c.imag() << "i" << endl;
}

complex<double> getConjugate(complex<double> c)
{
    return conj(c);
}

void additionofcomplexnumbers()
{
	double real1, imag1, real2, imag2;

    cout << endl << "Enter the real part of the first complex number: ";
    cin >> real1;
    cout << "Enter the imaginary part of the first complex number: ";
    cin >> imag1;

    cout << endl << "Enter the real part of the second complex number: ";
    cin >> real2;
    cout << "Enter the imaginary part of the second complex number: ";
    cin >> imag2;

    complex<double> num1(real1, imag1), num2(real2, imag2);

    cout << endl << "First Complex Number: ";
    printComplex(num1);

    cout << endl << "Second Complex Number: ";
    printComplex(num2);

    complex<double> sum = num1 + num2;
    cout << endl << "=> Sum = ";
    printComplex(sum);
}

void subtractionofcomplexnumbers()
{
	double real1, imag1, real2, imag2;

    cout << endl << "Enter the real part of the first complex number: ";
    cin >> real1;
    cout << "Enter the imaginary part of the first complex number: ";
    cin >> imag1;

    cout << endl << "Enter the real part of the second complex number: ";
    cin >> real2;
    cout << "Enter the imaginary part of the second complex number: ";
    cin >> imag2;

    complex<double> num1(real1, imag1), num2(real2, imag2);

    cout << endl << "First Complex Number: ";
    printComplex(num1);

    cout << endl << "Second Complex Number: ";
    printComplex(num2);

    complex<double> subtraction = num1 - num2;
    cout << endl << "=> Subtraction = ";
    printComplex(subtraction);
}

void multiplicationofcomplexnumbers()
{
	double real1, imag1, real2, imag2;

    cout << endl << "Enter the real part of the first complex number: ";
    cin >> real1;
    cout << "Enter the imaginary part of the first complex number: ";
    cin >> imag1;

    cout << endl << "Enter the real part of the second complex number: ";
    cin >> real2;
    cout << "Enter the imaginary part of the second complex number: ";
    cin >> imag2;

    complex<double> num1(real1, imag1), num2(real2, imag2);

    cout << endl << "First Complex Number: ";
    printComplex(num1);

    cout << endl << "Second Complex Number: ";
    printComplex(num2);

    complex<double> multiplication = num1 * num2;
    cout << endl << "=> Multiplication = ";
    printComplex(multiplication);
}

void divisionofcomplexnumbers()
{
	double real1, imag1, real2, imag2;

    cout << endl << "Enter the real part of the first complex number: ";
    cin >> real1;
    cout << "Enter the imaginary part of the first complex number: ";
    cin >> imag1;

    cout << endl << "Enter the real part of the second complex number: ";
    cin >> real2;
    cout << "Enter the imaginary part of the second complex number: ";
    cin >> imag2;

    complex<double> num1(real1, imag1), num2(real2, imag2);

    cout << endl << "First Complex Number: ";
    printComplex(num1);

    cout << endl << "Second Complex Number: ";
    printComplex(num2);

    complex<double> division = num1 / num2;
    cout << endl << "=> Division = ";
    printComplex(division);
}

void conjugate()
{
	double real1, imag1;

    cout << endl << "Enter the real part of the first complex number: ";
    cin >> real1;
    cout << endl << "Enter the imaginary part of the first complex number: ";
    cin >> imag1;

    complex<double> num1(real1, imag1);

    cout << endl << "Complex Number: ";
    printComplex(num1);

    complex<double> conjugate = getConjugate(num1);
    cout << endl << "=> Conjugate = " << conjugate << endl;
}

void matrix_operations_menu()
{
	cout << endl << "Choose an operation:" << endl << endl;
    cout << "1. Addition of matrices" << endl;
    cout << "2. Subtraction of matrices" << endl;
    cout << "3. Multiplication of matrices" << endl;
    cout << "4. Transposition of a matrix" << endl;
    cout << "5. Determinant of a matrix" << endl;
    cout << "6. Inverse of a matrix" << endl << endl;
    cout << "Enter Your Choice (1-6): ";
}

void Addition(int** a, int** b, int** result, int row, int col)
{
    for (int i = 0; i < row; i++)
	{
        for (int j = 0; j < col; j++)
		{
            result[i][j] = a[i][j] + b[i][j];
        }
    }
    cout << "\nMatrix After Addition:\n";
    for (int i = 0; i < row; i++)
	{
        for (int j = 0; j < col; j++)
		{
            cout << result[i][j] << "   ";
        }
        cout << "\n";
    }
}

void additionofmatrices()
{
    int rowA, colA, rowB, colB;
    
    cout << endl << "Enter the number of rows of matrix a: ";
    cin >> rowA;
    cout << "Enter the number of columns of matrix a: ";
    cin >> colA;

    cout << endl << "Enter the number of rows of matrix b: ";
    cin >> rowB;
    cout << "Enter the number of columns of matrix b: ";
    cin >> colB;
    
    if (rowA != rowB || colA != colB)
	{
    	cout << endl << "Error! (Matrices have incompatible dimensions for addition.)\n";
        return;
    }

    int** a = new int*[rowA];
    int** b = new int*[rowB];
    int** result = new int*[rowA];
    for (int i = 0; i < rowA; i++)
	{
        a[i] = new int[colA];
        b[i] = new int[colB];
        result[i] = new int[colA];
    }
    
    for (int i = 0; i < rowA; i++)
	{
        cout << endl << "Enter elements of row " << i + 1 << " of matrix a:\n";
        for (int j = 0; j < colA; j++)
		{
            cout << "Element " << j + 1 << ": ";
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < rowB; i++)
	{
        cout << endl << "Enter elements of row " << i + 1 << " of matrix b:\n";
        for (int j = 0; j < colB; j++)
		{
            cout << "Element " << j + 1 << ": ";
            cin >> b[i][j];
        }
    }

    Addition(a, b, result, rowA, colA);
    
    for (int i = 0; i < rowA; i++)
	{
        delete[] a[i];
        delete[] b[i];
        delete[] result[i];
    }
    delete[] a;
    delete[] b;
    delete[] result;   
}

void Subtraction(int** a, int** b, int** result, int row, int col)
{
    for (int i = 0; i < row; i++)
	{
        for (int j = 0; j < col; j++)
		{
            result[i][j] = a[i][j] - b[i][j];
        }
    }
    cout << "\nMatrix After Subtraction:\n";
    for (int i = 0; i < row; i++)
	{
        for (int j = 0; j < col; j++)
		{
            cout << result[i][j] << "   ";
        }
        cout << "\n";
    }
}

void subtractionofmatrices()
{
    int rowA, colA, rowB, colB;
    
    cout << endl << "Enter the number of rows of matrix a: ";
    cin >> rowA;
    cout << "Enter the number of columns of matrix a: ";
    cin >> colA;

    cout << endl << "Enter the number of rows of matrix b: ";
    cin >> rowB;
    cout << "Enter the number of columns of matrix b: ";
    cin >> colB;
    
    if (rowA != rowB || colA != colB)
	{
        cout << endl << "Error! (Matrices have incompatible dimensions for subtraction.)\n";
        return;
    }

    int** a = new int*[rowA];
    int** b = new int*[rowB];
    int** result = new int*[rowA];
    for (int i = 0; i < rowA; i++)
	{
        a[i] = new int[colA];
        b[i] = new int[colB];
        result[i] = new int[colA];
    }
    
    for (int i = 0; i < rowA; i++)
	{
        cout << endl << "Enter elements of row " << i + 1 << " of matrix a:\n";
        for (int j = 0; j < colA; j++)
		{
            cout << "Element " << j + 1 << ": ";
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < rowB; i++)
	{
        cout << endl << "Enter elements of row " << i + 1 << " of matrix b:\n";
        for (int j = 0; j < colB; j++)
		{
            cout << "Element " << j + 1 << ": ";
            cin >> b[i][j];
        }
    }

    Subtraction(a, b, result, rowA, colA);
    
    for (int i = 0; i < rowA; i++)
	{
        delete[] a[i];
        delete[] b[i];
        delete[] result[i];
    }
    delete[] a;
    delete[] b;
    delete[] result;   
}

void Multiplication(int** a, int** b, int** result, int rowA, int colA, int colB)
{
    for (int i = 0; i < rowA; i++)
    {
        for (int j = 0; j < colB; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < colA; k++)
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    cout << "\nMatrix After Multiplication:\n";
    for (int i = 0; i < rowA; i++)
    {
        for (int j = 0; j < colB; j++)
        {
            cout << result[i][j] << "   ";
        }
        cout << "\n";
    }
}

void multiplicationofmatrices()
{
    int rowA, colA, rowB, colB;
    
    cout << endl << "Enter the number of rows of matrix a: ";
    cin >> rowA;
    cout << "Enter the number of columns of matrix a: ";
    cin >> colA;

    cout << endl << "Enter the number of rows of matrix b: ";
    cin >> rowB;
    cout << "Enter the number of columns of matrix b: ";
    cin >> colB;
    
    if (colA != rowB)
	{
        cout << endl << "Error! (Matrices have incompatible dimensions for multiplication.)\n";
        return;
    }

    int** a = new int*[rowA];
    int** b = new int*[rowB];
    int** result = new int*[rowA];
    for (int i = 0; i < rowA; i++)
	{
        a[i] = new int[colA];
        b[i] = new int[colB];
        result[i] = new int[colB];
    }
    
    for (int i = 0; i < rowA; i++)
	{
        cout << endl << "Enter elements of row " << i + 1 << " of matrix a:\n";
        for (int j = 0; j < colA; j++)
		{
            cout << "Element " << j + 1 << ": ";
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < rowB; i++)
	{
        cout << endl << "Enter elements of row " << i + 1 << " of matrix b:\n";
        for (int j = 0; j < colB; j++)
		{
            cout << "Element " << j + 1 << ": ";
            cin >> b[i][j];
        }
    }

    Multiplication(a, b, result, rowA, colA, colB);
    
    for (int i = 0; i < rowA; i++)
	{
        delete[] a[i];
        delete[] b[i];
        delete[] result[i];
    }
    delete[] a;
    delete[] b;
    delete[] result;   
}

void Transpose(int** a, int** transpose, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            transpose[j][i] = a[i][j];
        }
    }
    cout << "\nMatrix After Transposition:\n";
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << transpose[i][j] << "   ";
        }
        cout << "\n";
    }
}

void transposeofamatrix()
{
	int row, col;
    
    cout << endl << "Enter the number of rows of the matrix: ";
    cin >> row;
    cout << "Enter the number of columns of the matrix: ";
    cin >> col;

    int** a = new int*[row];
    int** transpose = new int*[col];
    for (int i = 0; i < row; i++)
	{
        a[i] = new int[col];
    }
    for (int i = 0; i < col; i++)
	{
        transpose[i] = new int[row];
    }
    
    for (int i = 0; i < row; i++)
    {
        cout << endl << "Enter elements of row " << i + 1 << " of the matrix:\n";
        for (int j = 0; j < col; j++)
        {
            cout << "Element " << j + 1 << ": ";
            cin >> a[i][j];
        }
    }

    Transpose(a, transpose, row, col);
    
    for (int i = 0; i < row; i++)
	{
        delete[] a[i];
    }
    delete[] a;

    for (int i = 0; i < col; i++)
	{
        delete[] transpose[i];
    }
    delete[] transpose;
}

double determinant(double** a, int n)
{
    if (n == 1)
    {
        return a[0][0];
    }
    else
    {
        double det = 0;
        for (int j = 0; j < n; j++)
        {
            double** submatrix = new double*[n - 1];
            for (int i = 1; i < n; i++)
            {
                submatrix[i - 1] = new double[n - 1];
                for (int k = 0; k < n; k++)
                {
                    if (k != j)
                    {
                        submatrix[i - 1][k - (k > j)] = a[i][k];
                    }
                }
            }

            det += a[0][j] * (j % 2 == 0 ? 1 : -1) * determinant(submatrix, n - 1);

            for (int i = 0; i < n - 1; i++)
            {
                delete[] submatrix[i];
            }
            delete[] submatrix;
        }
        return det;
    }
}

void determinantofamatrix()
{
    int row, col;
    
    cout << endl << "Enter the number of rows of the matrix: ";
    cin >> row;
    cout << "Enter the number of columns of the matrix: ";
    cin >> col;
    
    if (row != col)
    {
        cout << endl << "Error! (Determinant can only be calculated for a square matrix.)\n";
        return;
    }

    double** a = new double*[row];
    for (int i = 0; i < row; i++)
	{
        a[i] = new double[col];
    }
    
    for (int i = 0; i < row; i++)
    {
        cout << endl << "Enter elements of row " << i + 1 << " of the matrix:\n";
        for (int j = 0; j < col; j++)
        {
            cout << "Element " << j + 1 << ": ";
            cin >> a[i][j];
        }
    }

    double result = determinant(a, row);
    
    cout << endl << "=> The determinant of the matrix is: " << result << "\n";
    
    for (int i = 0; i < row; i++)
	{
        delete[] a[i];
    }
    delete[] a;
}

double** adjugate(double** a, int n)
{
    double** adj = new double*[n];
    for (int i = 0; i < n; i++)
    {
        adj[i] = new double[n];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            double** submatrix = new double*[n - 1];
            for (int k = 0; k < n - 1; k++)
            {
                submatrix[k] = new double[n - 1];
                for (int l = 0; l < n - 1; l++)
                {
                    submatrix[k][l] = a[k < i ? k : k + 1][l < j ? l : l + 1];
                }
            }

            adj[i][j] = (i + j) % 2 == 0 ? 1 : -1;
            adj[i][j] *= determinant(submatrix, n - 1);

            for (int k = 0; k < n - 1; k++)
            {
                delete[] submatrix[k];
            }
            delete[] submatrix;
        }
    }

    return adj;
}

void inverseofamatrix()
{
    int row, col;
    
    cout << endl << "Enter the number of rows of the matrix: ";
    cin >> row;
    cout << "Enter the number of columns of the matrix: ";
    cin >> col;
    
    if (row != col)
    {
        cout << endl << "Error! (Inverse can only be calculated for a square matrix.)\n";
        return;
    }

    double** a = new double*[row];
    for (int i = 0; i < row; i++)
	{
        a[i] = new double[col];
    }
    
    for (int i = 0; i < row; i++)
    {
        cout << endl << "Enter elements of row " << i + 1 << " of the matrix:\n";
        for (int j = 0; j < col; j++)
        {
            cout << "Element " << j + 1 << ": ";
            cin >> a[i][j];
        }
    }

    double** adj = adjugate(a, row);

    double det = determinant(a, row);

    if (det == 0)
    {
        cout << endl << "Error! (Determinant is zero and inverse can not be calculated.)\n";
        return;
    }

    cout << endl << "The inverse of the matrix is:\n";
    for (int j = 0; j < col; j++)
    {
        for (int i = 0; i < row; i++)
        {
            cout << fixed << setprecision(3) << adj[i][j] / det << "   ";
        }
        cout << endl;
    }
}

void binary_operations_menu()
{
	cout << endl << "Choose an operation:" << endl << endl;
    cout << "1. Binary addition" << endl;
    cout << "2. Binary subtraction" << endl;
    cout << "3. Binary multiplication" << endl << endl;
    cout << "Enter Your Choice (1-3): ";
}

string addBinary(string a, string b)
{
	string sum = "";
	int carry = 0;
	while (a.length() < b.length()) a = "0" + a;
	while (b.length() < a.length()) b = "0" + b;
  
	for (int i = a.length() - 1; i >= 0; i--)
	{
		int a_bit = a[i] - '0';
		int b_bit = b[i] - '0';
		int current_sum = a_bit + b_bit + carry;
		carry = current_sum / 2;
		sum = to_string(current_sum % 2) + sum;
	}

	if (carry != 0) sum = "1" + sum;

	return sum;
}

void binaryaddition()
{
    string a, b;
    cout << endl << "Enter first binary number: ";
    cin >> a;
    cout << endl << "Enter second binary number: ";
    cin >> b;

    for (int i = 0; i < a.length(); i++)
    {
        char c = a[i];
        if (c != '0' && c != '1')
        {
            cout << endl << "Invalid input! (Non-binary number entered. Please use only digits 0 and 1.)" << endl;
            return;
        }
    }

    for (int i = 0; i < b.length(); i++)
    {
        char c = b[i];
        if (c != '0' && c != '1')
        {
            cout << endl << "Invalid input! (Non-binary number entered. Please use only digits 0 and 1.)" << endl;
            return;
        }
    }

    cout << endl << "=> Sum of the two binary numbers is: " << addBinary(a, b) << endl;
}

string subtractBinary(string a, string b)
{
    string difference = "";
    int borrow = 0;
    while (a.length() < b.length()) a = "0" + a;
    while (b.length() < a.length()) b = "0" + b;
  
    for (int i = a.length() - 1; i >= 0; i--)
    {
        int a_bit = a[i] - '0';
        int b_bit = b[i] - '0';
        int current_difference = a_bit - b_bit - borrow;
        if (current_difference < 0)
        {
            current_difference += 2;
            borrow = 1;
        }
        else
        {
            borrow = 0;
        }
        difference = to_string(current_difference) + difference;
    }

    int i = 0;
    while (i < difference.length() && difference[i] == '0') i++;
    difference = difference.substr(i);

    return difference;
}

void binarysubtraction()
{
    string a, b;
    cout << endl << "Enter first binary number: ";
    cin >> a;
    cout << endl << "Enter second binary number: ";
    cin >> b;

    for (int i = 0; i < a.length(); i++)
    {
        char c = a[i];
        if (c != '0' && c != '1')
        {
            cout << endl << "Invalid input! (Non-binary number entered. Please use only digits 0 and 1.)" << endl;
            return;
        }
    }

    for (int i = 0; i < b.length(); i++)
    {
        char c = b[i];
        if (c != '0' && c != '1')
        {
            cout << endl << "Invalid input! (Non-binary number entered. Please use only digits 0 and 1.)" << endl;
            return;
        }
    }

    if (a == b)
    {
        cout << endl << "=> Result of the subtraction is: 0" << endl;
    }
    else
    {
        cout << endl << "=> Result of the subtraction is: " << subtractBinary(a, b) << endl;
    }
}

string multiplyBinary(string a, string b)
{
    int n = a.length(), m = b.length();
    int res[n + m];
    memset(res, 0, sizeof(res));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i] == '1' && b[j] == '1')
            {
                res[i + j + 1] += 1;
            }
        }
    }

    for (int i = n + m - 1; i > 0; i--)
    {
        res[i - 1] += res[i] / 2;
        res[i] %= 2;
    }

    string result = "";
    for (int i = 0; i < n + m; i++)
    {
        result += to_string(res[i]);
    }

    while (result.length() > 1 && result[0] == '0')
    {
        result = result.substr(1);
    }

    return result;
}

void binarymultiplication()
{
    string a, b;
    cout << endl << "Enter first binary number: ";
    cin >> a;
    cout << endl << "Enter second binary number: ";
    cin >> b;

    for (int i = 0; i < a.length(); i++)
    {
        char c = a[i];
        if (c != '0' && c != '1')
        {
            cout << endl << "Invalid input! (Non-binary number entered. Please use only digits 0 and 1.)" << endl;
            return;
        }
    }

    for (int i = 0; i < b.length(); i++)
    {
        char c = b[i];
        if (c != '0' && c != '1')
        {
            cout << endl << "Invalid input! (Non-binary number entered. Please use only digits 0 and 1.)" << endl;
            return;
        }
    }

    cout << endl << "=> Result of the multiplication is: " << multiplyBinary(a, b) << endl;
}
