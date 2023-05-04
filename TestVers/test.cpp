#include "pch.h"


TEST(testVS, testVersion) {

	int i = version();
	
	EXPECT_EQ(i, 1);
  
	//EXPECT_TRUE(true);

}