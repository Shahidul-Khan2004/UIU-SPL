#include <stdio.h>

struct Employee {
    int id;
    char name[64];
    int age;
};

void addEmployee(struct Employee *EmployeeList, int *numEmployees);
void displayEmployee(struct Employee *Employee_ptr);
struct Employee* updateEmployeeInfo(struct Employee *EmployeeList, int numEmployees, char *EmployeeName);
 
int main (void) {
    struct Employee EmployeeList[100];
    int numEmployee = 0;
    int *p = &numEmployee;
    printf("1. add\n");
    printf("2. update\n");
    printf("3. display\n");
    printf("4. exit\n");
    int choice;
    while (1) {
        printf("\nenter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            addEmployee(EmployeeList, p);
        }
        if (choice == 2) {

        }
        if (choice == 3) {
            struct Employee *ptr = EmployeeList;
            for (int i = 0; i < numEmployee; i++) {
                printf("\nEmplyee No. %d", i + 1);
                displayEmployee(ptr + i);
            }
        }
        if (choice == 4) {
            return 0;
        }
    }
}

void addEmployee(struct Employee *EmployeeList, int *numEmployees) {
    printf("id: ");
    scanf("%d", &(*(EmployeeList + *numEmployees)).id);//&EmployeeList[*numEmployees].id
    printf("name: ");
    scanf(" %[^\n]", (EmployeeList + *numEmployees)->name);
    printf("age: ");
    scanf("%d", &(EmployeeList + *numEmployees)->age);
    (*numEmployees)++;
}

void displayEmployee(struct Employee *Employee_ptr) {
    printf("\nID: %d", Employee_ptr->id);
    printf("\nname: %s", Employee_ptr->name);
    printf("\nage: %d", Employee_ptr->age);
}
struct Employee* updateEmployeeInfo(struct Employee *EmployeeList, int numEmployees, char *EmployeeName) {
    
}