#include "helloWorld.cpp"
#include <gtest/gtest.h>

TEST(HelloTest, ReturnsHelloWorld)
{
  EXPECT_EQ(sayHello(), "Hello, World!");
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
