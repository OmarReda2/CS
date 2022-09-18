#include <iostream>
#include <string.h>
#include <string>

using namespace std;

class Validation {
public:
	static void validate(string& applyValidateOn, string applyValidateName, int minLen, int maxLen) {
		while (!(applyValidateOn.length() >= minLen && applyValidateOn.length() <= maxLen)) {
			cout << "please enter your " << applyValidateName << " (min length " << minLen
				<< " max length " << maxLen << "): ";
			getline(cin, applyValidateOn);
		}
	}

	static void validateBalance(double& validateBalance, int minBalance) {
		while (!(validateBalance >= minBalance)) {
			cout << "please enter your balance (at least " << minBalance << " ): ";
			cin >> validateBalance;
		}
	}
};


class Person {
protected:
	int static inline countId = 0;
	int id;
	string name, password;
	double balance;

public:
	void setName(string name) {
		Validation::validate(name, "name", 5, 20);
		Person::name = name;
	}

	void setPassword(string password) {
		Validation::validate(password, "password", 8, 20);
		Person::password = password;
	}

	virtual void setBalance(double balance) = 0;

	string getName() {
		return name;
	}

	string getPassword() {
		return password;
	}

	double getBalance() {
		return balance;
	}

	double getId() {
		return id;
	}

	void display() {
		cout << "name: " << name
			<< ", password: " << password
			<< ", balance: " << balance
			<< ", id: " << id << endl;
	};
};




class Client : public Person {
public:
	Client()
	{
		id = ++countId;
	}

	void deposite(double amount) {
		balance += amount;
	}

	void withdraw(double amount) {
		if (amount > balance) {
			cout << "No enough money";
		}
		else {
			balance -= amount;
		}
	}

	void transferTo(double amount, Client& recipient) {
		if (amount > balance) {
			cout << "No enough money";
		}
		else {
			balance -= amount;
			recipient.balance += amount;
			cout << "you have recieved " << amount << " from "
				<< recipient.name << endl;
		}
	}

	void checkBalance() {
		cout << "your balance is: " << balance << endl;
	}

	void setBalance(double balance) {
		Validation::validateBalance(balance, 1500);
		Client::balance = balance;

	}
};


class Employee : public Person {
public:
    Employee(){
        id = ++countId;
    }


	void setBalance(double balance) {
		Validation::validateBalance(balance, 5000);
		Employee::balance = balance;

	}


};

class Admin : public Person {
public:
    Admin(){
       id = ++countId;
    }

    void setBalance(double balance) {
		Validation::validateBalance(balance, 5000);
		Admin::balance = balance;

	}
};


int main()
{
//-------------- testing -------------//
	Client c1;
	Client c2;
	Employee e1;
	Employee e2;
	Admin a1;
	Admin a2;

	cout << c1.getId() <<endl
           << c2.getId() <<endl
           << e1.getId() <<endl
           << e2.getId() <<endl
           << a1.getId() <<endl
           << a2.getId() <<endl;




    cout << c1.getName() << endl;
	c1.setName("omar reda");
	c1.setPassword("omar12345");
	c1.setBalance(9000);

	c2.setName("kareem ahmed");
	c2.setPassword("kareem12345");
	c2.setBalance(9000);





	cout << c1.getName() << endl
		<< c1.getId() << endl
		<< c1.getBalance() << endl
		<< c1.getPassword() << endl;
		c1.display();

	c1.deposite(200);
	cout << c1.getBalance() << endl;

	c1.withdraw(200);
	cout << c1.getBalance() << endl;

	c1.transferTo(1000, c2);
	cout << c1.getBalance() << endl;
	cout << c2.getBalance() << endl;
	c2.checkBalance();






	cout << endl;
	e1.setName("mohammed");
	e1.setPassword("mohammed1");
	e1.setBalance(5000);
	e1.display();

	cout << e1.getName() << endl
		<< e1.getId() << endl
		<< e1.getBalance() << endl
		<< e1.getPassword() << endl;






	cout << endl;
	a1.setName("youseif ahmed");
	a1.setPassword("yousif123");
	a1.setBalance(5000);
	a1.display();

	cout << a1.getName() << endl
		<< a1.getId() << endl
		<< a1.getBalance() << endl
		<< a1.getPassword() << endl;





	return 0;
}
