#pragma once

#include <stdbool.h>
#include <stdlib.h>
#include <iostream>
#include <chrono>

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
void graph_put_pixel_colour(int x, int y, int32_t r, int32_t g, int32_t b, int32_t t);
uint32_t graph_get_time();



#ifdef __cplusplus
}
#endif
