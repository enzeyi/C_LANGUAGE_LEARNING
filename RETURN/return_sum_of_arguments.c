int add(int a, int b) {
    return a + b;
}
//here the  function add() takes two integer arguments and returns their sum

//in the main() function below you can call the add() function and store the returned value in a variable

int main() {
    int result = add(3, 4);
    printf("%d", result);
    return 0;
}

// if a function with a non-void return type doesn't have a return statement or if the return statement doesn't return a value, it will result in an error during the compilation.
