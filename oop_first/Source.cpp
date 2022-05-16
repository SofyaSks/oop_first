#include <iostream>
#include <string>
using namespace std;

class human {
public:
	void set_date(int d, int m, int y) {
		day = d;
		month = m;
		year = y;
	}
	void show_date() {
		cout << "Дата рождения: " << day << "." << month << "." << year;
	}
	void set_name(string str){

	}
private:
	int day;
	int month;
	int year;
	string name;
	string gender;
	bool adult;
	bool job() { if (true) string profession; }
};


int main() {

	human one;
	cout << " ";

	return 0;
}