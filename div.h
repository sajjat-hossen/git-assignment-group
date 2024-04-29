void division(double num1, double num2) {
    //num1
    if(num1 % 2 == 0){
        cout << "(Even; ";
        if(num1 >= 0){
            cout << "Positive;) / ";
        }
        else cout << "Negative;) / ";
    } else {
        cout << "(Odd; ";
        if(num1 >= 0){
            cout << "Positive;) / ";
        }
        else cout << "Negative;) / ";
    }
 //num2
   if(num2 % 2 == 0){
        cout << "(Even; ";
        if(num2 >= 0){
            cout << "Positive;) = ";
        }
        else cout << "Negative;) = ";
    } else {
        cout << "(Odd; ";
        if(num2 >= 0){
            cout << "Positive;) = ";
        }
        else cout << "Negative;) = ";
    }
    //num1*num2
     double ans = num1 / num2;
    if(ans % 2 == 0){
        cout << "(Even; ";
        if(ans >= 0){
            cout << "Positive;)";
        }
        else cout << "Negative;)";
    } else {
        cout << "(Odd; ";
        if(ans >= 0){
            cout << "Positive;)";
        }
        else cout << "Negative;)";
    }
}
