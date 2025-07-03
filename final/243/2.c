#include <stdio.h>

struct student {
    char name[64];
    char id[32];
    float marks[5];
    float avg;
};

int CURRENT_STUDENT = 0;

void add_a_new_student(struct student s[]);
void display_students(struct student s[]);
void find_top_performer(struct student s[]);
void find_failing_student(struct student s[]);

int main (void) {
    struct student s[100];
    printf("Student Performence Management System\n");
    printf("1. Add a new student\n");
    printf("2. Display all students\n");
    printf("3. Find top performer\n");
    printf("4. Find failing students\n");
    printf("5. Exit\n");
    int choice;
    while (1) {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        if (choice < 1 || choice > 5) {
            printf("\nNot a valid choice\n");
        }
        if (choice == 1) {
            add_a_new_student(s);
        } 
        if (choice == 2) {
            display_students(s);
        }
        if (choice == 3) {
            find_top_performer(s);
        }
        if (choice == 4) {
            find_failing_student(s);
        }
        if (choice == 5) return 0;
    }
}

void add_a_new_student(struct student s[]) {
    printf("\nEnter Student Name: ");
    scanf(" %[^\n]", s[CURRENT_STUDENT].name);
    printf("Enter Student ID: ");
    scanf(" %[^\n]", s[CURRENT_STUDENT].id);
    printf("Enter Student Marks for 5 Subjects: ");
    for(int i = 0; i < 5; i++) scanf("%f", &s[CURRENT_STUDENT].marks[i]);
    float total = 0;
    for (int i = 0; i < 5; i++) total += s[CURRENT_STUDENT].marks[i];
    float average = total / 5;
    s[CURRENT_STUDENT].avg = average;
    CURRENT_STUDENT++;
}

void display_students(struct student s[]) {
    for (int i = 0; i < CURRENT_STUDENT; i++) {
        printf("ID: %s, Name: %s, Marks: [", s[i].id, s[i].name);
        for(int j = 0; j < 5; j++) {
            printf("%.2f", s[i].marks[j]);
            if (j != 4) printf(", ");
            else printf("], ");
        }
        printf("Average: %.2f\n", s[i].avg);
    }
}

void find_top_performer(struct student s[]) {
    float top = s[0].avg;
    int topi = 0;
    for (int i = 1; i < CURRENT_STUDENT; i++) {
        if (s[i].avg > top) {
            top = s[i].avg;
            topi = i;
        }
    }
    printf("Top Performer: %s, Average Marks: %.2f\n", s[topi].name, s[topi].avg);
}

void find_failing_student(struct student s[]) {
    printf("Failing Students:\n");
    for (int i = 0, failed = 0; i < CURRENT_STUDENT; i++) {
        for (int j = 0; j < 5; j++) {
            if(s[i].marks[j] < 40) {
                failed++;
            }
        }
        if (failed != 0) {
            printf("ID: %s, Name: %s, Failed Subjects: %d\n", s[i].id, s[i].name, failed);
        }
    }
}