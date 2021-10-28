#include "../header/rectangle.hpp"
#include "gtest/gtest.h"

TEST(ConstructorTest, NoParams) {
	Rectangle* r = new Rectangle();
	EXPECT_EQ(r->area(), 0);
	delete r;
}

TEST(ConstructorTest, TwoParams) {
	Rectangle* r = new Rectangle(1, 2);
	EXPECT_EQ(r->area(), 2);
	delete r;
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
