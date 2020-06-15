sudo sysctl -w kernel.randomize_va_space=0
gcc -o demo -z execstack -fno-stack-protector demo.c
sudo chown root demo
sudo chmod 4755 demo
sudo ln -sf /bin/zsh /bin/sh
chmod u+x exploit.py
rm badfile
exploit.py
./demo
