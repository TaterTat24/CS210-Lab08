/* unitTest.c
 * =============================================================
 *    Name: Benjamin Tat
 * Section: T6
 * Purpose: Unit Testing
 * =============================================================
 */
 
#include <stdbool.h> 
#include <stdio.h>
#include <assert.h>

#include "unitTest.h"
#include "advisory.h"
 
void unitTest01(){
    assert(coldAdvisory(69, 16) == NO_COLD_ADVISORY);
    printf("Test 01 passed\n");
}

void unitTest02(){
    assert(coldAdvisory(69, 0) == COLD_WARNING);
    printf("Test 02 passed\n");
}

void unitTest03(){
    assert(coldAdvisory(49, 0) == COLD_ADVISORY);
    printf("Test 03 passed\n");
}

void unitTest04(){
    assert(coldAdvisory(21, -10) == COLD_WARNING);
    printf("Test 04 passed\n");
}

void unitTest05(){
    assert(coldAdvisory(20, -10) == COLD_ADVISORY);
    printf("Test 05 passed\n");
}

void unitTest06(){
    assert(coldAdvisory(69, -11) == COLD_WARNING);
    printf("Test 06 passed\n");
}

void runAllTests(){
    unitTest01();
    unitTest02();
    unitTest03();
    unitTest04();
    unitTest05();
    unitTest06();
    printf("Testing completed\n");
}