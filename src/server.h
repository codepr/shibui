#ifndef SERVER_H
#define SERVER_H

#define PORT ("6373")
#define MAX_DATA_SIZE (10485760)
#define MAX_EVENTS (100)

#include "map.h"
#include "partition.h"

void start_server(map_t, const char *, const char *);

#endif
