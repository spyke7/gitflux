cmake_minimum_required(VERSION 3.15)
project(GitFlux VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# ---- Add FTXUI from vendor directory ----
add_subdirectory(lib/ftxui)

# ---- Executable ----
add_executable(gitflux
    src/main.cpp
    src/core/cli.cpp
    src/render/render2Dart.cpp
)

target_include_directories(gitflux PRIVATE include)

# ---- Link FTXUI ----
target_link_libraries(gitflux
    PRIVATE ftxui::screen
    PRIVATE ftxui::dom
    PRIVATE ftxui::component
)

# ---- Warnings ----
if(MSVC)
    target_compile_options(gitflux PRIVATE /W4)
else()
    target_compile_options(gitflux PRIVATE -Wall -Wextra)
endif()

install(TARGETS gitflux DESTINATION bin)