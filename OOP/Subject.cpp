#include <iostream> 
using namespace std;

class Subject {
public:
	string SubjectName;
	string subjectTime;
	int GradeLevel; 


	void printInformation(Subject subject) {
		cout << "the SubjectName is:" << subject.SubjectName << endl;
		cout << "the GradeLevel is:" << subject.GradeLevel << endl;
		cout << "the subjectTime is:" << subject.subjectTime << endl;
	}
};