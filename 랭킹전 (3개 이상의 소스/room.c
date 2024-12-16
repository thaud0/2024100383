#include "room.h"
#include <stdlib.h>
#include <string.h>

int find_room(Room rooms[], int room_count, int level, int M) {
    for (int i = 0; i < room_count; i++) {
        if (abs(rooms[i].level - level) <= 10 && rooms[i].player_count < M) {
            return i;
        }
    }
    return -1;
}

int create_new_room(Room rooms[], int* room_count, int level) {
    rooms[*room_count].level = level;
    rooms[*room_count].player_count = 0;
    return (*room_count)++;
}

void add_player_to_room(Room rooms[], int room_idx, Player player) {
    rooms[room_idx].players[rooms[room_idx].player_count++] = player;
}
