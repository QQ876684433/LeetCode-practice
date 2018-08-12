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

set(Z_CONVERT
        test/中级算法/Z_Convert.cpp
        src/中级算法/Z_Convert.h src/中级算法/Z_Convert.cpp)
add_executable(Z_Convert ${Z_CONVERT})

set(IS_PALINDROME
        src/中级算法/IsPalindrome.cpp src/中级算法/IsPalindrome.h
        test/中级算法/IsPalindrome.cpp)
add_executable(IsPalindrome ${IS_PALINDROME})

set(THREE_SUM_CLOSEST
        src/中级算法/ThreeSumClosest.cpp src/中级算法/ThreeSumClosest.h
        test/中级算法/ThreeSumClosest.cpp)
add_executable(ThreeSumClosest ${THREE_SUM_CLOSEST})

set(ASTAR_A
        src/中级算法/astar_A.h src/中级算法/astar_A.cpp
        test/中级算法/astar_A.cpp)
add_executable(astar_A ${ASTAR_A})

add_executable(A src/A.cpp)
add_executable(C src/C.cpp)
add_executable(B src/B.cpp)
add_executable(860 src/860.cpp)
add_executable(20 src/20.cpp)
add_executable(11 src/11.cpp)
add_executable(Test src/Test.cpp)

# Link with GoogleTest
target_link_libraries(SumOfThreeNumbers gtest gtest_main)
target_link_libraries(LengthOfLongestSubstring gtest gtest_main)
target_link_libraries(AddTwoNums gtest gtest_main)
target_link_libraries(FindMedianSortedArrays gtest gtest_main)
target_link_libraries(LongestPalindrome gtest gtest_main)
target_link_libraries(Z_Convert gtest gtest_main)
target_link_libraries(IsPalindrome gtest gtest_main)
target_link_libraries(ThreeSumClosest gtest gtest_main)
target_link_libraries(astar_A gtest gtest_main)
#Link with GoogleMock
target_link_libraries(SumOfThreeNumbers gmock gmock_main)
target_link_libraries(AddTwoNums gmock gmock_main)
target_link_libraries(LengthOfLongestSubstring gmock gmock_main)
target_link_libraries(FindMedianSortedArrays gmock gmock_main)
target_link_libraries(LongestPalindrome gmock gmock_main)
target_link_libraries(Z_Convert gmock gmock_main)
target_link_libraries(IsPalindrome gmock gmock_main)
target_link_libraries(ThreeSumClosest gmock gmock_main)
target_link_libraries(astar_A gmock gmock_main)