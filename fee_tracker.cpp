#include "fee_tracker.h"
#include <iostream>
#include <fstream>

using namespace std;

void addFee()
{
    string id;
    float totalFee, paidFee, balance;

    cout << "\nEnter Student ID: ";
    cin >> id;

    cout << "Enter Total Fee: ";
    cin >> totalFee;

    cout << "Enter Paid Fee: ";
    cin >> paidFee;

    balance = totalFee - paidFee;

    ofstream file("fees.txt", ios::app);

    file << id << ","
         << totalFee << ","
         << paidFee << ","
         << balance << endl;

    file.close();

    cout << "\nFee Record Added Successfully!\n";
}

void viewFees()
{
    ifstream file("fees.txt");

    string line;

    cout << "\n===== FEE RECORDS =====\n";

    while(getline(file, line))
    {
        cout << line << endl;
    }

    file.close();
}
