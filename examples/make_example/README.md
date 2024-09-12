# お試し

## 準備

```console
$ git clone https://github.com/hirokuma/CMock.git
$ cd cmock
$ bundle install
$ cd examples/make_example
```

## make 1回目

```console
$ make
mkdir -p ./build
mkdir -p ./build/obj
ruby ../../scripts/create_makefile.rb --silent
cc src/main.c src/foo.c -o build/main
./build/main || true
Hello world!
```

## make 2回目

```console
$ make
mkdir -p ./build
mkdir -p ./build/obj
ruby ../../scripts/create_makefile.rb --silent

--------------------------
UNITY IGNORED TEST SUMMARY
--------------------------
.\test\test_main.c:14:test_main_should_initialize_foo:IGNORE: TODO: Implement main!
--------------------------
UNITY FAILED TEST SUMMARY
--------------------------
.\test\test_foo.c:16:test_foo_init_should_initialize_multiplier:FAIL: Expected FALSE Was TRUE
.\test\test_main.c:20:test_main_foo:FAIL: Expected 6 Was 9
--------------------------
OVERALL UNITY TEST SUMMARY
--------------------------
3 TOTAL TESTS 2 TOTAL FAILURES 1 IGNORED

./build/main || true
Hello world!
```
