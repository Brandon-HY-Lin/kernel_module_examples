
* Build Kernel Module
```
$ cd kernel_module
$ make
```

* Load Module

```
$ sudo insmod soliduscode
```

* Check Major Number
```
$ dmesg
[   95.296406] soliduscode: major number is 241
```

* Create Device File
```
$ sudo mknod /dev/soliduscode c 241 0
$ sudo chmod 777 /dev/soliduscode
```

* Build Program in User Space

```
$ cd /user_space_program/
$ mkdir build
$ cd build
$ cmake ..
$ cmake --build .
```

* Run Program
- Write first, then read
```
$ ./userapp 
r = read from device
w = write to device
enter command: w
enter data: abc

$ ./userapp 
r = read from device
w = write to device
enter command: r
device: abc
```
