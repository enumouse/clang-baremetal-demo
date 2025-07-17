# clang-baremetal-demo
A primitive demo of Clang being used to compile a super simple baremetal application
for the i686 (x86) architecture. While this is very primitive amnd 'scrappy', it shows a super 
minimal example of getting bare-metal software to compile using Clang. This demo is based on 
this [project](https://github.com/Henje/x86-Toy-OS/) but ported to Clang

![Screenshot](.github/screenshot.png)

# Building
This sample uses only Clang, making it easy to build. The build process is simply 
a script to keep things simple, but of course this should not be done in a full 
project.

```
sh build.sh
```

If you are also a macOS user, I would avoid using Apple Clang and instead opt for 
a standard copy of Clang: I sourced mine via Homebrew. (`brew install llvm`)

# Run it!
This can be executed in Qemu without a bootloader via `-kernel bin/kernel.elf`

# Useful Resources
Here are some external resources which may help you further in your journey :)
- [OSDev: LLVM Information (Clang)](https://wiki.osdev.org/LLVM)
- [OSDev: Bare Bones](https://wiki.osdev.org/Bare_Bones)
- [LLVM Clang: Cross Compilation](https://clang.llvm.org/docs/CrossCompilation.html)
- [OSDev: LLVM Cross Compiler](https://wiki.osdev.org/LLVM_Cross-Compiler)
