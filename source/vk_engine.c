#include "vk_engine.h"
#include "vk_initializers.h"
#include "vk_types.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_vulkan.h>
#include <stdbool.h>

void vulkan_engine_init(vulkan_engine_t* engine) {
    SDL_Init(SDL_INIT_VIDEO);
    SDL_WindowFlags window_flags = SDL_WINDOW_VULKAN;
    engine->window_extent = (VkExtent2D){1700, 900};
    engine->window = SDL_CreateWindow("Vulkan Engine", SDL_WINDOWPOS_UNDEFINED,
                                      SDL_WINDOWPOS_UNDEFINED, (int)engine->window_extent.width,
                                      (int)engine->window_extent.height, window_flags);
}

void vulkan_engine_cleanup(vulkan_engine_t* engine) { SDL_DestroyWindow(engine->window); }

void vulkan_engine_draw(vulkan_engine_t* engine) {}

void vulkan_engine_run(vulkan_engine_t* engine) {
    SDL_Event e;
    bool quit = false;

    while (!quit) {
        while (SDL_PollEvent(&e) != 0) {
            if (e.type == SDL_QUIT) {
                quit = true;
            }
        }

        vulkan_engine_draw(engine);
    }
}
