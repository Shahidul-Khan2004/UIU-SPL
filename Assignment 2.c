#include <stdio.h>
#include <string.h>

struct student {
    int ID;
    char Name[32];
    float CGPA;
};

int count = 0;

void insertRecord(struct student s[]);
void displayAll(struct student s[]);
void updateRecord(struct student s[]);
void searchRecord(struct student s[]);
void deleteRecord(struct student s[]);
void sortRecords(struct student s[]);
void saveToFile(struct student s[]);
void loadFromFile(struct student s[]);


int main (void) {
    int choice; 
    struct student s[30];
    printf("===== Student Management System =====\n");
    printf("1. Add New Student\n");
    printf("2. Display All Stundents Information\n");
    printf("3. Update student record\n");
    printf("4. Search for a student by name\n");
    printf("5. Delete record\n");
    printf("6. Sort the records by name\n");
    printf("7. Save info to file\n");
    printf("8. Load data from file\n");
    printf("9. Exit\n");
    while (1) {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        if (choice == 1) insertRecord(s);
        else if (choice == 2) displayAll(s);
        else if (choice == 3) updateRecord(s);
        else if (choice == 4) searchRecord(s);
        else if (choice == 5) deleteRecord(s);
        else if (choice == 6) sortRecords(s);
        else if (choice == 7) saveToFile(s);
        else if (choice == 8) loadFromFile(s);
        else if (choice == 9) {
            printf("exitting...");
            return 0;
        }
        else printf("invalid choice\n");
    }

}

void insertRecord(struct student s[]) {
    printf("Enter Student ID: ");
    scanf("%d", &s[count].ID);
    printf("Enter Student Name: ");
    scanf(" %[^\n]", s[count].Name);
    printf("Enter CGPA: ");
    scanf("%f", &s[count].CGPA);
    printf("New student added.\n");
}

void displayAll(struct student s[]) {
    printf("Student Information");
    for (int j = 0; j < count; j++) {
        printf("\nID: %d          Name: %s          CGPA: %.2f", s[j].ID, s[j].Name, s[j].CGPA);
    }
}

void updateRecord(struct student s[]) {
    int id;
    printf("Enter Student ID: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if(s[i].ID == id) {
            printf("Found!\n");
            printf("New name: ");
            scanf(" %[^\n]", s[i].Name);
            printf("Enter new CGPA: ");
            scanf("%f", &s[i].CGPA);
            printf("Update successful.\n");
        }
    }
}

void searchRecord(struct student s[]) {
    char name[64];
    printf("Enter Student name: ");
    scanf(" %[^\n]", name);
    for (int i = 0; i < count; i++) {
        if(strcmp(s[i].Name, name) == 0) {
            printf("Found!\n");
            printf("ID: %d          Name: %s          CGPA: %.2f", s[i].ID, s[i].Name, s[i].CGPA);
        }
    }
}

void deleteRecord(struct student s[]) {
    int id;
    printf("Enter Student ID: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if(s[i].ID == id) {
            for (int j = i; j < count - 1; j++) {
                strcpy(s[j].Name, s[j + 1].Name);
                s[j].ID = s[j + 1].ID;
                s[j].CGPA = s[j + 1].CGPA;
            }
            count--;
            printf("Deleted Successfully.\n");
        }
    }
}

void sortRecords(struct student s[]) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - 1 - i; j++) {
            if(strcmp(s[j].Name, s[j + 1].Name) > 0) {
                struct student temp;
                temp.CGPA = s[j + 1].CGPA;
                temp.ID = s[j + 1].ID;
                strcpy(temp.Name, s[j + 1].Name);
                s[j + 1].CGPA = s[j].CGPA;
                s[j + 1].ID = s[j].ID;
                strcpy(s[j + 1].Name, s[j].Name);
                s[j].CGPA = temp.CGPA;
                s[j].ID = temp.ID;
                strcpy(s[j].Name, temp.Name);
            }
        }
    }
}

void saveToFile(struct student s[]) {
    FILE *fp;
    fp = fopen("record.txt", "w");
    for (int j = 0; j < count; j++) {
        fprintf(fp, "%d          %s          %f\n", s[j].ID, s[j].Name, s[j].CGPA);
    }
    fclose(fp);
}

void loadFromFile(struct student s[]) {
    FILE *fp;
    fp = fopen("record.txt", "r");
    for (int i = 0; i < count; i++) {
        fscanf(fp, "%d", &s[i].ID);
        fscanf(fp, " %[A-Z a-z]", s[i].Name);
        fscanf(fp, "%f", &s[i].CGPA);
    }
}