# this is the build file for project 
# it is autogenerated by the xmake build system.
# do not edit by hand.

RC=/home/danielboll/.cargo/bin/rustc
AS=/usr/bin/gcc
MM=/usr/bin/gcc
MXX=/usr/bin/gcc
CU=/usr/bin/clang
CC=/usr/bin/gcc
GC=/usr/bin/go
FC=/usr/bin/gfortran
CXX=/usr/bin/gcc

LD=/usr/bin/g++
RCLD=/home/danielboll/.cargo/bin/rustc
FCLD=/usr/bin/gfortran
GCLD=/usr/bin/go
AR=/usr/bin/ar
RCAR=/home/danielboll/.cargo/bin/rustc
GCAR=/usr/bin/go
SH=/usr/bin/g++
RCSH=/home/danielboll/.cargo/bin/rustc
FCSH=/usr/bin/gfortran

ci_test_CXXFLAGS=-m64 -fvisibility=hidden -fvisibility-inlines-hidden -O3 -std=c++20 -Iinclude -isystem /home/danielboll/.xmake/packages/g/gtest/1.12.1/77b9096bc4b34d9282f672d36b015ba9/include -DNDEBUG
ci_test_LDFLAGS=-m64 -L/home/danielboll/.xmake/packages/g/gtest/1.12.1/77b9096bc4b34d9282f672d36b015ba9/lib -s -lgtest_main -lgmock -lgtest -lpthread

default:  ci_test

all:  ci_test

.PHONY: default all  ci_test

ci_test: build/linux/x86_64/release/ci_test
build/linux/x86_64/release/ci_test: build/.objs/ci_test/linux/x86_64/release/test/main.cpp.o
	@echo linking.release ci_test
	@mkdir -p build/linux/x86_64/release
	@$(LD) -o build/linux/x86_64/release/ci_test build/.objs/ci_test/linux/x86_64/release/test/main.cpp.o $(ci_test_LDFLAGS) > build/.build.log 2>&1

build/.objs/ci_test/linux/x86_64/release/test/main.cpp.o: test/main.cpp
	@echo compiling.release test/main.cpp
	@mkdir -p build/.objs/ci_test/linux/x86_64/release/test
	@$(CXX) -c $(ci_test_CXXFLAGS) -o build/.objs/ci_test/linux/x86_64/release/test/main.cpp.o test/main.cpp > build/.build.log 2>&1

clean:  clean_ci_test

clean_ci_test: 
	@rm -rf build/linux/x86_64/release/ci_test
	@rm -rf build/linux/x86_64/release/ci_test.sym
	@rm -rf build/.objs/ci_test/linux/x86_64/release/test/main.cpp.o

