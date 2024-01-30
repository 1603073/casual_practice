#include <bits/stdc++.h>
using namespace std;
class Person{
    int id;
    char name[50];
    public:
    void info(){
        cout << "Enter your id: ";
        cin >> id;
        cout << "Enter your name: " ;
        cin >> name;
    }
    void display1(){
        cout << endl << "Id: " << id << "\nName: " << name << endl;
    }
} ;

class Student: public Person {
    string course_name;
    int course_fee;
    public: 
     void info_2(){
        info();
        cout << "Enter course_name: " ;
        cin >> course_name;
        cout << "Enter course_fee: " ;
        cin >> course_fee;
     }

     void display2(){
        display1();
        cout << "Course_name: " << course_name << "\nCourse_fee" << course_fee << endl;
     }
}; 
int main(){
    Student s1;
    s1.info_2();
    s1.display2();
}