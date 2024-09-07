## Classes and Objects

Function inside a class is called as **member function or method**. More specifically inline member function.

Variable inside a class is called as **data member**.

- **Access specifier**
    1. **Public** → A variable declared or initialized with public key word can be accessed using the class object anywhere in the program. In general a particular task is done in public. For example computing area of circle.
    2. **Private** → A variable declared or initialized with private access specifier cannot be accessed outside the class. The public data members of the same class can access the private data members. In general variables are declared in private. Variables such as pi value, radius. Data members are **private by default** in cpp.
    3. **Protected** → Complete this when inheritance topic

**Scope resolution operator** is used to define a function that is outside of a class. But the function delcaration is inside the class with public access specifier.

- **Constructor**
    
    It is a special member function having the same name as that of a class which is used to initialize some valid values to the data members. It is executed automatically whenever object is created. It is defined as same as function but with no return type.
    
    1. **Default Constructor** → It is used to initialized a default value when data members are not assigned value. [without parameter]
    2. **Parameterized Constructor** → It is used to initialize value at the main during object creation. Passing value to the object. [with parameter]
    3. **Copy constructor** → During object creation, passing another object like an argument.

**Destructor** is a feature that is invoked automatically when object is created allows us to destroy the clear the memory automatically. Destructor is same syntax as constructor including a tild symbol ~

## Inheritance

It is a feature that allows us to use objects of one class acquired the properties of another class. For example if class a has two properties and class b has another 2 properties. If class b is in need of property same as that of class a .In this case class a can share the required property to class b. This kind of process is called inheritance.

1. Single Ineritance →  One Super class must share the properties to one sub class
2. Multiple Inheritance → Atleast 2 super classes must have to share their properties to sub class
3. Multilevel Inheritance → A→ B→ C→ D
4. Hybrid Inheritance → combination of the rest of 4 inheritances
5. Hierarchical Inheritance → One super class must share the properties to atleast 2 sub classes


## Polymorphism

Poly means many morphs means shapes

### Compile Time Polymorphism

1. Function Overloading
2. Operator Overloading

### Run Time  Polymorphism

Virtual Function

## Abstraction

## Encapsulation

### Overloading

1. **Function Overloading** is a feature that allows to define multiple functions with the same number but with different paramaters or with different return type.
2. **Constructor Overloading** is a feature that allows to define multiple constructors with the same number but with different paramaters.
3. Operator Overloading is a feature
4. Unary Operator Overloading

### Overriding

**Method or function overriding** is a feature that allow the redefinition of function of a subclass inherited from the parent class. Redefining a function that is inherited in another class. In this concept the derived class object can only be access derived class function.

**Base Class Pointer Derived Class Object or Method overriding with pointers and without virtual function** is same as normal method overriding but derived class can only be able to access the base class function.

**Method overriding with pointers and virtual keyword or virtual function** is the same as method overriding with pointers. In this concept the derived class can access the derived class function using virtual keyword in fron the base class function.