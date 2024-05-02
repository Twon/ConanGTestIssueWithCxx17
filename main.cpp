#include <gtest/gtest.h>
#include <string_view>

TEST(DemoConanPackageError, SimpleTest) {
    EXPECT_EQ(std::string_view("Hello world!"), "Hello world");
}