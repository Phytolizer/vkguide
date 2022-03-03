cmake_minimum_required(VERSION 3.16...3.23)

project(
    "vkguide"
    LANGUAGES C
    VERSION "0.1.0"
    DESCRIPTION "Vulkan guide in C"
    HOMEPAGE_URL "https://github.com/Phytolizer/vkguide"
)

find_package(SDL2 CONFIG REQUIRED)

set(SRC main.c vk_engine.c)
list(TRANSFORM SRC PREPEND "source/")
add_executable(vkguide ${SRC})
target_compile_features(vkguide PRIVATE c_std_11)
target_include_directories(vkguide PRIVATE include)
target_link_libraries(vkguide PRIVATE vulkan SDL2::SDL2)
