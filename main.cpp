#include <iostream>
#include <iomanip>
#include <ios>
using namespace std;

int main(){
    int first;
    int second;
    
    std::cout << "what is your first number : " ;
    std::cin >> first ;
    std::cout << "what is your second number : ";
    std::cin >> second;
    std::cout << "your calculations are bellow " << '\n';
    std::cout << " your addition result is : " << (first+second) << std::endl;
    std::cout << " your subrtaction result is : " << (first-second) << std::endl;
    std::cout << " your multiplication result is : " << (first*second) << std::endl;
    std::cout << " your division result is : " << (first/second) << std::endl;
    std::cout << " your modulus result is : " << (first%second) << std::endl;
    

    std::cout << "==========================="<< std::endl;

    int first1;
    int second1;

    std::cout << "what is your first number : ";
    std::cin >> first1;
    std::cout << "your second number is : " ;
    std::cin >> second1;
    std::cout << std::boolalpha;
    std::cout << "you first number is less  : " << (first1<second1) << std::endl;
    std::cout << "your first number is greater  : " << (first1>second1) << std::endl;
    std::cout << "your first number is less or equal : " << (first1<=second1) << std::endl;
    std::cout << "your first number is greater or equal : " << (first1>=second1) << std::endl;
    std::cout << "your first is equal : " << (first1==second1) << std::endl;
    std::cout << "your first is not equal : "<< (first1!=second1) << std::endl;

    std::cout << "==========================="<< std::endl;

    bool a=true;
    bool b=true;
    bool c=false;
    string word;

    std::cout << "do you want to perform logical operation for" << std::endl;
    std::cout <<"a = true" << '\n';
    std::cout << "b = true" << std::endl;
    std::cout <<"c = false" << std::endl;
    std::cout << "yes/No : " << word ;
    std::cin >> word;


    std::cout << "your AND operation for a and c is : " << (a&&c) << std::endl;
    std::cout << "your OR operation for a and b is : " << (a||b) << std::endl;
    std::cout << "your NOT operation for c is : " << (!c) << std::endl;
    std::cout << "your NAND operation for a and b is : " << (!(a&&b)) << std::endl;


    std::cout << "==========================="<< std::endl;
    std::cout << std::endl;


    
    //using postfix function
    int value=1;
    std::cout << "value before inctriment is : " << value++ << std::endl;
    std::cout << "value after increment is : " << value << std::endl;
    value=1;
    std::cout << "value before decrement is : " << value-- << std::endl;
    std::cout << "value after decrement is : " << value << std::endl;

    //usind prefix
    value = 5;
    std::cout << "value before inctriment is : " << value << std::endl;
    std::cout << "value after increment is : " << ++value << std::endl;
    value = 5;
    std::cout << "value before decrement is : " << value << std::endl;
    std::cout << "value after decrement is : " << --value << std::endl;



    return 0;

}