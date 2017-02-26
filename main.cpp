/*
 * De_Leon_Adam_PA1.cpp
 *
 *  Created on: Jan 16, 2014
 *      Author: Adam C. De Leon
 *      Net ID: acd21
 *      TX State ID: A00490677
 *      CS 2308 section 251
 *
 *      Description: The function of this program is to read in ten integers,
 *      each of which is between 10 and 100 inclusive. As each number is read,
 *      the number is stored if and only if the number is not a duplicate of
 *      a number that has already been read. The program then uses functions
 *      to display the array, display the array in reverse, display all of the
 *      even numbers stored in the array, display all of the odd numbers
 *      stored in the array, sum and display the sum of the elements in the
 *      array, and finally it displays all of the prime numbers from 1 to the
 *      sum of the elements in the array.
 */
# include <iostream>
# include <cmath>

using namespace std;

const int SIZE = 10;     //Size allocated for array storage.

void DisplayArray(int[]);    //Prototypes for functions
void ReverseArray(int[]);

void DisplayEven(int[]);

void DisplayOdd(int[]);

int SumFunction(int[]);

void DisplayPrime(int);

int main() {

    int number[SIZE];   //Storage array
    int entry;            //variable declarations
    int sum;

    //Prompt user to enter number, while validating user input.
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter a number: ";
        cin >> entry;
        number[i] = entry;
        while (number[i] < 10 || number[i] > 100) {
            cout << "Invalid  Number - Number should be between 10 and "
                    "100." << endl;
            cin >> number[i];
        }
        for (int j = 0; j < i; j++) {
            while (number[i] == number[j]) {
                cout << "Duplicate Number." << endl;
                cin >> number[i];
            }
        }
    }

    //Function calls to execute program.
    cout << "The array is :";
    DisplayArray(number);
    cout << endl;

    cout << "The array in reverse order :";
    ReverseArray(number);
    cout << endl;

    cout << "All even numbers in the array :";
    DisplayEven(number);
    cout << endl;

    cout << "All odd numbers in the array :";
    DisplayOdd(number);
    cout << endl;

    cout << "The sum of the numbers in the array :";
    sum = SumFunction(number);

    cout << "All prime numbers between 1 and xxx are :";
    DisplayPrime(sum);

    return 0;
}

/*****************************************************************************
 * DisplayArray - This function displays the array that was filled by the
 * user.
 */
void DisplayArray(int number[]) {
    for (int i = 0; i < SIZE; i++) {
        cout << number[i] << " ";
    }
}

/*****************************************************************************
 * ReverseArray - This function displays the array in reverse order.
 */
void ReverseArray(int number[]) {
    for (int i = (SIZE - 1); i >= 0; i--) {
        cout << number[i] << " ";
    }
}

/*****************************************************************************
 * DisplayEven = This function displays the even numbers that are stored in
 * the array.
 */
void DisplayEven(int number[]) {
    for (int i = 0; i < SIZE; i++) {
        if (i % 2 == 0) {
            cout << number[i] << " ";
        }
    }
}

/*****************************************************************************
 * DisplayOdd - This function displays the odd numbers stored in the array.
 */
void DisplayOdd(int number[]) {
    for (int i = 0; i < SIZE; i++) {
        if (i % 2 != 0) {
            cout << number[i] << " ";
        }
    }
}

/*****************************************************************************
 * SumFunction - This function calculates and displays the sum of the elements
 * in the array.
 */
int SumFunction(int number[]) {
    int total;

    total = 0;     //Initialization for summation.
    for (int i = 0; i < SIZE; i++) {
        total = total + number[i];
    }
    cout << total << endl;

    return total;
}

/*****************************************************************************
 * DisplayPrime - This function displays the prime numbers from 1 to the sum
 * of all of the numbers in the array.
 */
void DisplayPrime(int total) {
    cout << "1 ";
    for (int i = 2; i < total; i++) {
        for (int j = 2; j < i; j++) {
            if (i % j == 0)
                break;
            else if (i == j + 1)
                cout << i << " ";
        }
    }
}



