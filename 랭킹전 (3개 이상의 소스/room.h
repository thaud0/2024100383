#ifndef ROOM_H
#define ROOM_H

#include "player.h"

#define MAX_ROOMS 300

typedef struct {
    Player players[MAX_PLAYERS];
    int player_count;
    int level;
} Room;

int find_room(Room rooms[], int room_count, int level, int M);
int create_new_room(Room rooms[], int *room_count, int level);
void add_player_to_room(Room rooms[], int room_idx, Player player);
int comp(const void *a, const void *b);

#endif // ROOM_H
