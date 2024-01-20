#include<gtest/gtest.h>

namespace my_tests {
    int return_13() {
      return 13;
    }
}

TEST(Topic, TestEquality) {
  EXPECT_EQ(my_tests::return_13(), 13);
}
TEST(Topic, TestEquality2) {
  EXPECT_EQ(my_tests::return_13(), 13);
}
