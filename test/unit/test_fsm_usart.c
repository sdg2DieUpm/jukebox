#include <unity.h>

void setUp(void)
{
    port_system_init();
}

void tearDown(void)
{
    // clean stuff up here
}

void test_initial_config(void)
{
    // TODO
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_initial_config);
    return UNITY_END();
}
