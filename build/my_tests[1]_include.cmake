if(EXISTS "/Users/sreepathyjayanand/Documents/code/modern_cpp-test/build/my_tests[1]_tests.cmake")
  include("/Users/sreepathyjayanand/Documents/code/modern_cpp-test/build/my_tests[1]_tests.cmake")
else()
  add_test(my_tests_NOT_BUILT my_tests_NOT_BUILT)
endif()
