cmake_minimum_required(VERSION 2.8)

project(crc32)

add_library(${PROJECT_NAME} SHARED "main.c" "crc32.c")

add_definitions(-DBUILD_DLL)
