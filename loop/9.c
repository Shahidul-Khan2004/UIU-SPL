#include <stdio.h>

int main (void) {
    /* simpler version
    float att, ass, ct, mid, final, total;
    int students;
    scanf("%d", &students);
    for (int i = 0; i < students; i++) {
        scanf("%f %f %f %f %f", &att, &ass, &ct, &mid, &final);
        total = att + ass + ct + mid * 0.6 + final * 0.4;
        if (total >= 90 && total <= 100) printf("Student %d : A\n", i + 1);
        else if (total >= 86 && total <= 89) printf("Student %d : A-\n", i + 1);
        else if (total >= 82 && total <= 85) printf("Student %d : B+\n", i + 1);
        else if (total >= 78 && total <= 81) printf("Student %d : B\n", i + 1);
        else if (total >= 74 && total <= 77) printf("Student %d : B-\n", i + 1);
        else if (total >= 70 && total <= 73) printf("Student %d : C+\n", i + 1);
        else if (total >= 66 && total <= 69) printf("Student %d : C\n", i + 1);
        else if (total >= 62 && total <= 65) printf("Student %d : C-\n", i + 1);
        else if (total >= 58 && total <= 61) printf("Student %d : D+\n", i + 1);
        else if (total >= 55 && total <= 57) printf("Student %d : D\n", i + 1);
        else if (total >= 0 && total < 55) printf("Student %d : F\n", i + 1);
        else printf("invalid input\n");
    }*/
    float att, ass, ct, mid, final;
    int students;
    float total[students];
    scanf("%d", &students);
    for (int i = 0; i < students; i++) {
        scanf("%f %f %f %f %f", &att, &ass, &ct, &mid, &final);
        total[i] = att + ass + ct + mid * 0.6 + final * 0.4;
    }
    for (int i = 0; i < students; i++) {
        if (total[i] >= 90 && total[i] <= 100) printf("Student %d : A\n", i + 1);
        else if (total[i] >= 86 && total[i] <= 89) printf("Student %d : A-\n", i + 1);
        else if (total[i] >= 82 && total[i] <= 85) printf("Student %d : B+\n", i + 1);
        else if (total[i] >= 78 && total[i] <= 81) printf("Student %d : B\n", i + 1);
        else if (total[i] >= 74 && total[i] <= 77) printf("Student %d : B-\n", i + 1);
        else if (total[i] >= 70 && total[i] <= 73) printf("Student %d : C+\n", i + 1);
        else if (total[i] >= 66 && total[i] <= 69) printf("Student %d : C\n", i + 1);
        else if (total[i] >= 62 && total[i] <= 65) printf("Student %d : C-\n", i + 1);
        else if (total[i] >= 58 && total[i] <= 61) printf("Student %d : D+\n", i + 1);
        else if (total[i] >= 55 && total[i] <= 57) printf("Student %d : D\n", i + 1);
        else if (total[i] >= 0 && total[i] < 55) printf("Student %d : F\n", i + 1);
        else printf("invalid input\n");
    }
}