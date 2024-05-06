#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char * firstName;
    char* lastName;
    int id;
    float gpa;
} Student;

int main()
{
    Student s1 = {"Jan", "Kowalski", 1, 4.2};
    Student s2 = {"Anna", "Nowak", 2, 3.2};
    Student s3 = {"Tomasz", "Nowaczyk", 3, 2.9};
    int tab[] = {3,4,5};
    Student tablica[] = {s1,s2,s3};
    Student tablica2[] = {
        { "Jan", "Nowak", 20, 3.4 },
        { "Anna", "Kowalczyk", 21, 4.2 },
        { "Sylwia", "Mickiewicz", 22, 3.9 }
    };
    return 0;
}
