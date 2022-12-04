# CMakeList.txt: проект CMake для HomeWork6v2; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Добавьте источник в исполняемый файл этого проекта.
add_executable (HomeWork6v2 "HomeWork6v2.cpp" "HomeWork6v2.h" "Vector2.cpp" "Vector2.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET HomeWork6v2 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
