#include <iostream>
using namespace std;

class Employee{
    private :
    string  name;
    int age;
    int salary;
    public :
        Employee(){ // default constructo
            name = "tolga";
            age = 22;
            salary=500;
        }
        Employee(string name ,int age, int salary){
        this->name=name;
        this->age = age;
        this->salary = salary;
}

    Employee(string name, int age){
        this->name = name;
        this->age = age;
        salary=6000;
    
    }
    void setName(string name){
        this->name=name;
    }
    string getName(){
        return name;
    }
    void setAge(int age){
        this->age = age;
    }
    int getAge(){
        return age;
    }
    void setSalary(int salary){
        this->salary= salary;
    }
    int getSalary(){
        return salary;
    }
    void info(){
        cout << "name is :"<< name<<" age is: "<< age << " salary is: "<< salary<<endl;
    }
    void increaseSalary(){ // 
        int newsalary = salary + (salary*34)/100;
        cout<<name <<"s salary with extra is " <<newsalary<<endl;
    }
}; // end of the class

int main() {
	Employee e1;
	e1.info();
	Employee e2("Turan", 52, 4000);
	e2.info();
	Employee e3("Yağız " , 23);
	e3.info();
	e3.increaseSalary(); // testing salary with extra
	e2.increaseSalary();
	return 0;
}
