#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(Sort);

TEST_SETUP(Sort){}

TEST_TEAR_DOWN(Sort){}

// Tests that should pass
TEST(Sort, TestSort1)
{
  int v1[] = {1,2,3,4};
  int v2[] = {2,3,1,4};
  int v3[] = {0,1,2,3,4,5,6,7,8,9};
  int v4[] = {2,1,3,5,4,6,7,9,8,0};
  int v5[] = {-1,0,1,-2};
  int v6[] = {-2,-1,0,1};

  sort(v2, 4);
  TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(v1, v2, 4, "PASSED");
  TEST_ASSERT_EQUAL_MEMORY_ARRAY_MESSAGE(v1, v2, sizeof(int), 4, "PASSED");

  sort(v4, 10);
  TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(v3, v4, 10, "PASSED");
  TEST_ASSERT_EQUAL_MEMORY_ARRAY_MESSAGE(v3, v4, sizeof(int), 10, "PASSED");
  
  sort(v3, 10); //Keep ordered vector
  TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(v3, v3, 10, "PASSED");
  TEST_ASSERT_EQUAL_MEMORY_ARRAY_MESSAGE(v3, v3, sizeof(int), 10, "PASSED");

  sort(v5, 4);
  TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(v6, v5, 4, "PASSED");
}

// Tests that should fail
TEST(Sort, TestSort2)
{
  int v1[] = {1,2,3,4};
  int v2[] = {2,3,1,4};
  int v3[] = {0,1,2,3,4,5,6,7,8,9};
  int v4[] = {2,1,3,5,4,6,7,9,8,0};
  int v5[] = {-1,0,1,-2};

  sort(v2, 4);
  TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(v1, v2, 5, "FAILED"); // Vector size is bigger than the expected value
  TEST_ASSERT_EQUAL_MEMORY_ARRAY_MESSAGE(v1, v2, sizeof(int), 5, "FAILED");

  TEST_ASSERT_EQUAL_MEMORY_ARRAY_MESSAGE(v1, v3, sizeof(int), 4, "FAILED"); // Different vactors
  
  sort(v5, 10);
  TEST_ASSERT_EQUAL_INT16_ARRAY_MESSAGE(v1, v5, 4, "FAILED");// Vector size is smaller than the expected value
  TEST_ASSERT_EQUAL_INT_ARRAY_MESSAGE(v5, v2, 5, "FAILED"); // Vector size is bigger than the expected value  

  TEST_ASSERT_EQUAL_MEMORY_ARRAY_MESSAGE(v1, v2, sizeof(int)-2, 4, "FAILED");
}
