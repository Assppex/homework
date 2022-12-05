# CMakeList.txt: проект CMake для Homework5; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Добавьте источник в исполняемый файл этого проекта.
add_executable (Homework5 "Homework5.cpp" "Homework5.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Homework5 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
