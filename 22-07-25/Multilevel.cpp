// #include <iostream>
// #include <string>
// using namespace std;

// class firstbaseclass
// {
//     int a, b;

// public:
//     firstbaseclass(int a, int b)
//     {
//         this->a = a;
//         this->b = b;
//     }

//     void firstbaseclassinfo()
//     {
//         cout << "a: " << a << ", b: " << b << endl;
//     }
// };

// class secondbaseclass : public firstbaseclass
// {
//     int c, d;

// public:
//     secondbaseclass(int a, int b, int c, int d) : firstbaseclass(a, b)
//     {
//         this->c = c;
//         this->d = d;
//     }

//     void secondbaseclassinfo()
//     {
//         firstbaseclassinfo();
//         cout << "c: " << c << ", d: " << d << endl;
//     }
// };

// class firstderivedclass : public secondbaseclass
// {
//     int i, k;

// public:
//     // Constructor with full parameter list
//     firstderivedclass(int a, int b, int c, int d, int i, int k)
//         : secondbaseclass(a, b, c, d)
//     {
//         this->i = i;
//         this->k = k;
//     }

//     void displayinfo()
//     {
//         secondbaseclassinfo(); // Call parent method
//         cout << "i: " << i << ", k: " << k << endl;
//     }
// };

// int main()
// {
//     firstderivedclass obj(1, 2, 3, 4, 5, 6);
//     obj.displayinfo();
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// class employee
// {
//     int id;
//     string name;

// public:
//     employee(int id, string name)
//     {
//         this->id = id;
//         this->name = name;
//     }

//     void employeeinfo()
//     {
//         cout << "Employee ID: " << id << ", Name: " << name << endl;
//     }
// };

// class developer : public employee
// {
//     string techstack;

// public:
//     developer(int id, string name, string techstack) : employee(id, name)
//     {
//         this->techstack = techstack;
//     }

//     void developerinfo()
//     {
//         employeeinfo();
//         cout << "Tech Stack: " << techstack << endl;
//     }
// };

// class intern : public employee
// {
//     int duration; // in months

// public:
//     intern(int id, string name, int duration) : employee(id, name)
//     {
//         this->duration = duration;
//     }

//     void interninfo()
//     {
//         employeeinfo();
//         cout << "Internship Duration: " << duration << " months" << endl;
//     }
// };

// class seniorDeveloper : public developer
// {
// public:
//     seniorDeveloper(int id, string name, string techstack)
//         : developer(id, name, techstack) {}

//     void show()
//     {
//         cout << "Senior Developer Info:" << endl;
//         developerinfo();
//     }
// };

// class assistantDeveloper : public developer
// {
// public:
//     assistantDeveloper(int id, string name, string techstack)
//         : developer(id, name, techstack) {}

//     void show()
//     {
//         cout << "Assistant Developer Info:" << endl;
//         developerinfo();
//     }
// };

// int main()
// {
//     developer dev(101, "Alice", "C++");
//     intern intern1(102, "Bob", 6);
//     seniorDeveloper sdev(103, "Charlie", "Java");
//     assistantDeveloper adev(104, "David", "Python");

//     cout << "\n--- Developer ---" << endl;
//     dev.developerinfo();

//     cout << "\n--- Intern ---" << endl;
//     intern1.interninfo();

//     cout << "\n--- Senior Developer ---" << endl;
//     sdev.show();

//     cout << "\n--- Assistant Developer ---" << endl;
//     adev.show();

//     return 0;
// }


#include <iostream>
#include <string>
using namespace std;

// Base class
class person {
protected:
    string name;
    int age;

public:
    person(string name, int age) {
        this->name = name;
        this->age = age;
    }

    void showPersonInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Inherits from person
class taxpayer : public person {
protected:
    string aadhar;
    string pan;

public:
    taxpayer(string name, int age, string aadhar, string pan)
        : person(name, age) {
        this->aadhar = aadhar;
        this->pan = pan;
    }

    void showTaxpayerInfo() {
        showPersonInfo();
        cout << "Aadhar: " << aadhar << ", PAN: " << pan << endl;
    }
};

// Inherits from taxpayer
class employee : public taxpayer {
    int empid;
    float salary;

public:
    employee(string name, int age, string aadhar, string pan, int empid, float salary)
        : taxpayer(name, age, aadhar, pan) {
        this->empid = empid;
        this->salary = salary;
    }

    void showEmployeeInfo() {
        showTaxpayerInfo();
        cout << "Employee ID: " << empid << ", Salary: ₹" << salary << endl;
    }
};

int main() {
    employee emp("Abhinav", 25, "1234-5678-9012", "ABCDE1234F", 101, 50000.75);
    emp.showEmployeeInfo();
    return 0;
}
