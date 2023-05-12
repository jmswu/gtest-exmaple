#include <gtest/gtest.h>
// #include "add.hpp"

// TEST(testGroup, test_1)
// {
//     ASSERT_EQ(1, add(1,1));
// }

// TEST(testGroup, test_2)
// {
//     ASSERT_EQ(2, add(1,1));
// }

// int main(int argc, char **argv)
// {
//     testing::InitGoogleTest(&argc, argv);
//     return RUN_ALL_TESTS();
// }

namespace
{
    class AddTest2 : public testing::Test
    {
    private:
    public:
    protected:
        virtual void SetUp() override
        {
            std::cout << "setup\n";
        }

        virtual void TearDown() override
        {
            std::cout << "tear down\n";
        }
    };

    TEST_F(AddTest2, test_1)
    {
        ASSERT_EQ(1, 1);
    }
}