SECTIONS
{
    .text 0x08000000 :
    {
        *(.text)
        *(.rodata)
        _etext = .;
    }

    .data 0x20000000 :
    {
        *(.data)
        _edata = .;
    }

    .bss 0x20001000 :
    {
        *(.bss)
        *(COMMON)
        _end = .;
    }
}
