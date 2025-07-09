#include <stdio.h>

struct player {
    char Name[64];
    int ID;
    int matches;
    int G[10];
};

int goalsScored(struct player p, int matches);
int selectBestScorer(struct player b[], int total_players);

int main (void) {
    struct player p[3];
    for (int i = 0; i < 3; i++) {
        scanf(" %[^\n]", p[i].Name);
        scanf("%d", &p[i].ID);
        scanf("%d", &p[i].matches);
        for (int j = 0; j < p[i].matches; j++) scanf("%d", &p[i].G[j]);
    }
    int i = selectBestScorer(p, 3);
    printf("%s", p[i].Name);
}

int goalsScored(struct player p, int matches) {
    int sum = 0;
    for (int i = 0; i < matches; i++) sum += p.G[i];
    return sum;
}

int selectBestScorer(struct player b[], int total_players) {
    int h_player_i = 0;
    for (int i = 0; i < total_players; i++) {
        int total_goalsi = goalsScored(b[i], b[i].matches);
        int total_goals_max = goalsScored(b[h_player_i], b[h_player_i].matches);
        if (total_goalsi > total_goals_max) h_player_i = i;
    }
    return h_player_i;
}