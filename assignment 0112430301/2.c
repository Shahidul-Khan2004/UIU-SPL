#include <stdio.h>

struct student {
    int ID;
    char Name[32];
    float CGPA;
};

int i = 0;

int add_new_student(struct student s[]);
void display_info(struct student s[]);
void top_student(struct student s[]);
void avg_cg(struct student s[]);

int main (void) {
    int choice; 
    struct student s[30];
    printf("===== Student Management System =====\n");
    printf("1. Add New Student\n");
    printf("2. Fint Top Student (Highest CGPA)\n");
    printf("3. Find Average CGPA of Student\n");
    printf("4. Display All Stundents Information\n");
    printf("5. Exit\n");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    while (choice < 1 || choice > 5) {
        printf("Not a valid choice");
        scanf("%d", &choice);
    }
    while(choice == 1) {
        if(add_new_student(s)) {
            printf("Student added successfully!\n");
            i++;
        }
        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);
    }
    while(choice == 2) {
        top_student(s);
        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);
    }
    while(choice == 3) {
        avg_cg(s);
        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);
    }
    while(choice == 4) {
        display_info(s);
        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);
    }
    if (choice == 5) return 0;
}

int add_new_student(struct student s[]) {
    printf("Enter Student ID: ");
    scanf("%d", &s[i].ID);
    printf("Enter Student Name: ");
    scanf(" %[^\n]", s[i].Name);
    printf("Enter CGPA: ");
    scanf("%f", &s[i].CGPA);
    return 1;
}

void display_info(struct student s[]) {
    printf("Student Information");
    for (int j = 0; j < i; j++) {
        printf("\nID: %d          Name: %s          CGPA: %.2f", s[j].ID, s[j].Name, s[j].CGPA);
    }
}

void top_student(struct student s[]) {
    printf("Top Student:");
    int max = 0;
    for (int j = 0; j < i; j++) {
        if(s[j].CGPA > s[max].CGPA) max = j;
    }
    printf("\nID: %d          Name: %s          CGPA: %.2f", s[max].ID, s[max].Name, s[max].CGPA);
}

void avg_cg(struct student s[]) {
    printf("Total Students: %d", i);
    float sum = 0;
    for (int j = 0; j < i; j++) {
        sum += s[j].CGPA;
    }
    printf("\nAverage CGPA: %.3f", sum / i);
}