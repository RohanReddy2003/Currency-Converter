#include <iostream>
#include <fstream>
#include <sstream>
#include <windows.h>
using namespace std;

class PhoneBook {
private:
    string Name, PhNo, Address;

public:
    PhoneBook() : Name(""), PhNo(""), Address("") {}

    void setName(string name) { Name = name; }
    void setPhNo(string phNo) { PhNo = phNo; }
    void setAddress(string address) { Address = address; }

    string getName() { return Name; }
    string getPhNo() { return PhNo; }
    string getAddress() { return Address; }
};

void addNo(PhoneBook& ph) {
    system("cls");
    string name, phNo, address;

    cout << "\tEnter Name Of User: ";
    cin >> name;
    ph.setName(name);

    cout << "\tEnter Phone Number: ";
    cin >> phNo;
    ph.setPhNo(phNo);

    cout << "\tEnter Address Of User: ";
    cin.ignore();
    getline(cin, address); // Allow spaces in the address
    ph.setAddress(address);

    ofstream outfile("D:/PhoneBook.txt", ios::app);
    if (!outfile) {
        cout << "\tError: File Can't Open!" << endl;
    } else {
        outfile << ph.getName() << ":" << ph.getPhNo() << ":" << ph.getAddress() << endl;
        cout << "\tPhone Number Added To Phone Book!" << endl;
    }
    outfile.close();
    Sleep(3000);
}

void searchNo() {
    system("cls");
    string name;
    cout << "\tEnter Name Of User: ";
    cin >> name;

    ifstream infile("D:/PhoneBook.txt");
    if (!infile) {
        cout << "\tError: File Can't Open!" << endl;
    } else {
        string line;
        bool found = false;
        while (getline(infile, line)) {
            stringstream ss(line);
            string userName, userPhNo, userAddress;
            getline(ss, userName, ':');
            getline(ss, userPhNo, ':');
            getline(ss, userAddress);

            if (name == userName) {
                found = true;
                cout << "\tName: " << userName << "\n\tPhone: " << userPhNo << "\n\tAddress: " << userAddress << endl;
            }
        }
        if (!found) {
            cout << "\tUser Not Found In Phone Book!" << endl;
        }
    }
    infile.close();
    Sleep(5000);
}

int main() {
    PhoneBook ph;

    bool exit = false;
    while (!exit) {
        system("cls");
        int val;
        cout << "\tWelcome To Phone Book Management System" << endl;
        cout << "\t***************************************" << endl;
        cout << "\t1. Add Number." << endl;
        cout << "\t2. Search Number." << endl;
        cout << "\t3. Exit." << endl;
        cout << "\tEnter Your Choice: ";
        cin >> val;

        if (val == 1) {
            addNo(ph);
        } else if (val == 2) {
            searchNo();
        } else if (val == 3) {
            system("cls");
            exit = true;
            cout << "\tGood Luck!" << endl;
            Sleep(3000);
        } else {
            cout << "\tInvalid Choice. Try Again!" << endl;
            Sleep(2000);
        }
    }
    return 0;
}
