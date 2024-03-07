# Jukebox Version 3 Test files

This folder contains the test files for unit and integration testing of **Version 3 of the Jukebox** project. You can add more test items on the corresponding files at your own.

**Attention**

The files are organized in directories. The student must **place the files in the `test` folder without removing previous test files**. It will look like this:

📂**test**  
 ┣ 📂**integration**  
 ┃ ┣ 📜CMakeLists.txt  
 ┃ ┣ 📑test_v1.c  
 ┃ ┣ 📑test_v2.c  
 ┃ ┗ 📑*test_v3.c*  
 ┣ 📂**unit**  
 ┃ ┣ 📂**stm32f4**  
 ┃ ┃ ┣ 📜CMakeLists.txt  
 ┃ ┃ ┣ 📑test_port_button.c  
 ┃ ┃ ┣ 📑test_port_uart.c  
 ┃ ┃ ┗ 📑*test_port_buzzer.c*  
 ┃ ┣ 📜CMakeLists.txt  
 ┃ ┣ 📑test_fsm_button.c  
 ┃ ┣ 📑test_fsm_uart.c  
 ┃ ┗ 📑*test_fsm_buzzer.c*  
 ┗ 📜CMakeLists.txt  

Unit tests are located in the `unit` folder. Integration tests are located in the `integration` folder. The folders also contain the `CMakeLists.txt` files that are used to build the binary files for the `unit` and `integration` codes.

## Unit tests

Unit tests depends on [`unity`](https://github.com/ThrowTheSwitch/Unity) library to create the test.

1. **Unit test of the `PORT` part must be run first.** Unit test of the `PORT` part are located in the `unit/stm32f4` folder because the `PORT` module is platform dependent.

2. **Unit test of the `COMMON` part must be run afterwards.** Unit tests of the `COMMON` part are located in the `unit` folder because the `COMMON` module is platform independent.

## Integration tests

Integration tests does not depend on any library to create the test. It is a small program that tests some features of the system. It is the responsibility of the developer to check if the test is correct or not.

3. **Integration test of the complete `Version` must be run the last.** Integration tests of the each version of the project are located in the `integration`.
