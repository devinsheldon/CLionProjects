#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

class Student {
public:
	Student(string name = "not initialized", double gpa = 0.0);
	void SetName(string studentName);
	void SetGPA(double newGPA);
	string ToString() const;
private:
	string name;
	double gpa;
};

Student::Student(string initialName, double initialGPA) {
	name = initialName;
	gpa = initialGPA;
}

void Student::SetName(string studentName) {
	name = studentName;
}

void Student::SetGPA(double newGPA) {
	gpa = newGPA;
}

string Student::ToString() const {
   return name + " has a GPA of " + to_string(gpa) + "\n";
}

int main() {
	vector<Student*> students;
    string userInput = "";

    while(userInput != "quit") {
        cout << "Enter option: ";
        cin >> userInput;
        cout << endl;

        if(userInput == "add") {
            string name;
            double gpa;

            cout << "Student name: ";
            cin >> name;
            cout << endl << name << "'s GPA: ";
            cin >> gpa;
            cout << endl;
            Student* newStudent = new Student(name, gpa);
            students.push_back(newStudent);

        } else if(userInput == "drop") {
            int index;
            cout << "Index of student to drop: ";
            cin >> index;
            cout << endl;
            delete students.at(index);
            students.erase(students.begin() + index);

        } else if(userInput == "print") {
            for(int i = 0; i < students.size(); i++){
                cout << i << ": " << students.at(i)->ToString() << endl;
            }
        }
    }

    for(int i = 0; i < students.size(); i++) {
        delete students.at(i);
    }

	return 0;
}