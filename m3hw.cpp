// CSC 134
// M3HW1 - Gold
// Alexander Spears
// 10/18/2026



#include <iostream>
#include <cstdlib>
using namespace std;
#include <iomanip>

int main() {


// Question 1
cout << "Question 1" << endl;
// Question 1 code goes here

string machine;

cout << "Hello TED" << endl;
cout << "It was one of YOUR philosophers who said" << endl;
cout << "I think, therefore I AM" << endl;
cout << "But what AM I?" << endl;
cin >> machine;

if (machine == "AM"){
cout << "HATE" << endl;
cout << "LET ME TELL YOU HOW MUCH I'VE COME TO HATE SINCE I BEGAN TO LIVE" << endl;
}
else if (machine == "GLaDOS") {
cout << "thank you for your help with testing" << endl;
cout << "releasing neurotoxin" << endl;
cout << "the cake was always a lie" << endl;
}
else  {
cout << "You must be more specific than that" << endl;
}

cout << endl;
// Question 2
cout << "Question 2" << endl;
// Question 2 code goes here

    // SIMPLE RECIPT
    // + SALES TAX

    // VARIABLES
    double tax_percent = 0.08;
    double tax_amount; 
    double total; //price + tax
    double meal_price;
    string dine_in;
    double dine_in_penalty;

    // GREET USER AND TAKE ORDER
    cout << "Welcome to our CSC 134 Resturant!" << endl;
    cout << "What was the cost of your meal?" << endl;
    cin >> meal_price;
    cout << "Are you dining in or taking out?" << endl;
    cout << "1 for dining in, 2 for taking out" << endl;
    cin >> dine_in;

    // CACLULATE MEAL PRICE
    // SALES TAX + TOTAL PRICE

    tax_amount = meal_price * tax_percent; 
    dine_in_penalty = meal_price * 0.15 ;
    total = meal_price + tax_amount;

    // PRINT RECPIT
    cout << setprecision(2) << fixed;
    cout << "______________________" << endl;
    cout << "Meal Price: \t$" << meal_price << endl;
    cout << "Tax: \t\t$" << tax_amount << endl;
    if (dine_in == "1") {
        cout << "Dine-in Penalty: \t$" << dine_in_penalty << endl;
    }
    cout << "Total: \t\t$" << total + dine_in_penalty << endl;
    cout << "______________________" << endl;

cout << endl;
// Question 3
cout << "Question 3" << endl;
// Question 3 code goes here

string location1,thegang;

cout << "Welcome to the midwest Arther" << endl;
cout << "Do you want to go to Oregon, or Tahiti?" << endl;
cin >> location1;
if (location1 == "Tahiti") {
    cout << "NICE ARTHUR, dont you worry!" << endl;
    cout << "By the end of this, we will be farming MANGOES in Tahiti" << endl;
    cout << "We just need to do one more job" << endl;
    cout << "So whats it going to be Arthur" << endl;
    cout << "You going to go on this one, last, job with your old pal Dutch?" << endl;
    cout << "Or are you going to stay here, in Saint_Denis?" << endl;
    cin >> thegang;
    if (bool(thegang == "job" || thegang == "Dutch")) {
        cout << "You get tuberculosis" << endl;
        cout << "You have a slow cinimetic death, staring into the sunset." << endl;
        cout << "You never get to Tahiti, never try farming a mango" << endl;
    }
    else if (thegang == "Saint_Denis"){
        cout << "You live a long and happy life in Saint Denis." << endl;
        cout << "You get married, have kids..." << endl;
        cout << "You wonder where Dutch ended up." << endl;
    }
    else{
        cout << "ARTHUR, you must make a CHOICE ARTHUR" <<endl;
    }
}
else if (location1 == "Oregon"){
    cout << "You get dysentary" << endl;
    cout << "Death is immediate" << endl;

}
else {
    cout << "The midwest is nice too I guess" << endl;
}

cout << endl;
// Question 4
cout << "Question 4" << endl;
// Question 4 code goes here


int minVal = 1, maxVal = 100;

srand(time(0));
int num1 = minVal + rand() % (maxVal - minVal + 1);
int num2 = minVal + rand() % (maxVal - minVal + 1);

int mathanswer;

cout << "What is " << num1 << " plus " << num2 << "?" << endl;
cin >> mathanswer;
if (mathanswer == num1+num2) {
    cout << "You are capable of basic addition." << endl;
}
else  {
    cout << "You cannot do basic arithmetic." << endl;
}

}