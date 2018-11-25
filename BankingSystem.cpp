#include "pch.h"
#include <iostream>		// input/output streams
#include <fstream>		// file streams
#include <cctype>		// character handling
#include <iomanip>		// parametric manipulators

#include "Account.h"
#include "menu.h"

using namespace std;

int main() {
	char ch;
	int num;

	// call the intro
	intro();
	
	// main system of bank
	do {
		// bank menu
		system("cls");
		cout << "\n\n\n\tMAIN MENU";
		cout << "\n\n\t01. NEW ACCOUNT";
		cout << "\n\n\t02. DEPOSIT AMOUNT";
		cout << "\n\n\t03. WITHDRAW AMOUNT";
		cout << "\n\n\t04. BALANCE INQUIRY";
		cout << "\n\n\t05. ALL ACOUNT HOLDER LIST";
		cout << "\n\n\t06. CLOSE AN ACCOUNT";
		cout << "\n\n\t07. UPDATE AN ACCOUNT";
		cout << "\n\n\t08. EXIT";
		cout << "\n\n\tSelect Your Option (1-8): ";

		// reading input from user
		cin >> ch;
		system("cls");

		// menu selction statements
		switch (ch) {
		case '1':
			// write account function
			write_account();
			break;
		case '2':
			cout << "\n\n\tEnter the Account No. : ";
			cin >> num;
			// deposit amount function
			deposit_withdraw(num, 1);
			break;
		case '3':
			cout << "\n\n\tEnter the Account No. : ";
			cin >> num;
			// withdraw amount function
			deposit_withdraw(num, 2);
			break;
		case '4':
			cout << "\n\n\tEnter the Account No. : ";
			cin >> num;
			// balance inquiry function
			display_sp(num);
			break;
		case '5':
			// display all function
			display_all();
			break;
		case '6':
			cout << "\n\n\tEnter the Account No. : ";
			cin >> num;
			// account delete function
			delete_acount(num);
			break;
		case '7':
			cout << "\n\n\tEnter the Account No. : ";
			cin >> num;
			// acount update function
			modify_acount(num);
			break;
		case '8':
			cout << "\n\n\tThanks for Using Banking System\n";
			break;
		default:
			cout << "\a";
		}
		cin.ignore();
		cin.get();
	} while (ch != '8');
	return 0;
}
