#include <stdio.h>
#include <stdbool.h>
#include "test.h"

int main(int argc, char *const *argv) {
	printf("Hello World!\n");
}

TEST_CASE(test1) {
	TEST_EQUAL(1, 0);
}

TEST_CASE(test2) {
	TEST_TRUE(false);
}

TEST_CASE(test3) {
	TEST_STREQUAL("Hello", "World");
}

TEST_CASE(test4) {
	TEST_STRNEQUAL("Hello World", "Hello", 5);
}

TEST_CASE(test5) {
	char str[5] = { 'H', 'e', 'l', 'l', 'o' };
	TEST_STREQUAL3(str, "Hello", 5);
}

TEST_CASE(test6) {
	char str[5] = { 'H', 'e', 'l', 'l', 'o' };
	TEST_STREQUAL3(str, "Hello!", 5);
}
