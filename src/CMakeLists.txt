# Build a library with my application sources
set(APP_LIB1_SOURCE
    module/module.c
)

set(APP_LIB2_SOURCE
    module/internal.c
)

add_library(${APP_LIB1_NAME} ${APP_LIB1_SOURCE})
add_library(${APP_LIB2_NAME} ${APP_LIB2_SOURCE})

# Add main(..) to the application library to have something we can run
add_executable(${APP_NAME} main.c)
target_link_libraries(${APP_NAME} ${APP_LIB1_NAME} ${APP_LIB2_NAME})
