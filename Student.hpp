#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::string;

class Student {
	private:
		string *name;
		int *age;

	public:
		Student() {
			name = new string("");
			age = new int(0);
			cout << "Student object created!" << endl;
		}

		void setName(string in_name) {
			*name = in_name;
		}

		void setAge(int in_age) {
			*age = in_age;
		}

		string getName() const {
			return *name;
		}

		int getAge() const {
			return *age;
		}

		~Student() {
			delete name;
			delete age;
			cout << "Student object destroyed!" << endl;
		}
};
