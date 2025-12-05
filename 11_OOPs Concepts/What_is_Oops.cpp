/*

What is Object-Oriented Programming (OOP)?
Object-Oriented Programming is a style of programming that organizes code around objects, not just functions.

It helps us to write:

Reusable code

Easy-to-understand code

Less error-prone programs   

OOP is based on a real-world concept — everything around us is an object (like a car, phone, human, etc.).

Each object has:

Properties (Data/Attributes) → example: car color, speed

Behaviors (Functions/Methods) → example: start(), stop()

So in C++, we use classes and objects to represent these.

🧩 CLASS and OBJECT
👉 Class
A class is like a blueprint — it defines what the object will look like and what it can do.

👉 Object
An object is a real-world instance of the class — it actually exists in memory.

===========================================================================================================================

1️⃣ Encapsulation — Wrapping Data and Functions Together
📖 Meaning (in simple words):
Encapsulation means binding data (variables) and functions (methods) into one single unit — a class.

It’s like putting everything related together in one capsule 💊
So that no one can directly access or change the internal data without permission.

Rule 1: Data should be hidden (private).
Rule 2: Data can be accessed only through public methods.
Rule 3: Data + functions should be wrapped inside one class.

🧠 Real-life Example:
Think of a bank account:

You can deposit or withdraw money.

But you can’t directly touch the account balance (you use functions to do that).

This is encapsulation 

----------------------------------------------------------------------------------------------------------------------------

2️⃣ Abstraction — Showing Only the Essential Details
📖 Meaning (in simple words):
Abstraction means showing only the important things and hiding unnecessary details from the user.

It helps to reduce complexity and focus only on what an object does, not how it does it.

🧠 Real-life Example:
Think of a car 🚗

You only use the steering, brake, and accelerator to drive.

You don’t need to know how the engine, fuel system, or sensors work inside.

That’s abstraction

-----------------------------------------------------------------------------------------------------------------------------

3️⃣ Inheritance — Getting Properties from Another Class
📖 Meaning (in simple words):
Inheritance means one class (child class) can use properties and functions of another class (parent class).

It’s just like you inherit qualities from your parents — their traits become part of you too.

🧠 Real-life Example:
Imagine:

Class: Vehicle → has common features like speed, color.

Class: Car and Class: Bike → inherit those features but add their own behavior.

------------------------------------------------------------------------------------------------------------------------------

 4️⃣ Polymorphism — One Thing, Many Forms
📖 Meaning (in simple words):
Polymorphism means “many forms.”
It allows one function, object, or operator to behave differently based on the situation.

In simple terms:

The same name, but different behavior.

🧠 Real-life Example:
Think of the word “run”:

A human runs on legs 🏃‍♂️

A program runs on a computer 💻

A car runs on fuel 🚗

Same word “run”, but meaning changes depending on who or what is doing it.
That’s Polymorphism.er
-

===================================================================================================================


🧱 What is an Empty Class?
An empty class is a class that contains no data and no functions.

It is like an empty box — the structure exists, but nothing is inside it


✔️ C++ Example of an Empty Class
---------------------------+
class Empty {              |
                           |
};                         |
---------------------------+

That’s it — this is a valid class.

🧠 But why do we need an empty class?
Even if a class is empty:

You can still create objects from it.

Compiler still gives it 1 byte so that each object has a unique memory address.


========================================================================================================================



 Access Modifiers in OOP (C++ / Java / Python Concept)
Access modifiers control who can access the data/methods inside a class.

There are ONLY 3 main access levels:
------------------------------------------------------------------------------------------------------------------------

1️⃣ public
✔️ Can be accessed from anywhere
✔️ Inside class
✔️ Outside class
✔️ Through object
✔️ Even from other files

------------------------------------------------------------------------------------------------------------------------

2️⃣ private
❌ Cannot be accessed from outside the class
❌ Cannot be accessed through object
✔️ Only the class itself can access it
✔️ Used to hide sensitive data → Encapsulation

-------------------------------------------------------------------------------------------------------------------------

3️⃣ protected
✔️ Accessible inside the class
✔️ Accessible in child classes (Inheritance)
❌ NOT accessible from outside using object



🔑 What are Getter and Setter?
⭐ Setter → SET the value of a private variable
⭐ Getter → GET the value of a private variable


==========================================================================================================================



⭐ 1. WHAT IS A CONSTRUCTOR? (Very Easy Definition)
A constructor is a special function inside a class that:

Runs automatically when an object is created

Has the same name as the class

Has no return type

Is used to initialize object values

📌 You never call it manually. It calls itself.
 
⭐ WHY DO WE USE CONSTRUCTORS?

✔ To set initial 
✔ To allocate memory/resources
✔ To avoid garbage values
✔ To place object in a valid state

⭐ TYPES OF CONSTRUCTORS
1️⃣ Default Constructor
2️⃣ Parameterized Constructor
3️⃣ Copy Constructor
dynamic
(Later you can learn more types like private, overloaded, , etc.)
---------------------------------------------------------------------------------------------
⭐ 2. DEFAULT CONSTRUCTOR
📌 Definition
A default constructor is a constructor with no arguments that 
initializes an object automatically when it is created.

⭐ Example (Very Simple)
class Student {
public:
    Student() {                 // default constructor
        cout << "Default Constructor Called!\n";
    }
};

int main() {
    Student s;                  // constructor runs automatically
}

⭐ Where Default Constructor is Useful?
When you want every object to start with the same default values

When you want to print a message on object creation
-------------------------------------------------------------------------------------------------------
⭐ 3. PARAMETERIZED CONSTRUCTOR
📌 Definition
A parameterized constructor is a constructor that takes arguments 
and allows different objects to be initialized with different values.

⭐ Example
class Student {
public:
    int age;
    string name;

    Student(int a, string n) {    // parameterized
        age = a;
        name = n;
    }
};

int main() {
    Student s(20, "Ubaid");       // passing values
}
⭐ Why Parameterized Constructor?
✔ To give different values to different objects
✔ To avoid default values
✔ To initialize attributes based on user input
-------------------------------------------------------------------------------------------------------------
⭐ 4. COPY CONSTRUCTOR
📌 Definition
A constructor that copies data of one object into another object.

Used when:

You want to create a clone of an object

You want deep copy

You pass objects by value

⭐ Example
class Student {
public:
    int age;

    Student(int a) {             // parameterized
        age = a;
    }

    Student(Student &obj) {      // copy constructor
        age = obj.age;
    }
};

int main() {
    Student s1(20);
    Student s2(s1);              // copy constructor called
}
⭐ Why Copy Constructor?
✔ To copy values
✔ To avoid shallow copying
✔ To create backup of an object
✔ Important for objects with dynamic memory
-----------------------------------------------------------------------------------------------------------------------------

⭐ SUPER SHORT INTERVIEW ANSWER
A constructor is a special function that initializes objects.
A default constructor has no parameters, a parameterized constructor takes parameters,
 and a copy constructor creates a new object by copying an existing object.

================================================================================================================================



🔵 SHALLOW COPY (Surface Copy)
Copies only the address, not the actual data.

✔ Explanation (easy)
If two objects share the same memory, changing one will change the other.

✔ Real-life example:
Two people using the same notebook.
If one writes inside it → both see the changes.

🟢 DEEP COPY (Complete Copy)
Copies the actual data, not the address.

✔ Explanation (easy)
Both objects get separate memory, so changing one will NOT affect the other.

✔ Real-life example:
Two people having separate notebooks.
Writing in one notebook does NOT affect the other.

=============================================================================================================================


Copy Assignment : 

The copy assignment operator copies the values of one object to another already existing object using =



-------------------------------------------------------------------------------------------------------------------------------

Destructor :

A destructor is a special function of a class that is called automatically when an object is destroyed.

Object is destroyed automatically when it goes out of scope

Name is same as class

Starts with ~

No return type

No parameters

-------------------------------------------------------------------------------------------------------------------------------


Static keyword :

The static keyword in C++ is used to make a variable or function remain in memory for the entire program
instead of being created and destroyed again and again.

Can be called without object

Can access only static members

-------------------------------------------------------------------------------------------------------------------------------

Static Function?
A static member function belongs to the class, not to the object.

⭐ Key points:
You can call it without creating an object

It can access only static data members

It is shared by all objects

==============================================================================================================================

Single Inheritance :

Single Inheritance is a type of inheritance in which one child class derives (inherits) properties and
 methods from one parent class only.

Why do we use Single Inheritance?
To reuse code.

Instead of writing the same functions again in Child,
we write them in Parent → Child automatically gets them.

--------------------------------------------------------------------------------------------------------------------------------

Multilevel Inheritance :

Multilevel Inheritance is a type of inheritance in which a class is derived from another derived class, forming a chain of inheritance.
In this model:

➡️ Class B inherits Class A
➡️ Class C inherits Class B

So Class C indirectly inherits the properties and methods of Class A through Class B.

🧠 Easy Explanation (Very Simple Words)
Think of it like:

Grandfather → Father → Son

The son gets features of the father and the grandfather.

A → B → C
B gets A’s properties

C gets both A’s and B’s properties

This continuous chain is called Multilevel Inheritance.

Example (Simple Line)
"A child inherits from a parent, and that parent inherits from a grandparent.

--------------------------------------------------------------------------------------------------------------------------------

Multiple Inheritance :

When a child class inherits  from more than one parent class, it is called multiple inheritance.


Parent1  →  
           →  Child  
Parent2  →

The child gets the qualities of BOTH parents.

--------------------------------------------------------------------------------------------------------------------------------

Hierarchical Inheritance :

When one parent class is inherited by multiple child classes, it is called Hierarchical Inheritance.

        Parent
        /    \
   Child1   Child2

--------------------------------------------------------------------------------------------------------------------------------

Hybrid Inheritance :

Hybrid Inheritance is a combination of two or more types of inheritance in a single program.
It usually combines:

Single Inheritance

Multiple Inheritance

Multilevel Inheritance

Hierarchical Inheritance

⚠️ In short:
When inheritance forms a complex structure (mix of types), it is Hybrid Inheritance.

         Person
        /      \
   Student   Teacher
        \     /
        Monitor





--------------------------------------------------------------------------------------------------------------------------------

Inheritance Ambiguity :

Inheritance Ambiguity happens when a child class inherits from two parent classes that have functions with the same name.
The compiler gets confused:

“Which parent’s function should I call?”

This confusion is called ambiguity.
You must solve it by using scope resolution (::).

===================================================================================================================================

⭐ Definition of Compile-Time Polymorphism
Compile-time Polymorphism (also called static polymorphism) is a type of polymorphism in which the function to be executed
 is decided by the compiler at compile time.
It is achieved using Function Overloading and Operator Overloading.

✔ Short Exam Line
"Compile-time polymorphism is the ability of the program to resolve the function call at compile time using overloading."

⭐ Definition of Runtime Polymorphism
Runtime Polymorphism (also called dynamic polymorphism) is a type of polymorphism in which the function to be executed
 is decided when the program is running.
It is achieved using Function Overriding with virtual functions.

✔ Short Exam Line
"Runtime polymorphism allows a base class pointer to call the overridden function of a derived class at runtime using virtual functions."

⭐ SEPARATE 1-LINE DEFINITIONS (Very Simple)
✔ Compile-time Polymorphism:
"Polymorphism where function call is resolved at compile time is called compile-time polymorphism."

✔ Runtime Polymorphism:
"Polymorphism where function call is resolved during program execution is called runtime polymorphism."





*/