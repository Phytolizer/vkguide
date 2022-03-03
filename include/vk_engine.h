#pragma once

#include "vk_types.h"
#include <SDL2/SDL_video.h>
#include <stdbool.h>

typedef struct {
    bool is_initialized;
    int frame_number;
    VkExtent2D window_extent;
    SDL_Window* window;
} vulkan_engine_t;

void vulkan_engine_init(vulkan_engine_t* engine);
void vulkan_engine_cleanup(vulkan_engine_t* engine);
void vulkan_engine_draw(vulkan_engine_t* engine);
void vulkan_engine_run(vulkan_engine_t* engine);
