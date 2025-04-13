// Association represents a relationship between two or more classes. In this case,
// each object in one class is associated with one or more objects of another class. In UML association is represented by a solid line connecting the two classes.

//good code - no direct depency 
#include<iostream>
using namespace std;

class Person{
    private: string name;
    public: 
    Person(string name){
        this->name = name;
    }       
    string getName(){
        return this->name;
    };
};


class IStudent{
   public:
   virtual void study() = 0;
    virtual string findName() = 0;
   virtual ~IStudent(){};
};


class Student: public Person,public IStudent {
    public: 
    Student(string name): Person(name){};
    void study() override {
        cout << this->getName() << " is studying." << endl;
    };
    string findName() override {
        return this->getName();
    };
};

//for OCP
class OnlineStudent : public Student {
   public:
   OnlineStudent(string name) : Student(name){}
   void study() override {
       cout << this->getName() << " is studying online." << endl;
   };
};

class ITeacher{
    public:
    virtual void teach(IStudent& student) = 0;
    virtual ~ITeacher(){};
};

class Teacher : public Person, public ITeacher {
    public: 
    Teacher(string name): Person(name){};
    void teach(IStudent& student) override {
        cout << this->getName() << " is teaching " << student.findName() << "." << endl;
    };
};


int main(){
    Teacher* teacher = new Teacher("Mr. Smith");
    Student* student = new Student("John Doe");
    OnlineStudent* onlineStudent = new OnlineStudent("Jenny Doe");
    teacher->teach(*student);
    student->study();
    teacher->teach(*onlineStudent);
    onlineStudent->study();
    // delete teacher;
    delete student;
    delete onlineStudent;
    return 0;
}