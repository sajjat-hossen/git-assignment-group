bool isEven(int num) {
    return num % 2 == 0;
}
bool isPositive(int num) {
    return num > 0;
}
void add(int num1, int num2) 
{
    cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
    cout << "(" << (isEven(num1) ? "Even" : "Odd") << "; " << (isPositive(num1) ? "Positive" : "Negative") << ";) + ";
    cout << "(" << (isEven(num2) ? "Even" : "Odd") << "; " << (isPositive(num2) ? "Positive" : "Negative") << ";) = ";
    cout << "(" << (isEven(num1 + num2) ? "Even" : "Odd") << "; " << (isPositive(num1 + num2) ? "Positive" : "Negative") << ";)" << endl;
}