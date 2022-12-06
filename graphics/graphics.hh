#pragma once

#include <stdbool.h>
#include <stdlib.h>
#include <iostream>

#ifdef __cplusplus
extern "C" {
#endif

void graph_init(size_t horiz, size_t vertic);
void graph_is_closed();
void graph_put_pixel(int x, int y, int state);
void graph_flush();
void graph_clear();
void graph_print(int val);
int graph_rand();


#ifdef __cplusplus
}
#endif
