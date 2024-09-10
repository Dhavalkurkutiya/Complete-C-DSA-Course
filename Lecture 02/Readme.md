### Variables, Data Types & Operators in C++ | DSA

In C++ programming, understanding **variables**, **data types**, and **operators** is crucial, as they form the basic building blocks for writing efficient and scalable code. These concepts play a significant role in data structures and algorithms (DSA) by helping you manage, store, and manipulate data effectively.

---

## 1. Variables in C++

A **variable** is a container for storing data values. The type of data a variable can hold is defined by its **data type**. In C++, variables must be declared before they are used.

### Declaration and Initialization

Variables are declared by specifying the data type, followed by the variable name, and optionally initializing it with a value.

```cpp

int age = 25;   // Declaring an integer variable and initializing it

float salary = 5000.75f;  // Declaring a float variable

```

- **Variable Naming Rules**:

  - Can contain letters, digits, and underscores (`_`).

  - Must start with a letter or an underscore, not a digit.

  - C++ is case-sensitive, so `Age` and `age` are different variables.

### Types of Variables

1\. **Local Variables**: Declared inside a function and only accessible within that function.

2\. **Global Variables**: Declared outside all functions and accessible from any function within the program.

3\. **Static Variables**: Retain their value between function calls.

4\. **Constant Variables**: Cannot be modified once initialized.

```cpp

#include <iostream>

using namespace std;

int globalVar = 100;  // Global variable

void demo() {

    static int staticVar = 0;  // Static variable

    cout << "Static Variable: " << ++staticVar << endl;

}

int main() {

    const float PI = 3.14159f;  // Constant variable

    int localVar = 5;  // Local variable

    demo();

    demo();  // Static variable retains value between calls

    cout << "Global Variable: " << globalVar << endl;

    cout << "Local Variable: " << localVar << endl;

    cout << "Constant PI: " << PI << endl;

    return 0;

}

```

---

## 2. Data Types in C++

**Data types** specify the type of data a variable can store. C++ supports various data types, including both primitive and derived types.

### Primitive Data Types

1\. **Integer Types**: Store whole numbers (positive or negative).

   - `int`, `short`, `long`, `long long`.

   ```cpp

   int age = 30;

   long largeNumber = 1234567890L;

   ```

2\. **Floating-Point Types**: Store numbers with decimal points.

   - `float`, `double`, `long double`.

   ```cpp

   float temperature = 36.5f;

   double pi = 3.1415926535;

   ```

3\. **Character Type**: Stores a single character.

   - `char`.

   ```cpp

   char grade = 'A';

   ```

4\. **Boolean Type**: Stores `true` or `false`.

   - `bool`.

   ```cpp

   bool isPassed = true;

   ```

### Derived Data Types

1\. **Arrays**: Stores a collection of elements of the same data type.

   ```cpp

   int arr[5] = {1, 2, 3, 4, 5};

   ```

2\. **Pointers**: Stores the memory address of another variable.

   ```cpp

   int x = 10;

   int* ptr = &x;

   ```

3\. **Structures**: Group of variables under a single name.

   ```cpp

   struct Person {

       string name;

       int age;

   };

   ```

4\. **Classes**: Blueprint for creating objects.

   ```cpp

   class Car {

       public:

       string model;

       int year;

   };

   ```

### Example: Using Different Data Types

```cpp

#include <iostream>

using namespace std;

int main() {

    int a = 10;        // Integer

    float b = 5.5f;    // Floating point

    char grade = 'A';  // Character

    bool isTrue = true; // Boolean

    cout << "Integer: " << a << endl;

    cout << "Float: " << b << endl;

    cout << "Char: " << grade << endl;

    cout << "Boolean: " << isTrue << endl;

    return 0;

}

```

---

## 3. Operators in C++

Operators are symbols used to perform operations on variables and values. C++ supports several types of operators:

### Arithmetic Operators

These operators perform basic mathematical operations.

| Operator | Description        |

|----------|--------------------|

| `+`      | Addition           |

| `-`      | Subtraction        |

| `*`      | Multiplication     |

| `/`      | Division           |

| `%`      | Modulus (remainder)|

```cpp

int a = 10, b = 3;

cout << "Addition: " << (a + b) << endl;        // 13

cout << "Subtraction: " << (a - b) << endl;     // 7

cout << "Multiplication: " << (a * b) << endl;  // 30

cout << "Division: " << (a / b) << endl;        // 3

cout << "Modulus: " << (a % b) << endl;         // 1

```

### Relational (Comparison) Operators

These operators compare values and return a boolean (`true` or `false`).

| Operator | Description           |

|----------|-----------------------|

| `==`     | Equal to              |

| `!=`     | Not equal to          |

| `>`      | Greater than          |

| `<`      | Less than             |

| `>=`     | Greater than or equal |

| `<=`     | Less than or equal    |

```cpp

int a = 10, b = 5;

cout << (a > b) << endl;   // 1 (true)

cout << (a == b) << endl;  // 0 (false)

```

### Logical Operators

Logical operators are used to combine multiple conditions.

| Operator | Description       |

|----------|-------------------|

| `&&`     | Logical AND       |

| `||`     | Logical OR        |

| `!`      | Logical NOT       |

```cpp

int a = 10, b = 5;

cout << (a > b && b > 0) << endl;  // 1 (true)

cout << (a > b || b < 0) << endl;  // 1 (true)

cout << !(a == b) << endl;         // 1 (true)

```

### Assignment Operators

Used to assign values to variables.

| Operator | Description            |

|----------|------------------------|

| `=`      | Assigns a value         |

| `+=`     | Adds and assigns        |

| `-=`     | Subtracts and assigns   |

| `*=`     | Multiplies and assigns  |

| `/=`     | Divides and assigns     |

```cpp

int a = 5;

a += 3;  // a = a + 3; Now a is 8

a *= 2;  // a = a * 2; Now a is 16

```

### Increment and Decrement Operators

These operators increase or decrease the value of a variable by 1.

| Operator | Description        |

|----------|--------------------|

| `++`     | Increment by 1     |

| `--`     | Decrement by 1     |

```cpp

int a = 5;

a++;   // a becomes 6

a--;   // a becomes 5

```

---

## Example: C++ Program Using Variables, Data Types, and Operators

```cpp

#include <iostream>

using namespace std;

int main() {

    // Variables and Data Types

    int a = 10, b = 3;

    float c = 4.5;

    char letter = 'A';

    bool isPassed = true;

    // Arithmetic Operations

    cout << "Addition: " << (a + b) << endl;        // 13

    cout << "Subtraction: " << (a - b) << endl;     // 7

    cout << "Multiplication: " << (a * b) << endl;  // 30

    cout << "Division: " << (a / b) << endl;        // 3

    cout << "Modulus: " << (a % b) << endl;         // 1

    // Relational Operations

    cout << "Is a > b: " << (a > b) << endl;        // 1 (true)

    // Logical Operations

    cout << "Is a > b AND b > 0: " << (a > b && b > 0) << endl;  // 1 (true)

    // Increment and Decrement

    cout << "a before increment: " << a << endl;    // 10

    a++;

    cout << "a after increment: " << a << endl;     // 11

    return 0;

}

```

---

### Conclusion

In C++, understanding **variables**, **data types**, and **operators** is fundamental to developing algorithms and solving