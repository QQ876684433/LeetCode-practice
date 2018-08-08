cmake_minimum_required(VERSION 3.12)
project(LeetCode-practice)

set(CMAKE_CXX_STANDARD 17)

set(googleTestDir ./googletest)

#Add the google test subdirectory
add_subdirectory(${googleTestDir})
#include googletest/include dir
include_directories(${googleTestDir}/googletest/include)
#include the googlemock/include dir
include_directories(${googleTestDir}/googlemock/include)

set(SOURCE_FILE
        test/中级算法/SumOfThreeNumbers.cpp
        src/中级算法/SumOfThreeNumbers.cpp src/中级算法/SumOfThreeNumbers.h)
add_executable(SumOfThreeNumbers ${SOURCE_FILE})

set(LENGTH_OF_LONGEST_SUBSTRING
        test/中级算法/LengthOfLongestSubstring.cpp
        src/中级算法/LengthOfLongestSubstring.cpp src/中级算法/LengthOfLongestSubstring.h)
add_executable(LengthOfLongestSubstring ${LENGTH_OF_LONGEST_SUBSTRING})

set(ADD_TWO_NUMS
        test/中级算法/AddTwoNums.cpp
        src/中级算法/AddTwoNums.cpp src/中级算法/AddTwoNums.h)
add_executable(AddTwoNums ${ADD_TWO_NUMS})

set(FIND_MEDIAN_SORTED_ARRAYS
        test/中级算法/FindMedianSortedArrays.cpp
        src/中级算法/FindMedianSortedArrays.h src/中级算法/FindMedianSortedArrays.cpp)
add_executable(FindMedianSortedArrays ${FIND_MEDIAN_SORTED_ARRAYS})

set(LONGEST_PALINDROME
        test/中级算法/LongestPalindrome.cpp
        src/中级算法/LongestPalindrome.cpp src/中级算法/LongestPalindrome.h)
add_executable(LongestPalindrome ${LONGEST_PALINDROME})


# Link with GoogleTest
target_link_libraries(SumOfThreeNumbers gtest gtest_main)
target_link_libraries(LengthOfLongestSubstring gtest gtest_main)
target_link_libraries(AddTwoNums gtest gtest_main)
target_link_libraries(FindMedianSortedArrays gtest gtest_main)
target_link_libraries(LongestPalindrome gtest gtest_main)
#Link with GoogleMock
target_link_libraries(SumOfThreeNumbers gmock gmock_main)
target_link_libraries(AddTwoNums gmock gmock_main)
target_link_libraries(LengthOfLongestSubstring gmock gmock_main)
target_link_libraries(FindMedianSortedArrays gmock gmock_main)
target_link_libraries(LongestPalindrome gmock gmock_main)