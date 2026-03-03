#include <iostream>

using namespace std;


class caculator{

public:
    double add(double a,double b) {
        return a+b ;}

    double subtract(double a,double b) {
    return a-b;}


        double multiply(double a ,double b ) {
        return a*b;}

        double divide (double a ,double b ) {

            if(b !=0)
            return a/b;
            else{ cout << "error! division by zero does not exist" << endl;

        }
            return 0;}

};

    int main() {
    caculator calc;
    double num1,num2;
   int choice;

    cout << "simple caculator" << endl;

    cout << "1. Addition" << endl;
    cout << "2. Subtraction " << endl;

    cout << "3. Multiplication" << endl;
    cout << "4. Division  " << endl ;

    cout << "enter your choice" << endl;
    cin >> choice;


    cout << "enter two numbers : " ;
    cin >> num1 >> num2 ;

    switch(choice) {
    case 1:
        cout << "result: " <<
        calc.add(num1,num2);
        break ;

    case 2:
        cout << "result :" <<
        calc.subtract(num1,num2);
        break ;

    case 3:
        cout << "result :";
        calc.multiply(num1,num2);
        break ;

    case 4:
        cout << "result : ";
        calc.divide(num1,num2);
        break ;
    default :
    cout << "invalid choice!";

    }

return 0;}





