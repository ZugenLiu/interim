#include "minilisp.h"
#include <stdint.h>

int machine_video_set_pixel(uint32_t x,uint32_t y,uint32_t c);
int machine_video_rect(uint32_t x,uint32_t y,uint32_t w,uint32_t h,uint32_t c);
int machine_video_flip();

int machine_get_key();
int machine_get_modifiers();

Cell* machine_save_file(Cell* cell, char* path);
Cell* machine_load_file(char* path);
Cell* machine_poll_udp();
Cell* machine_send_udp(Cell* data_cell);