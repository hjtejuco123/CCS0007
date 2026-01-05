#Functions in C++

## 1. **Built-in Functions**
Built-in functions are predefined functions provided by the C++ standard library. These functions are ready to use and do not require any additional code to define them.

### Example Programs:
#### Program 1: Using `sqrt()` from `<cmath>`
```cpp
#include <iostream>
#include <cmath> // For sqrt()
using namespace std;

int main() {
    double num = 25.0;
    cout << "Square root of " << num << " is " << sqrt(num) << endl;
    return 0;
}
```

#### Program 2: Using `pow()` from `<cmath>`
```cpp
#include <iostream>
#include <cmath> // For pow()
using namespace std;

int main() {
    double base = 2.0, exponent = 3.0;
    cout << base << " raised to the power " << exponent << " is " << pow(base, exponent) << endl;
    return 0;
}
```

#### Program 3: Using `toupper()` from `<cctype>`
```cpp
#include <iostream>
#include <cctype> // For toupper()
using namespace std;

int main() {
    char ch = 'a';
    cout << "Uppercase of " << ch << " is " << (char)toupper(ch) << endl;
    return 0;
}
```

#### Program 4: Using `abs()` from `<cstdlib>`
```cpp
#include <iostream>
#include <cstdlib> // For abs()
using namespace std;

int main() {
    int num = -10;
    cout << "Absolute value of " << num << " is " << abs(num) << endl;
    return 0;
}
```

#### Program 5: Using `rand()` from `<cstdlib>`
```cpp
#include <iostream>
#include <cstdlib> // For rand()
#include <ctime>   // For time()
using namespace std;

int main() {
    srand(time(0)); // Seed random number generator
    cout << "Random number: " << rand() % 100 << endl; // Random number between 0-99
    return 0;
}
```

---

## 2. **Understanding User-defined Functions**
User-defined functions are created by the programmer to perform specific tasks. They help in modularizing code and improving reusability.

### Example Programs:
#### Program 1: Simple Function to Print a Message
```cpp
#include <iostream>
using namespace std;

void printMessage() {
    cout << "Hello, this is a user-defined function!" << endl;
}

int main() {
    printMessage();
    return 0;
}
```

#### Program 2: Function to Add Two Numbers
```cpp
#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    int x = 5, y = 7;
    cout << "Sum of " << x << " and " << y << " is " << add(x, y) << endl;
    return 0;
}
```

#### Program 3: Function to Check Even or Odd
```cpp
#include <iostream>
using namespace std;

void checkEvenOdd(int num) {
    if (num % 2 == 0)
        cout << num << " is even." << endl;
    else
        cout << num << " is odd." << endl;
}

int main() {
    int n = 10;
    checkEvenOdd(n);
    return 0;
}
```

#### Program 4: Function to Calculate Factorial
```cpp
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int num = 5;
    cout << "Factorial of " << num << " is " << factorial(num) << endl;
    return 0;
}
```

#### Program 5: Function to Swap Two Numbers
```cpp
#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swapNumbers(x, y);
    cout << "After swap: x = " << x << ", y = " << y << endl;
    return 0;
}
```

---

## 3. **Creating User-defined Functions**
This section focuses on how to create and call user-defined functions.

### Example Programs:
#### Program 1: Function to Multiply Two Numbers
```cpp
#include <iostream>
using namespace std;

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int x = 6, y = 8;
    cout << "Product of " << x << " and " << y << " is " << multiply(x, y) << endl;
    return 0;
}
```

#### Program 2: Function to Reverse a String
```cpp
#include <iostream>
#include <string>
using namespace std;

string reverseString(string str) {
    string reversed = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed += str[i];
    }
    return reversed;
}

int main() {
    string text = "C++ Programming";
    cout << "Reversed string: " << reverseString(text) << endl;
    return 0;
}
```

#### Program 3: Function to Find Maximum of Three Numbers
```cpp
#include <iostream>
using namespace std;

int findMax(int a, int b, int c) {
    return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}

int main() {
    int x = 15, y = 25, z = 10;
    cout << "Maximum: " << findMax(x, y, z) << endl;
    return 0;
}
```

#### Program 4: Function to Count Vowels in a String
```cpp
#include <iostream>
#include <string>
using namespace std;

int countVowels(string str) {
    int count = 0;
    for (char ch : str) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            count++;
    }
    return count;
}

int main() {
    string text = "hello world";
    cout << "Number of vowels: " << countVowels(text) << endl;
    return 0;
}
```

#### Program 5: Function to Generate Fibonacci Sequence
```cpp
#include <iostream>
using namespace std;

void generateFibonacci(int n) {
    int a = 0, b = 1, next;
    cout << "Fibonacci sequence: ";
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
}

int main() {
    int terms = 10;
    generateFibonacci(terms);
    return 0;
}
```

---

## 4. **Void Functions**
Void functions do not return any value. They are used for performing actions like printing messages or modifying variables.

### Example Programs:
#### Program 1: Void Function to Print Hello World
```cpp
#include <iostream>
using namespace std;

void printHelloWorld() {
    cout << "Hello, World!" << endl;
}

int main() {
    printHelloWorld();
    return 0;
}
```

#### Program 2: Void Function to Display Array Elements
```cpp
#include <iostream>
using namespace std;

void displayArray(int arr[], int size) {
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    displayArray(arr, size);
    return 0;
}
```

#### Program 3: Void Function to Modify Variables
```cpp
#include <iostream>
using namespace std;

void incrementByOne(int &num) {
    num++;
}

int main() {
    int x = 10;
    cout << "Before increment: " << x << endl;
    incrementByOne(x);
    cout << "After increment: " << x << endl;
    return 0;
}
```

#### Program 4: Void Function to Print Multiplication Table
```cpp
#include <iostream>
using namespace std;

void printMultiplicationTable(int num) {
    cout << "Multiplication table of " << num << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << (num * i) << endl;
    }
}

int main() {
    int n = 5;
    printMultiplicationTable(n);
    return 0;
}
```

#### Program 5: Void Function to Swap Two Strings
```cpp
#include <iostream>
#include <string>
using namespace std;

void swapStrings(string &str1, string &str2) {
    string temp = str1;
    str1 = str2;
    str2 = temp;
}

int main() {
    string s1 = "C++", s2 = "Programming";
    cout << "Before swap: s1 = " << s1 << ", s2 = " << s2 << endl;
    swapStrings(s1, s2);
    cout << "After swap: s1 = " << s1 << ", s2 = " << s2 << endl;
    return 0;
}
```

---

## 5. **Creating Functions with Parameters**
Functions can take parameters to make them more flexible and reusable.

### Example Programs:
#### Program 1: Function to Add Two Numbers
```cpp
#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    int x = 5, y = 7;
    cout << "Sum: " << add(x, y) << endl;
    return 0;
}
```

#### Program 2: Function to Calculate Area of Rectangle
```cpp
#include <iostream>
using namespace std;

int calculateArea(int length, int width) {
    return length * width;
}

int main() {
    int l = 10, w = 5;
    cout << "Area: " << calculateArea(l, w) << endl;
    return 0;
}
```

#### Program 3: Function to Check Prime Number
```cpp
#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n = 17;
    cout << n << " is " << (isPrime(n) ? "prime" : "not prime") << endl;
    return 0;
}
```

#### Program 4: Function to Concatenate Two Strings
```cpp
#include <iostream>
#include <string>
using namespace std;

string concatenateStrings(string s1, string s2) {
    return s1 + " " + s2;
}

int main() {
    string str1 = "Hello", str2 = "World";
    cout << "Concatenated string: " << concatenateStrings(str1, str2) << endl;
    return 0;
}
```

#### Program 5: Function to Find Largest Element in Array
```cpp
#include <iostream>
using namespace std;

int findLargest(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main() {
    int arr[] = {3, 5, 7, 2, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Largest element: " << findLargest(arr, size) << endl;
    return 0;
}
```

---

## 6. **Return Statement**
The `return` statement is used to exit a function and optionally return a value to the caller.

### Example Programs:
#### Program 1: Function to Return Cube of a Number
```cpp
#include <iostream>
using namespace std;

int cube(int num) {
    return num * num * num;
}

int main() {
    int n = 3;
    cout << "Cube of " << n << " is " << cube(n) << endl;
    return 0;
}
```

#### Program 2: Function to Return Average of Two Numbers
```cpp
#include <iostream>
using namespace std;

double average(double a, double b) {
    return (a + b) / 2;
}

int main() {
    double x = 10.5, y = 20.5;
    cout << "Average: " << average(x, y) << endl;
    return 0;
}
```

#### Program 3: Function to Return Length of a String
```cpp
#include <iostream>
#include <string>
using namespace std;

int getStringLength(string str) {
    return str.length();
}

int main() {
    string text = "C++ Programming";
    cout << "Length of string: " << getStringLength(text) << endl;
    return 0;
}
```

#### Program 4: Function to Return Sum of Digits
```cpp
#include <iostream>
using namespace std;

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int n = 12345;
    cout << "Sum of digits: " << sumOfDigits(n) << endl;
    return 0;
}
```

#### Program 5: Function to Return GCD of Two Numbers
```cpp
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int x = 56, y = 98;
    cout << "GCD of " << x << " and " << y << " is " << gcd(x, y) << endl;
    return 0;
}
```

---

## 7. **Default Arguments**
Default arguments allow functions to have optional parameters with predefined values.

### Example Programs:
#### Program 1: Function with Default Argument for Power
```cpp
#include <iostream>
#include <cmath>
using namespace std;

double power(double base, int exponent = 2) {
    return pow(base, exponent);
}

int main() {
    cout << "Power of 3: " << power(3) << endl; // Default exponent is 2
    cout << "Power of 3^4: " << power(3, 4) << endl;
    return 0;
}
```

#### Program 2: Function with Default Argument for Price Calculation
```cpp
#include <iostream>
using namespace std;

double calculatePrice(double price, double taxRate = 0.1) {
    return price + (price * taxRate);
}

int main() {
    cout << "Price with default tax: " << calculatePrice(100) << endl;
    cout << "Price with custom tax: " << calculatePrice(100, 0.15) << endl;
    return 0;
}
```

#### Program 3: Function with Default Argument for Greeting
```cpp
#include <iostream>
#include <string>
using namespace std;

void greet(string name, string greeting = "Hello") {
    cout << greeting << ", " << name << "!" << endl;
}

int main() {
    greet("Hadji");               // Default greeting
    greet("Jane", "Good morning"); // Custom greeting
    return 0;
}
```

#### Program 4: Function with Default Argument for Division
```cpp
#include <iostream>
using namespace std;

double divide(double numerator, double denominator = 1) {
    return numerator / denominator;
}

int main() {
    cout << "Division: " << divide(10) << endl; // Default denominator is 1
    cout << "Division: " << divide(10, 2) << endl;
    return 0;
}
```

#### Program 5: Function with Default Argument for Printing Stars
```cpp
#include <iostream>
using namespace std;

void printStars(int count = 10) {
    for (int i = 0; i < count; i++) {
        cout << "*";
    }
    cout << endl;
}

int main() {
    printStars();      // Default count is 10
    printStars(5);     // Custom count
    return 0;
}
```

---

## 8. **Function Overloading**
Function overloading allows multiple functions with the same name but different parameter lists.

### Example Programs:
#### Program 1: Overloaded Function to Add Numbers
```cpp
#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int main() {
    cout << "Sum (int): " << add(5, 7) << endl;
    cout << "Sum (double): " << add(5.5, 7.3) << endl;
    return 0;
}
```

#### Program 2: Overloaded Function to Calculate Area
```cpp
#include <iostream>
using namespace std;

int area(int side) {
    return side * side;
}

double area(double radius) {
    return 3.14159 * radius * radius;
}

int main() {
    cout << "Area of square: " << area(5) << endl;
    cout << "Area of circle: " << area(3.5) << endl;
    return 0;
}
```

#### Program 3: Overloaded Function to Print Data
```cpp
#include <iostream>
#include <string>
using namespace std;

void printData(int num) {
    cout << "Integer: " << num << endl;
}

void printData(string str) {
    cout << "String: " << str << endl;
}

int main() {
    printData(10);
    printData("Hello");
    return 0;
}
```

#### Program 4: Overloaded Function to Multiply Numbers
```cpp
#include <iostream>
using namespace std;

int multiply(int a, int b) {
    return a * b;
}

double multiply(double a, double b) {
    return a * b;
}

int main() {
    cout << "Multiply (int): " << multiply(3, 4) << endl;
    cout << "Multiply (double): " << multiply(3.5, 2.5) << endl;
    return 0;
}
```

#### Program 5: Overloaded Function to Concatenate Strings
```cpp
#include <iostream>
#include <string>
using namespace std;

string concatenate(string s1, string s2) {
    return s1 + s2;
}

string concatenate(string s1, string s2, string s3) {
    return s1 + s2 + s3;
}

int main() {
    cout << "Concatenation (2 strings): " << concatenate("Hello", "World") << endl;
    cout << "Concatenation (3 strings): " << concatenate("Hello", " ", "World") << endl;
    return 0;
}
```

---

