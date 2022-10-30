### Abstract Data Types
int, float, double, long etc are build in data types used for perfoming basic arithmetic operations.
Suppose we need to define our own user-defined Operations for our own user-defined data type.for this purpose
we can create our own user-defined data structures along with their operations whatever we like, those type of 
data structures  are called Abstract Data type (ADT).
The process of providing only essentials and hiding details is known as abstraction. e.g when we press car accelator
the car's speed increases but we don't know how it works behind. this is called abstraction.

### Struct 
Struct is a **Composite** data type to store several related variable at one place So that we can perform diffirent data type operations by creating variables just once. Unlike *class* strucs in C++ are value type rather than refrence type.it is usefull when we don't need to modify data after strcut initializaion.
**Size of Struct**: size of the struct is sum of all data members.
int 4Bytes, char 1Byte (Size of any Pointer is 8 Bytes) 

  ``` struct Person { ```struct with Person attributes.<br>
    ``` string name; int salary;``` Data members <br>
      ```Person p1;``` Structure variable<br>
      ```p1={"ali",5500};```  initializing value to struct data memebers<br>
      ``` cout<<"Name: "<<p1.name<<endl;``` Display values <br>
