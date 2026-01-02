// 1) Class

// A class is a blueprint or template.

// 👉 It doesn’t occupy real memory for data until objects are created.
// 👉 It only describes what data and what functions an object will have.

// class Student {
// public:
//     string name;
//     int age;

//     void study() {
//         cout << "Studying";
//     }
// };

// 2) Object

// An object is a real thing created from a class.
// Student s1;   // object
// s1.name = "Rahul";

// 3) Encapsulation

// 👉 Binding data and functions together in one unit (class).
// 👉 Also means hiding data from outside using private members.

// class BankAccount {
// private:
//     int balance;      // hidden

// public:
//     void setBalance(int b) { balance = b; }
//     int getBalance() { return balance; }
// };



// 4) Inheritance

// 👉 One class getting properties of another class.
// 👉 Reuse code instead of writing again.

// class Animal {
// public:
//     void eat() { cout << "Eating"; }
// };

// class Dog : public Animal {
// public:
//     void bark() { cout << "Barking"; }
// };


// 5) Polymorphism (many forms)

// 👉 Same function name, different behavior.
// void area(int r);
// void area(int l, int b);

// 6) Abstraction

// 👉 Showing only necessary details, hiding rest.
// class Car {
// public:
//     void start() { cout << "Car started"; } // user sees
// private:
//     void engineStart() {}                    // hidden
// };

// Dynamic Binding (also called Late Binding / Runtime Binding)
// 👉 Simple meaning

// The function to be called is decided at runtime, not at compile time.

// (Message) Passing
// 👉 Simple meaning

// Objects send data to each other by calling functions.

// In OOPS we say objects communicate by message passing.
