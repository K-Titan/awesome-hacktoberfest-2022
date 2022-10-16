#include <iostream>
#include <string.h>
using namespace std;

struct sinfo{
    int rollno;
    string name;
    int age;
    string address;
};

void age14(int n, struct sinfo *students){
    cout << "----------------------------------------------------" << endl;
    cout << "Students below the age of 14 are: " << endl;
    for(int i = 0; i < n; i++){
        if(students[i].age == 14){
            cout << students[i].name << "  ";
        }
    }
    cout << endl;
}

void evenNo(int n, struct sinfo *students){
  cout << "----------------------------------------------------" << endl;
  cout << "The students with even roll numbers are: " << endl;
  for(int i = 0; i < n; i++){
    if(students[i].rollno % 2 == 0){
      cout << students[i].name << "  ";
    }
  }
  cout << endl;
}

void detailsOf(int n, struct sinfo *students){
  cout << "----------------------------------------------------" << endl;
  int num;
  cout << "Enter the roll number: ";
  cin >> num;
  for(int i = 0; i < n; i++){
    if(students[i].rollno == num){
      cout << endl << "Name: " << students[i].name << endl;
      cout << "Age: " << students[i].age << endl;
      cout << "Address: " << students[i].address << endl;
    }
  }
}

int main() {
    int num;
    cout << "Enter the number of students: ";
    cin >> num;
    sinfo s[num];
    for(int i = 0; i < num; i++){
        cout << "Details of student " << i+1 << ": " << endl;
        cout << "Enter the roll number of student: ";
        cin >> s[i].rollno;
        cout << "Enter the name of the student: ";
        cin >> s[i].name;
        cout << "Enter the age of the student(between 11-14): ";
        cin >> s[i].age;
        cout << "Enter the address of the student: ";
        cin >> s[i].address;
    }
    age14(num, s);
    evenNo(num, s);
    detailsOf(num, s);

    return 0;
}
