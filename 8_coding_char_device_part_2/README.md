* Kernel Space
    1. Build Kernel Module
        ```
        $ cd kernel_module
        $ make
        ```
    1. Load Module
        ```
        $ sudo insmod soliduscode
        ```

    1. Check Major Number
        ```
        $ dmesg
        [   95.296406] soliduscode: major number is 241
        ```
    1. Create Device File
        ```
        $ sudo mknod /dev/soliduscode c 241 0
        $ sudo chmod 777 /dev/soliduscode
        ```

* User Space
    1. Build Program in User Space

        ```
        $ cd /user_space_program/
        $ mkdir build
        $ cd build
        $ cmake ..
        $ cmake --build .
        ```

    1. Run Program
        - Write first
            ```
            $ ./userapp 
            r = read from device
            w = write to device
            enter command: w
            enter data: abc
            ```
        - Then read  
            ```
            $ ./userapp 
            r = read from device
            w = write to device
            enter command: r
            device: abc
            ```
