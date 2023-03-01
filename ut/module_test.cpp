#include <CppUTest/TestHarness.h>
#include <CppUTestExt/MockSupport.h>

#include "module/module.h"


TEST_GROUP(FirstTestGroup)
{
   void setup()
   {
      // Init stuff
   }

   void teardown()
   {
      mock().checkExpectations();
      mock().clear();
   }
};

IGNORE_TEST(FirstTestGroup, FirstTest)
{
   FAIL("Fail me!");
}

TEST(FirstTestGroup, SecondTest)
{
   CHECK(true);
}

TEST(FirstTestGroup, ThirdTest)
{
   mock().expectOneCall("internal1");
   int result = fun1(10);
   CHECK_EQUAL(10, result);
}
