# project sources

set(SLEET_SRC "")

set(SLEET_SRC
        main.cpp)

add_executable(sleet ${SLEET_SRC})

#
#   libs
#

# Vulkan setup
find_package(Vulkan REQUIRED)
target_link_libraries (sleet Vulkan::Vulkan)

# GLFW3 setup
find_package(PkgConfig REQUIRED)
pkg_search_module(GLFW REQUIRED glfw3)
include_directories(${GLFW_INCLUDE_DIRS})
target_link_libraries(sleet ${GLFW_STATIC_LIBRARIES})

# GLM
find_package(PkgConfig REQUIRED)
pkg_search_module(GLM REQUIRED glfw3)
include_directories(${GLM_INCLUDE_DIRS})
target_link_libraries(sleet ${GLM_STATIC_LIBRARIES})
