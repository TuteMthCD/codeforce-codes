cmake_minimum_required (VERSION 3.16)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_BUILD_TYPE Debug)

project(codeforces)

add_executable(coinflip coinflip/main.cpp)
# target_link_libraries(coinflip m)

add_executable(contest_proposal contest_proposal/main.cpp)
# target_link_libraries(coinflip m)

add_executable(circle_perimeter circle_perimeter/main.cpp)
# target_link_libraries(coinflip m)

add_executable(clock_string clock_string/main.cpp)
# target_link_libraries(coinflip m)

add_custom_target(exe ALL
    DEPENDS clock_string
    COMMAND ./clock_string
    COMMENT "VAMOOOOOOOOOOOOS PAPA COMPILO"
    COMMENT "EJECUTANAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAANDO"
)
