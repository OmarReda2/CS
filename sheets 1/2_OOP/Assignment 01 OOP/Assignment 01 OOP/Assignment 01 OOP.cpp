using namespace std;
#include <iostream>
#include <string>


//// Q1:
class MyDate {
private:
	int day, month, year;

public:
	int getDay() {
		return day;
	}

	int getMonth() {
		return month;
	}

	int getYear() {
		return year;
	}

	void setDay(int d) {
		if ((d > 0) && (d <= 31)) {
			day = d;
			cout << "Day has been set\n";
		}
		else
			cout << "Invalid day\n ";
	}

	void setMonth(int m) {
		if ((m > 0) && (m <= 12)) {
			month = m;
			cout << "Month has been set\n";
		}
		else
			cout << "Invalid month\n ";
	}

	void setYear(int y) {
		if ((y >= 1990) && (y <= 99999)) {
			year = y;
			cout << "Year has been set\n";
		}
		else
			cout << "Invalid year\n ";
	}

	void setDate(int d, int m, int y) {
		setDay(d);
		setMonth(m);
		setYear(y);

	}

	MyDate(int d, int m, int y)
	{
		setDay(d);
		setMonth(m);
		setYear(y);

	}

};





//// Q2:
class Time {
private:
	int hour, min, sec;

public:
	void setHour(int h) {
		if ((h >= 0) && (h <= 23)) {
			hour = h;
			cout << "Hours has been set\n";
		}
		else {
			cout << "Invalid Hours\n";
		}
	}

	void setMin(int m) {
		if ((m >= 0) && (m <= 59)) {
			min = m;
			cout << "Minutes has been set\n";
		}
		else {
			cout << "Invalid Minutes\n";
		}
	}

	void setSec(int s) {
		if ((s >= 0) && (s <= 59)) {
			sec = s;
			cout << "Seconds has been set\n";
		}
		else {
			cout << "Invalid Seconds\n";
		}
	}

	int getHour() {
		return hour;
	}
	int getMin() {
		return min;
	}
	int getSec() {
		return sec;
	}

	void setTime(int h, int m, int s) {
		setHour(h);
		setMin(m);
		setSec(s);
	}

	Time(int h, int m, int s) {
		setHour(h);
		setMin(m);
		setSec(s);
	}
};





//// Q3:
class Author {
public:
	string name, email;
	char gender;
};
class Book {
private:
	string name;
	Author author;
	double price;
	int qty;

public:
	string getName() {
		return name;
	}

	Author getAuthor() {
		return author;
	}

	double getPrice() {
		return price;
	}

	int getQty() {
		return qty;
	}

	void setQty(int q) {
		qty = q;
	}

	Book(string n, Author a, double p) {
		name = n;
		author = a;
		price = p;
	}

	Book(string n, Author a, double p, int q) :
		name(n), author(a), price(p), qty(q) { }

};




//// Q4:
class Account {
private:
	string id, name;
	int balance = 0;

public:
	Account(string _id, string _name) :
		id(_id), name(_name) { }

	Account(string _id, string _name, int _b) :
		id(_id), name(_name), balance(_b) { }

	string getName() {
		return name;
	}

	string getId() {
		return id;
	}

	int getBalance() {
		return balance;
	}


	int credit(int amount) {
		balance += amount;
		return balance;
	}

	int debit(int amount) {
		if (amount <= balance) {
			balance -= amount;
			return balance;
		}
		else {
			cout << "Amount exceeded ";
			return balance;
		}
	}

	int transferTo(Account another, int amount) {
		if (amount <= balance) {
			balance -= amount;
			return balance;
		}
		else {
			cout << "Amount exceeded";
			return balance;
		}
	}
};


int main()
{
	//// Q1:
	/*MyDate myDate(4, 7, 2001);
	cout << myDate.getDay() << " "
		<< myDate.getMonth() << " "
		<< myDate.getYear() << " "
		<< endl << endl;

	myDate.setDate(3, 7, 2008);
	cout << myDate.getDay() << " "
		<< myDate.getMonth() << " "
		<< myDate.getYear() << " "
		<< endl << endl;

	myDate.setDay(23);
	myDate.setMonth(8);
	myDate.setYear(1994);
	cout << myDate.getDay() << " "
		<< myDate.getMonth() << " "
		<< myDate.getYear() << " "
		<< endl;*/




	//// Q2:
	/*Time time(11, 35, 59);
	cout << time.getHour() << " :: "
		<< time.getMin() << " :: "
		<< time.getSec()
		<< endl << endl;

	time.setTime(23, 0, 0);
	cout << time.getHour() << " :: "
		<< time.getMin() << " :: "
		<< time.getSec()
		<< endl << endl;

	time.setHour(14);
	time.setMin(36);
	time.setSec(48);
	cout << time.getHour() << " :: "
		<< time.getMin() << " :: "
		<< time.getSec()
		<< endl << endl;*/




	//// Q3:
	/*Author a1;
	a1.name = "Bale";
	a1.email = "email@email.com";
	a1.gender = 'm';
	Book b1("CS", a1, 300);
	cout << b1.getName() << endl
		<< b1.getAuthor().name << " "
		<< b1.getAuthor().email << " "
		<< b1.getAuthor().gender << endl
		<< b1.getPrice() << endl << endl;

	Author a2;
	a2.name = "Steve";
	a2.email = "email@email2.com";
	a2.gender = 'm';
	Book b2("Algo", a2, 400, 2);
	cout << b2.getName() << endl
		<< b2.getAuthor().name << " "
		<< b2.getAuthor().email << " "
		<< b2.getAuthor().gender << endl
		<< b2.getPrice() << endl
		<< b2.getQty() << endl << endl;*/




	//// Q4:
	//Account acc1("ah123", "Ahmed", 4000);
	//Account acc2("kr567", "Kreem");



	//cout << acc1.getName() << endl
	//	<< acc1.getId() << endl
	//	<< acc1.getBalance() << endl;

	//cout << acc1.credit(1000) << endl;
	//cout << acc1.debit(1000) << endl;
	//cout << acc1.transferTo(acc2, 1000) << endl;





}

