set(COMMON_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../common)

add_executable(prob_2_61
        prob_2_61.c
        prob_2_61.h
        tests/test_2_61.c
        ${COMMON_DIR}/library.c
)