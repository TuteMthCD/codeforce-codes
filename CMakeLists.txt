cmake_minimum_required (VERSION 3.16)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(codeforces)

add_executable(coinflip coinflip/main.cpp)

target_link_libraries(coinflip m)

add_custom_target(exe ALL
    DEPENDS coinflip
    COMMAND ./coinflip
    COMMENT "VAMOOOOOOOOOOOOS PAPA COMPILO"
    COMMENT "EJECUTANAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAANDO"
)
