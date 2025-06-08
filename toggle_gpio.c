// toggle_gpio.c
#define GPIO_REG_ADDR 0x10012000
#define GPIO_REG (*(volatile unsigned int *)GPIO_REG_ADDR)

void toggle_gpio(void) {
    GPIO_REG ^= 1;  // Toggle bit 0 of GPIO register
}

int main(void) {
    toggle_gpio();
    while (1) {
        // Loop forever
    }
    return 0;
}
