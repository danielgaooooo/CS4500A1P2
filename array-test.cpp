#include "helper.h"  // Your file, with any C++ code that you need
#include "object.h"  // Your file with the CwC declaration of Object
#include "string.h"  // Your file with the String class
#include "list.h"    // Your file with the two list classes

void test1() {
	Array* a = new Array(10);
        String* s1 = new String("hi");
        String* s2 = new String("no);
        String* s3 = new String("yes);
        a->set(0, s1);
        a->set(1, s2);
        a->set(0, s3);
        if ((a->get(0)->equals(s3) && (a->get(1)->equals(s2))) {
                cout << "Pass 1";
        } else {
                cout << "Fail 1";
                exit(0);
        }
}

void test2() {
	Array* a = new Array(10);
        String* s1 = new String("a");
        String* s2 = new String("b");
        a->set(0, s1);
        a->set(1, s2);
        if (a->length == 2) {
                cout << "Pass 2"
        } else {
                cout << "Fail 2";
                exit(0);
        }
}

void test3() {
	Array* a = new Array(10);
        if (a->length == 0) {
                cout << "Pass 3"
        } else {
                cout << "Fail 3";
                exit(0);
        }
}


void test4() {
	Array* a = new Array(10);
        Object* c = new Object();
        Object* d = new Object();
        a->set(0, c);
        a->set(1, d);
        if ((a->get(0)->equals(c) && (a->get(1)->equals(d)) && a->length() == 2) {
                cout << "Pass 4";
        } else {
                cout << "Fail 4";
                exit(0);
        }
}

int main() {
            	test1();
                test2();
                test3();
                test4();
                return 0;
}

