#include <iostream>
#include <string>
using namespace std;

class wallet{
	private:
		
		int monetaryUnits = 0;
		const int pennyValue = 1;
		const int nickelValue = 5;
		const int dimeValue = 10;
		const int quarterValue = 25;
		const int halfDollarValue = 50;
		const int dollarValue = 100;
		string walletOwner;
		
		void addUnits(int units){
			monetaryUnits += units;
		}
		
		int calculatePennies(void){
			return monetaryUnits / pennyValue;
		}
		
		int calculateNickels(void){
			return monetaryUnits / nickelValue;
		}
		
		int calculateDimes(void){
			return monetaryUnits / dimeValue;
		}
		
		int calculateQuarters(void){
			return monetaryUnits / quarterValue;
		}
		
		int calculateHalfDollars(void){
			return monetaryUnits / halfDollarValue;
		}
		
		int calculateDollars(void){
			return monetaryUnits / dollarValue;
		}
		
		int calculateChange(void){
			return monetaryUnits % dollarValue;
		}
		
		string calculateBalance(void){
			return std::to_string(calculateDollars()) + "." +  std::to_string(calculateChange());
		}
		
		int addPennies(int pennies){
			addUnits(pennies * pennyValue);
		}
		
		int addNickels(int nickels){
			addUnits(nickels * nickelValue);
		}
		
		int addDimes(int dimes){
			addUnits(dimes * dimeValue);
		}
		
		int addQuarters(int quarters){
			addUnits(quarters * quarterValue);
		}
		
		int addHalfDollars(int halfDollars){
			addUnits(halfDollars * halfDollarValue);
		}
		
		int addDollars(int dollars){
			addUnits(dollars * dollarValue);
		}
		
	public:
		
		void initializeWallet(void){
			cout << "Enter your name, wallet owner: ";
			cin >> walletOwner;
			cout << endl << "Hello " << walletOwner << "!" << endl << endl;
			cout << "Welcome to Virtua Wallet, a complete solution for Virtua Money management" << endl << endl;
			cout << "Virtua Wallet is a trademark of Virtua Tech, Virtua Tech is not liable " << endl;
			cout << "   for any harm incurred by the use of the Virtua Wallet software" << endl;
		}
		
		void addMoney(void){
			int currencyDenomination;
			int userInput;
			
			cout << endl << "Virtua Wallet Money Deposit" << endl;
			cout << "Please Select A Currency Denomination" << endl;
			cout << "1 - Pennies" << endl;
			cout << "2 - Nickels" << endl;
			cout << "3 - Dimes" << endl;
			cout << "4 - Quarters" << endl;
			cout << "5 - Half Dollars" << endl;
			cout << "6 - Dollars" << endl;
			
			fflush(stdin);
			cin >> currencyDenomination;
			
			switch(currencyDenomination){
				case 1:
					cout << "How many Pennies would you like to deposit?" << endl;
					cout << "Pennies> ";
					cin >> userInput;
					addPennies(userInput);
					cout << userInput << " Pennies have been deposited into your Virtua Wallet!" << endl;
					break;
				case 2:
					cout << "How many Nickels would you like to deposit?" << endl;
					cout << "Nickels> ";
					cin >> userInput;
					addNickels(userInput);
					cout << userInput << " Nickels have been deposited into your Virtua Wallet!" << endl;
					break;
				case 3:
					cout << "How many Dimes would you like to deposit?" << endl;
					cout << "Dimes> ";
					cin >> userInput;
					addDimes(userInput);
					cout << userInput << " Dimes have been deposited into your Virtua Wallet!" << endl;
					break;
				case 4:
					cout << "How many Quarters would you like to deposit?" << endl;
					cout << "Quarters> ";
					cin >> userInput;
					addQuarters(userInput);
					cout << userInput << " Quarters have been deposited into your Virtua Wallet!" << endl;
					break;
				case 5:
					cout << "How many Half Dollars would you like to deposit?" << endl;
					cout << "Half Dollars> ";
					cin >> userInput;
					addHalfDollars(userInput);
					cout << userInput << " Half Dollars have been deposited into your Virtua Wallet!" << endl;
					break;
				case 6:
					cout << "How many Dollars would you like to deposit?" << endl;
					cout << "Dollars> ";
					cin >> userInput;
					addDollars(userInput);
					cout << userInput << " Dollars have been deposited into your Virtua Wallet!" << endl;
					break;
				default:
					cout << userInput << " is not a valid denomination" << endl;
			}
		}
		
		void checkMoney(void){
			cout << endl << "Virtua Wallet Balance Check" << endl;
			cout << "Your current Virtua Wallet balance is: $" << calculateBalance() << endl;
			cout << "-  " << calculatePennies() << " Pennies" << endl;
			cout << "-  " << calculateNickels() << " Nickels" << endl;
			cout << "-  " << calculateDimes() << " Dimes" << endl;
			cout << "-  " << calculateQuarters() << " Quarters" << endl;
			cout << "-  " << calculateHalfDollars() << " Half Dollars" << endl;
			cout << "-  " << calculateDollars() << " Dollars" << endl;
		}
		
};

int main(int argc, char ** argv){
	class wallet myWallet;
	myWallet.initializeWallet();
	while(1){
		myWallet.addMoney();
		myWallet.checkMoney();
	}
}



