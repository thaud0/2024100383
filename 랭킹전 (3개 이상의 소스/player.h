#ifndef PLAYER_H
#define PLAYER_H

#define MAX_NAME_LEN 17
#define MAX_PLAYERS 300

typedef struct {
    int level;
    char name[MAX_NAME_LEN];
} Player;

#endif // PLAYER_H
