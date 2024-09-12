#include "unity.h"
#include "mock_foo.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_main_should_initialize_foo(void)
{
    TEST_IGNORE_MESSAGE("TODO: Implement main!");
}

void test_main_foo(void)
{
    foo_ExpectAndReturn(1, 2, 3);
    TEST_ASSERT_EQUAL_INT(6, foo_main(1, 2));
}
