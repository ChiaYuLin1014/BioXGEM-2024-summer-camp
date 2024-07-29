#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Employee {
    
    protected:
        string name;
        char gender;
        string id;
        string department;

    public:
        // constructor
        Employee(string name, char gender, string id, string department) : name(name), gender(gender), id(id), department(department){}

        // member function
        void displayInfo(){
            cout << "The emlpoyee is: " << name << endl;
            cout << "Gender: " << gender << endl;
            cout << "ID: " << id << endl;
            cout << "Department: " << department << endl;
        }

        // getter
        string getName(){
            return name;
        }

        // setter
        void setDepart(string depart){
            department = depart;
        }

        // destructor
        ~Employee(){};

};

class FullTimeEmployee : public Employee {

    private:
        int salary;
        float work_hour_per_week;
    
    public:
        // constructor
        FullTimeEmployee(string name, char gender, string id, string department, int salary, float hour) : Employee(name, gender, id, department), salary(salary), work_hour_per_week(hour){}

        // getter

        // setter
        void setSalary(int money){
            salary = money;
        }

        void setWorkingHours(float hour){
            work_hour_per_week = hour;
        }

        // member function
        void displayInfo(){     // polymorphism
            Employee::displayInfo();
            cout << "Type: Full Time" << endl;
            cout << "salary: " << salary << endl;
            cout << "Working Hours Per Week: " << work_hour_per_week << endl;
            if (work_hour_per_week >= 50){
                cout << "<WARNING> : " << name << " worked overtime, please take note." << endl;
            }
        }
        
        void calculatePay(int bonus, char mode){
            int total_pay;
            if (mode == 'Y'){
                total_pay = salary * 12 + bonus;
                cout << name << "'s totally payment is: " << total_pay << " (per year)." << endl;
            }
            else if (mode == 'M'){
                if (work_hour_per_week > 40){
                    total_pay = salary + (work_hour_per_week - 40) * 400;
                }
                else{
                    total_pay = salary;
                }
                cout << name << "'s totally payment is: " << total_pay << " (per month)." << endl;
            }
        }

        // destructor
        ~FullTimeEmployee(){};

};

class PartTimeEmployee : public Employee {
    
    private:
        int wage;
        float work_hour_per_week;
    
    public:
        // constructor
        PartTimeEmployee(string name, char gender, string id, string department, int wage, float hour) : Employee(name, gender, id, department), wage(wage), work_hour_per_week(hour) {}

        // getter

        //setter
        void setWage(int money){
            wage = money;
        }

        void setWorkingHours(float hours){
            work_hour_per_week = hours;
        }

        // member function
        void displayInfo(){
            Employee::displayInfo();
            cout << "Type: Part Time" << endl;
            cout << "Wage: " << wage << endl;
            cout << "Working Hours Per Week: " << work_hour_per_week << endl;
        }
        
        void calculatePay(){
            int total_pay = wage * work_hour_per_week * 4;
            cout << name << "'s totally payment is: " << total_pay << " (per month)." << endl;
        }

        // destructor
        ~PartTimeEmployee(){};

};

class Intern : public Employee {

    private:
        int wage;
        float work_hour_per_week;
        int duration;

    public:
        // constructor
        Intern(string name, char gender, string id, string department, int wage, float hour, int month) : Employee(name, gender, id, department), wage(wage), work_hour_per_week(hour),  duration(month) {}

        // getter

        // setter
        void setWorkingHours(float hours){
            work_hour_per_week = hours;
        }

        // member function
        void displayInfo(){
            Employee::displayInfo();
            cout << "Type: Intern" << endl;
            cout << "Wage: " << wage << endl;
            cout << "Working Hours Per Week: " << work_hour_per_week << endl;
            cout << "Duration: " << duration << endl;
        }
        
        void calculatePay(){
            int total_pay = wage * work_hour_per_week * 4;
            cout << name << "'s totally payment is: " << total_pay << " (per month)." << endl;
        }

        // destructor
        ~Intern(){};


};


int main(){
    
    int bonus = 60000;

    vector<Employee*> Employees;

    Employee Vincent("Vincent", 'M', "BT0817023", "DBT");
    FullTimeEmployee Lin("Lin", 'M', "CS0810001", "CS", 20000, 51);
    PartTimeEmployee Wang("Wang", 'M', "AC0813123", "AC", 230, 9);
    Intern Chen("Chen", 'F', "I10344534", "DBT", 200, 20, 3);

    Employees.push_back(&Vincent);
    Employees.push_back(&Lin);
    Employees.push_back(&Wang);
    Employees.push_back(&Chen);

    Vincent.setDepart("CS");
    Vincent.displayInfo();
    cout << endl;
    
    Lin.setDepart("DBT");
    Lin.displayInfo();
    Lin.calculatePay(bonus, 'M');
    cout << endl;
    
    Wang.displayInfo();
    Wang.calculatePay();
    cout << endl;

    Chen.displayInfo();
    Chen.calculatePay();
    cout << endl;

    cout << "Member list of Corporation: " << endl;
    for (auto emp : Employees){
        cout << emp->getName() << endl;
    }
    
    return 0;
}