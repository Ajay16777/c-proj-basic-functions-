#include<stdio.h>
#include<stdlib.h>


// creates a structure template with two members 
// first member is a student number (format of 10 digits: YYYYMMwxyz  YYYY = birthyear, MM = birth month, w = xyz = random 4 digit code)
// second member is a structure with three members: first name, middle name  and last name
// ensure function work for all double variables.
struct student
{
    // first member is a student number 
    //format of 10 digits: YYYYMMwxyz  YYYY = birthyear, MM = birth month, wxyz = random 4 digit code
    int studentNumber;
    struct
    {
        int YYYY;
        int MM;
        int w;
    }number;

    char* studentName;
    struct
    {
        char* firstName;
        char* middleName;
        char* lastName;
    }name;

};
//write a single function that accepts the array of structures and its parameter for printing the array data in a formatted manner
// 2001041234 -- last name -- first name -- middle name
// ensure function work for all double variables.
void print(struct student *array, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d -- %s -- %s -- %s\n", array[i].studentNumber, array[i].name.lastName, array[i].name.firstName, array[i].name.middleName);
    }
}

// test program that creates and initializes an array of five of these structures
//make up pretend names/numbers for 5 students
// ensure function work for all double variables.
int main()
{   
    char* firstName[5] = {"John", "Jane", "Mary", "Bob", "Tom"};
    char* middleName[5] = {"Doe", "Smith", "Jones", "Brown", "Wilson"};
    char* lastName[5] = {"Smith", "", "Brown", "Wilson", "Doe"};
    int studentNumber[5] = {123456456, 123456345, 12345345, 12345465, 1234556456};
    struct student array[5];
    for(int i = 0; i < 5; i++)
    {
        array[i].studentNumber =    studentNumber[i];
        array[i].name.lastName = lastName[i];
        array[i].name.firstName =   firstName[i];
        array[i].name.middleName =  middleName[i];
    }
    //print the array
    print(array, 5);


    
    return 0;
}

