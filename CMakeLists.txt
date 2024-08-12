cmake_minimum_required (VERSION 3.16)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_BUILD_TYPE Debug)

project(codeforces)

add_executable(coinflip coinflip/main.cpp)
# target_link_libraries(coinflip m)
add_executable(contest_proposal contest_proposal/main.cpp)
add_executable(circle_perimeter circle_perimeter/main.cpp)
add_executable(clock_string clock_string/main.cpp)
add_executable(binary_cut binary_cut/main.cpp)
add_executable(diagonals diagonals/main.cpp)
add_executable(maximize_the_root maximize_the_root/main.cpp)

add_custom_target(exe ALL
    DEPENDS maximize_the_root
    COMMAND ./maximize_the_root
    COMMENT "VAMOOOOOOOOOOOOS PAPA COMPILO"
    COMMENT "EJECUTANAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAANDO"
)
