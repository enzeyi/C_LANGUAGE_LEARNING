C is a strongly-typed language, which means that every variable and constant in a C program must have a specific data type. 
The data type defines the kind of value that the variable or constant can hold, such as an integer, a floating-point number, a character, etc.

Here are some of the most common data types in C:

int: Represents integers (whole numbers) and can hold both positive and negative values.

float: Represents single-precision floating-point numbers and can hold decimal values.

double: Represents double-precision floating-point numbers and can hold decimal values with a higher precision than float.

char: Represents a single character, such as a letter, a digit, or a symbol.

void: Represents the absence of a type. It is used to specify that a function does not return a value or that a pointer does not point to any specific type.

_Bool: Represents a boolean value, which can only be either true or false.

enum: Represents an enumerated type, which is a set of named integer constants.

struct: Represents a composite data type that can hold multiple values of different types.

union: Similar to struct but it only holds one value at a time and the value is stored in the same memory location.

The standard library also provides many other data types like long, short, unsigned int, unsigned long long, size_t, time_t etc.

It's important to choose the appropriate data type for a variable or constant based on the kind of value that it will hold, as it affects the storage and processing of the data.

Also, keep in mind the range of values that the data type can hold, if the value exceeds that range, the program may behave unexpectedly, or even crash.
