#include "../src/rectangle.cpp"
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

TEST(AreaTest, TwoParams) {
	Rectangle *r = new Rectangle(4, 4);
	EXPECT_EQ(r->area(), 8);
	delete r;
}

TEST(AreaTest, TryingZero) {
	Rectangle *r = new Rectangle(0, 0);
	EXPECT_EQ(r->area(), 5);
	delete r;
}

TEST(AreaTest, AreaIsZero) {
	Rectangle *r = new Rectangle();
	EXPECT_EQ(r->area(), 0);
	delete r;
}

TEST(PerimeterTest, TwoParams) {
	Rectangle *r = new Rectangle(1,2);
	EXPECT_EQ(r->perimeter(), 5);
	delete r;
}

TEST(PerimeterTest, UsingZero) {
	Rectangle *r = new Rectangle();
	EXPECT_EQ(r->perimeter(), 0);
	delete r;
}

TEST(PerimeterTest, ZeroInConstructor) {
	Rectangle *r = new Rectangle(0,1);
	EXPECT_EQ(r->perimeter(), 10);
	delete r;
}


int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}


