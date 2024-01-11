#include <unity.h>
#include "fsm_button.h"
#include "port_system.h"
#include "port_button.h"

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
    fsm_t *p_fsm = fsm_button_new(BUTTON_0_DEBOUNCE_TIME_MS, BUTTON_0_ID);

    fsm_t *p_inner_fsm = &((fsm_button_t *)p_fsm)->f;
    UNITY_TEST_ASSERT_EQUAL_PTR(p_fsm, p_inner_fsm, __LINE__, "The inner FSM of fsm_button_t is not the first field of the struct");
    
    UNITY_TEST_ASSERT_EQUAL_INT(BUTTON_RELEASED, fsm_get_state(p_fsm), __LINE__, "The initial state of the FSM is not BUTTON_RELEASED");
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_initial_config);
    return UNITY_END();
}
