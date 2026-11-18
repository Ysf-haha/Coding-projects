#include <iostream>
using namespace std;

/*
Luhn's algorithm will be used, which works as follows:
1. Double every second digit from right to left
2. If doubled number is 2 digits, split them
3. Add all single digits from step 1
4. Add all odd numbered digits from right to left (use the original number)
5. Sum results from steps 3 and 4
6. If step 5 is divisible by 10, the number is valid
*/

int getDigit(const int number);
int sumOddDigits(const string cardNumber);
int sumEvenDigits(const string cardNumber);

int main(){
    string cardNum;
    int result = 0;
    cout << "---------------------------------------------" << endl;
    cout << "Enter a credit card number: ";
    cin >> cardNum;
    cout << "---------------------------------------------" << endl;
    result = sumEvenDigits(cardNum) + sumOddDigits(cardNum);
    if (result % 10 == 0){
        cout << "This card number is valid" << endl;
    } 
    else{
        cout << "This card number is invalid" << endl;
    }
    cout << "---------------------------------------------" << endl;
    return 0;
}

int getDigit(const int number){
    return (number % 10 + ((number / 10) % 10));
}
int sumOddDigits(const string cardNumber){
    int sum = 0;
    for (int i = cardNumber.size() - 1; i >= 0; i -= 2){
        sum += cardNumber[i] - '0';
    }
    return sum;
}
int sumEvenDigits(const string cardNumber){
    int sum = 0;
    for (int i = cardNumber.size() - 2; i >= 0; i -= 2){
        sum += getDigit((cardNumber[i] - '0')* 2);
    }
    return sum;
}