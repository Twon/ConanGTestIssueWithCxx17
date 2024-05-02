#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <string_view>

class Mock
{
public:
    MOCK_METHOD(void, methodUsingCxx17Types, (std::string_view), ());
};

TEST(DemoConanPackageError, SimpleTest) {

    Mock mock;
    EXPECT_CALL(mock, methodUsingCxx17Types(std::string_view("Hello world!"))).Times(1);

}