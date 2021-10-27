#include "../src/rectangle.cpp"
#include "gtest/gtest.h"

TEST(ConstructorTest, NoParams) {
	Rectangle* r = new Rectangle();
	EXPECT_EQ(r->width, 0);
	EXPECT_EQ(r->height, 0);
	delete r;
}

TEST(ConstructorTest, OneParam) {
	Rectangle* r = new Rectangle(1);
	EXPECT_EQ(r->width, 1);
	EXPECT_EQ(r->height, 1);
	delete r;
}

TEST(ConstructorTest, TwoParams) {
	Rectangle* r = new Rectangle(1, 2);
	EXPECT_EQ(r->width, 1);
	EXPECT_EQ(r->height, 2);
	delete r;
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
