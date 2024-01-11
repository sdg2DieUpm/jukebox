#include <unity.h>

void setUp(void)
{
    port_system_init();
}

void tearDown(void)
{
    // clean stuff up here
}

void test_pins(void)
{
    // TODO
}

void test_regs(void)
{
    // TODO
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_pins);
    RUN_TEST(test_regs);
    return UNITY_END();
}
