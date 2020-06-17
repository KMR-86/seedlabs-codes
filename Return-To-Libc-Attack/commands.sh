gcc -fno-stack-protector -z noexecstack -o stack stack.c
gcc -fno-stack-protector -z noexecstack -g -o stack_gdb stack.c
sudo sysctl -w kernel.randomize_va_space=0

gcc envaddr.c -o env55
export MYSHELL="/bin/sh"
./env55

sudo chown root stack
sudo chmod 4755 stack

rm badfile

gcc ret_to_libc_exploit.c -o exploit
./exploit
./stack
