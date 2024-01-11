#include <unity.h>
#include "port_button.h"
#include "port_system.h"
#include "stm32f4xx.h"

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
    UNITY_TEST_ASSERT_EQUAL_INT(BUTTON_0_GPIO, GPIOC, __LINE__, "ERROR: BUTTON_0 GPIO must be GPIOC");
    UNITY_TEST_ASSERT_EQUAL_INT(BUTTON_0_PIN, 13, __LINE__, "ERROR: BUTTON_0 pin must be 13");
}

void test_regs(void)
{
    port_button_init(BUTTON_0_ID);
    
    uint32_t button_mode = ((BUTTON_0_GPIO->MODER) >> (BUTTON_0_PIN * 2)) & 0x3;
    UNITY_TEST_ASSERT_EQUAL_UINT32(GPIO_MODE_IN, button_mode, __LINE__, "ERROR: Button mode is not configured as input");
    
    uint32_t button_pupd = ((BUTTON_0_GPIO->PUPDR) >> (BUTTON_0_PIN * 2)) & 0x3;
    UNITY_TEST_ASSERT_EQUAL_UINT32(GPIO_PUPDR_NOPULL, button_pupd, __LINE__, "ERROR: Button pull up/down is not configured as no pull up/down");
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_pins);
    RUN_TEST(test_regs);
    return UNITY_END();
}
