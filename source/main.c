#include "vk_engine.h"

int main(int argc, char** argv) {
    vulkan_engine_t engine = {0};
    vulkan_engine_init(&engine);
    vulkan_engine_run(&engine);
    vulkan_engine_cleanup(&engine);
    return 0;
}
