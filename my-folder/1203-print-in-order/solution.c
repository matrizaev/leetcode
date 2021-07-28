typedef struct {
    // User defined data may be declared here.
    int finished;
} Foo;

Foo* fooCreate() {
    Foo* obj = (Foo*) malloc(sizeof(Foo));
    
    // Initialize user defined data here.
    obj->finished = 0;
    return obj;
}

void first(Foo* obj) {
    while (obj->finished != 0) usleep(10);
    // printFirst() outputs "first". Do not change or remove this line.
    printFirst();
    obj->finished = 1;
}

void second(Foo* obj) {
    while (obj->finished != 1) usleep(10);
    // printSecond() outputs "second". Do not change or remove this line.
    printSecond();
    obj->finished = 2;
}

void third(Foo* obj) {
    while (obj->finished != 2) usleep(10);
    // printThird() outputs "third". Do not change or remove this line.
    printThird();
    obj->finished = 3;
}

void fooFree(Foo* obj) {
    // User defined data may be cleaned up here.
    
}
