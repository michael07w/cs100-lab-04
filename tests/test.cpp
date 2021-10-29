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

TEST(FailingConstructorTest, NoParams) {
        Rectangle* r = new Rectangle();
        EXPECT_EQ(r->area(), 1);
        delete r;
}

TEST(FailingConstructorTest, TwoParams) {
        Rectangle* r = new Rectangle(1, 2);
        EXPECT_EQ(r->area(), 0);
        delete r;
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}


