/*
Name: "Ali"
Age: 20
Country: Morocco
*/

#include <iostream>
#include <string>

using namespace std;

int main() {

    // =========================
    // Basic Data Types
    // =========================
    int age = 17;
    string name = "Houssam";
    float height = 1.87f;
    double weight = 75.5;
    bool isStudent = true;
    char grade = 'A';

    cout << boolalpha;

    cout << "Age: " << age << " | int size: " << sizeof(age) << " bytes\n";
    cout << "Name: " << name << " | string object size: " << sizeof(name) << " bytes\n";
    cout << "Name length: " << name.length() << " characters\n";
    cout << "Height: " << height << " | float size: " << sizeof(height) << " bytes\n";
    cout << "Weight: " << weight << " | double size: " << sizeof(weight) << " bytes\n";
    cout << "Is Student: " << isStudent << " | bool size: " << sizeof(isStudent) << " byte\n";
    cout << "Grade: " << grade << " | char size: " << sizeof(grade) << " byte\n";

    cout << "\n=================================\n\n";

    // =========================
    // Arithmetic Operations
    // =========================
    int number1, number2;

    cout << "Enter number1: ";
    cin >> number1;

    cout << "Enter number2: ";
    cin >> number2;

    cout << "Sum: " << number1 + number2 << "\n";
    cout << "Difference: " << number1 - number2 << "\n";
    cout << "Product: " << number1 * number2 << "\n";

    if (number2 != 0) {
        cout << "Quotient: " << static_cast<float>(number1) / number2 << "\n";
        cout << "Remainder: " << number1 % number2 << "\n";
    } else {
        cout << "Division and modulo by zero are not allowed.\n";
    }

    cout << "\n=================================\n\n";

    // =========================
    // Char & ASCII
    // =========================
    char inputChar;
    cout << "Enter a character: ";
    cin >> inputChar;

    cout << "ASCII value: " << static_cast<int>(inputChar) << "\n";

    cout << "\n=================================\n\n";

    // =========================
    // Boolean Logic
    // =========================
    bool isAdult = age >= 18;
    cout << "Is Adult: " << isAdult << "\n";

    cout << "\n=================================\n\n";

    // =========================
    // Typedef
    // =========================
    typedef unsigned long ulong;
    ulong bigNumber = 100000;

    cout << "Unsigned long value: " << bigNumber << "\n";
    cout << "Unsigned long size: " << sizeof(bigNumber) << " bytes\n";

    cout << "\n=================================\n\n";

    // =========================
    // Type Casting
    // =========================
    cout << "Height as int: " << static_cast<int>(height) << "\n";
    cout << "Grade ASCII: " << static_cast<int>(grade) << "\n";

    cout << "\n=================================\n\n";

    // =========================
    // Assignment & Increment Operators
    // =========================
    int x = 10;

    x += 1;
    cout << "x += 1 -> " << x << "\n";

    x -= 2;
    cout << "x -= 2 -> " << x << "\n";

    x *= 2;
    cout << "x *= 2 -> " << x << "\n";

    cout << "\nPre-increment ++x: " << ++x << "\n";
    cout << "Post-increment x++: " << x++ << "\n";
    cout << "After post-increment: " << x << "\n";

    cout << "\n=================================\n\n";

    // =========================
    // Mini Application: Average & Result
    // =========================
    float exam1, exam2, exam3;

    cout << "Exam 1: ";
    cin >> exam1;

    cout << "Exam 2: ";
    cin >> exam2;

    cout << "Exam 3: ";
    cin >> exam3;

    float average = (exam1 + exam2 + exam3) / 3;
    bool success = average >= 10;

    cout << "Average: " << average << "\n";
    cout << "Result: " << (success ? "Successful" : "Failed") << "\n";

    





	int number1 , calc1;
	
	cout << "number: ";
	cin >> number1;

	calc1 =  number1 % 2  ;
	
	if (calc1 == 0)
		cout << number1 << " positev number\n";
	else
		cout << number1 << " negatev number\n";

	

    return 0;
}
