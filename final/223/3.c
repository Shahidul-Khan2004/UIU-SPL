#include <stdio.h>
#include <string.h>

struct cus {
    int ID;
    char name[64];
    char birthday[16];
    char house[32];
    int cost[3];
};

int substringChecker(char *mainString, char *searchString);

int main(void) {
    int n;
    printf("Number of customers: ");
    scanf("%d", &n);

    struct cus p[n];

    for (int i = 0; i < n; i++) {
        printf("\nCustomer %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &p[i].ID);
        printf("Name: ");
        scanf(" %[^\n]", p[i].name);
        printf("Birthday: ");
        scanf(" %[^\n]", p[i].birthday);
        printf("House: ");
        scanf(" %[^\n]", p[i].house);
        printf("Purchase for last 3 months: ");
        for (int j = 0; j < 3; j++) {
            scanf("%d", &p[i].cost[j]);
        }
    }

    float maxGryAvg = -1, maxSlyAvg = -1;
    int gryIndex = -1, slyIndex = -1;

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 1; j < 3; j++) {
            sum += p[i].cost[j];
        }
        float avg = sum / 3.0;

        if (strcmp(p[i].house, "Gryffindor") == 0 && substringChecker(p[i].name, "est")) {
            if (avg > maxGryAvg) {
                maxGryAvg = avg;
                gryIndex = i;
            }
        }

        if (strcmp(p[i].house, "Slytherin") == 0 && substringChecker(p[i].name, "rus")) {
            if (avg > maxSlyAvg) {
                maxSlyAvg = avg;
                slyIndex = i;
            }
        }
    }

    printf("\nList of Loyal Customers:\n\n");

    printf("Gryffindor:\n");
    if (gryIndex != -1) {
        printf("Name: %s\n", p[gryIndex].name);
        printf("Birthday: %s\n", p[gryIndex].birthday);
        printf("Average Purchase: %.2f\n", maxGryAvg);
    } else {
        printf("Nil\n");
    }

    printf("\nSlytherin:\n");
    if (slyIndex != -1) {
        printf("Name: %s\n", p[slyIndex].name);
        printf("Birthday: %s\n", p[slyIndex].birthday);
        printf("Average Purchase: %.2f\n", maxSlyAvg);
    } else {
        printf("Nil\n");
    }

    return 0;
}

int substringChecker(char *mainString, char *searchString) {
    int lensub = 0, lenmain = 0;
    while (searchString[lensub] != '\0') lensub++;
    while (mainString[lenmain] != '\0') lenmain++;

    for (int i = 0; i <= lenmain - lensub; i++) {
        int flag = 1;
        for (int j = i, k = 0; k < lensub; j++, k++) {
            if (mainString[j] != searchString[k]) {
                flag = 0;
                break;
            }
        }
        if (flag == 1) return 1;
    }
    return 0;
}
