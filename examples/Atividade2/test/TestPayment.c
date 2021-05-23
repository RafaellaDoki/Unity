#include "payment.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(Payment);

TEST_SETUP(Payment)
{
}

TEST_TEAR_DOWN(Payment)
{
}
//These tests should pass
TEST(Payment, TestPayment1)
{
  float value = 0.01;
  char status[15] = "estudante";  
  TEST_ASSERT_EQUAL(0, payment(value,status));
}

TEST(Payment, TestPayment2)
{
  float value = 1000;
  char status[15] = "VIP";
  TEST_ASSERT_EQUAL(0, payment(value,status));
}

TEST(Payment, TestPayment3)
{
  float value = 5256.98;
  char status[15] = "aposentado";  
  TEST_ASSERT_EQUAL(0, payment(value,status));
}

//These tests should fail
TEST(Payment, TestPayment4)
{
  float value = -200.45;
  char status[15] = "regular";  
  TEST_ASSERT_EQUAL(1, payment(value,status));
}

TEST(Payment, TestPayment5)
{
  float value = 10000.1;
  char status[15] = "aposentado";  
  TEST_ASSERT_EQUAL(1, payment(value,status));
}

TEST(Payment, TestPayment6)
{
  float value = 0;
  char status[15] = "estudante";  
  TEST_ASSERT_EQUAL(1, payment(value,status));
}

TEST(Payment, TestPayment7)
{
  float value = 1000;
  char status[15] = "";  
  TEST_ASSERT_EQUAL(2, payment(value,status));
}

TEST(Payment, TestPayment8)
{
  float value = 1000;
  char status[15] = "geromel";  
  TEST_ASSERT_EQUAL(2, payment(value,status));
}

TEST(Payment, TestPayment9)
{
  float value = 1000;
  char status[5] = "regul";  
  TEST_ASSERT_EQUAL(2, payment(value,status));
}

TEST(Payment, TestPayment10)
{
  float value = 1000;
  char status[20] = "estudanteeeeee";  
  TEST_ASSERT_EQUAL(2, payment(value,status));
}

