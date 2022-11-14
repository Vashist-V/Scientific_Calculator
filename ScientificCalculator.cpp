#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

void addition();
void subtraction();
void multiplication();
void division();
void factorial();
void power();
void square();
void cube();
void squareroot();

int main(){

    std::cout << "Welcome to the scientific calculator, developed by Vashist!!\n" <<endl;
    cout << "Press 0 to quit the program"<<endl;
    std::cout << "Enter 1 for addition \n";
    std::cout << "Enter 2 for subtractiontion \n";
    std::cout << "Enter 3 for multiplication \n";
    std::cout << "Enter 4 for division \n";
    std::cout << "Enter 5 for factorial \n";
    std::cout << "Enter 6 for power \n";
    std::cout << "Enter 7 for square \n";
    std::cout << "Enter 8 for cube \n";
    std::cout << "Enter 9 for squareroot \n\n";
    int choice;
    while(1){

    std::cout << "Enter your choice : ";
    cin >> choice;

    switch(choice){
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
        case 5:
            factorial();
            break;
        case 6:
            power();
            break;
        case 7:
            square();
            break;
        case 8:
            cube();
            break;
        case 9:
            squareroot();
            break;
        case 0:
            exit(0);
            break;

        default:
            cout << "Wrong Choice. Enter valid Number \n\n";
            break;
    }
    }
    return 0;
}

void addition(){
    cout << "Enter the numbers you want to add";
    int a,b;
    cin>>a>>b;
    cout << "The addition of "<<a<<" and "<<b<<" is "<<a+b<<endl;
}

void subtraction(){
    cout << "Enter the numbers you want to subtract: ";
    int a,b;
    cin>>a>>b;
    cout << "The subtraction of "<<a<<" and "<<b<<" is "<<a-b<<endl;
}

void multiplication(){
    cout << "Enter the numbers you want to multiply: ";
    int a,b;
    cin>>a>>b;
    cout << "The multiplication of "<<a<<" and "<<b<<" is "<<a*b<<endl;
}

void division(){
    cout << "Enter the numbers you want to divide: ";
    int a,b;
    cin>>a>>b;
    cout << "The division of "<<a<<" and "<<b<<" is "<<(float)a/(float)b<<endl;
}

void factorial(){
    cout << "Enter the number you want factorial of: ";
    int n;
    cin>>n;
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact = fact * i;
    }
    cout << "The factorial of "<<n<< " is "<<fact<<endl;
}

void power(){
    cout<< "Enter the base and exponent: ";
    double b,e;
    cin>>b>>e;
    double power = pow(b,e);
    cout << "The solution  for base "<<b<<" and exponent "<<e<<" is "<<power<<endl;
}

void square(){
    cout<< "Enter the number you want to find the square of: ";
    double b;
    cin>>b;
    double power = pow(b,2);
    cout << "The square of "<<b<<" is "<<power<<endl;
}

void cube(){
    cout<< "Enter the number you want to find the cube of: ";
    double b;
    cin>>b;
    double power = pow(b,3);
    cout << "The cube of "<<b<<" is "<<power<<endl;
}

void squareroot(){
    cout << " Enter the number you want squareroot of: ";
    double n;
    cin>>n;
    double squareRoot = sqrt(n);
    cout << " The squareroot of "<<n<<" is "<<squareRoot<<endl;

}