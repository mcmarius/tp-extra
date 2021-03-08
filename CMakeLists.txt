# This file handles building each task as sub-project.
#
# Each task becomes an independent project in which you can experiment.
#
# Tasks are added as separate sub-projects so as compilation errors in
# one task don't affect another task.

project(main)

set(CMAKE_C_STANDARD 99)

add_executable(main main.c)
