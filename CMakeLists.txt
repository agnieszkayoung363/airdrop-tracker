cmake_minimum_required(VERSION 3.16)
project(airdrop-tracker CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(airdroptracker
    src/main.cpp
    src/wallets.cpp
    src/tasks.cpp
    src/alerts.cpp
)

target_include_directories(airdroptracker PRIVATE include)

if(WIN32)
    target_link_libraries(airdroptracker PRIVATE userenv)
endif()
