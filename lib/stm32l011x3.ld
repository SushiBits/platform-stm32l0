MEMORY
{
    IROM	(r x) : ORIGIN = 0x08000000, LENGTH = 8k
    IRAM    (rwx) : ORIGIN = 0x20000000, LENGTH = 2k
}

INCLUDE stm32l0xx.ld
