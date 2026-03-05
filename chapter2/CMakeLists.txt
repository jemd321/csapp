set(COMMON_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../common)

add_executable(prob_2_61
        prob_2_61.c
        tests/test_2_61.c
        tests/test_case.c
        ${COMMON_DIR}/library.c
)