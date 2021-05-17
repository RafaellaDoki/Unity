#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Sort)
{
  RUN_TEST_CASE(Sort, TestSort1);
  RUN_TEST_CASE(Sort, TestSort2);
}
