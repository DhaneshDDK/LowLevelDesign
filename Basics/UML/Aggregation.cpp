// Aggregation is a weak "has-a" relationship where one class contains objects of
// another class. However, the contained objects can exist independently of the
// container object.
#include<iostream>
#include<vector>
using namespace std;

class Professor{
  private:
    string name;
    public:
    Professor(string name){
        this->name = name;
    }
    string getName(){
        return this->name;
    };
};

class Department{
   private:
    vector<Professor*> professors;
    public:
    void addProfessor(Professor* professor){
        professors.push_back(professor);
    }
    void showProfessors(){
        cout << "Professors in the department:" << endl;
        for(Professor* professor : professors){
            cout << professor->getName() << endl;
        }
    };
    ~Department(){
        for(Professor* professor : professors){
            delete professor; // Clean up dynamically allocated memory
        }
    }
};


int main(){
    Professor* prof1 = new Professor("Dr. Smith");
    Professor* prof2 = new Professor("Dr. Johnson");
    Professor* prof3 = new Professor("Dr. Brown");
    Department* csDepartment = new Department();
    csDepartment->addProfessor(prof1);
    csDepartment->addProfessor(prof2);
    csDepartment->addProfessor(prof3);
    csDepartment->showProfessors();
    delete csDepartment; // Clean up dynamically allocated memory for department
    // Note: The professors are deleted in the Department destructor, so no need to delete them here again.
}
