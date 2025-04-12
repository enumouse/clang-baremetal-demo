mkdir -p bin
clang -target i686-none-elf -ffreestanding -c -o bin/kernel.o sys/kernel.c
clang -target i686-none-elf -ffreestanding -c -o bin/i686-arch.o arch/i686/arch.S
ld.lld -T arch/i686/linker.ld -o bin/kernel.elf bin/kernel.o bin/i686-arch.o