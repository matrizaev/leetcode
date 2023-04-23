#define DEFAULT_MAP_SIZE 100

typedef struct sMyHashMapEntry{
    int key;
    int value;
    struct sMyHashMapEntry *next;
} MyHashMapEntry;

typedef struct {
    size_t size;
    MyHashMapEntry **map;
} MyHashMap;


MyHashMap* myHashMapCreate() {
    MyHashMap *result = malloc(sizeof(MyHashMap));
    result->size = DEFAULT_MAP_SIZE;
    result->map = calloc(sizeof(MyHashMapEntry *), result->size);
    return result;
}

MyHashMapEntry *newHashMapEntry(key, value){
    MyHashMapEntry *entry = malloc(sizeof(MyHashMapEntry));
    entry->key = key;
    entry->value = value;
    entry->next = NULL;
    return entry;
}

void myHashMapPut(MyHashMap* obj, int key, int value) {
    if(!obj)
        return;
    size_t index = key % obj->size;
    MyHashMapEntry **entry = &(obj->map[index]);
    while (*entry && (*entry)->key < key)
        entry = &(*entry)->next;
    if (*entry && (*entry)->key == key) {
        (*entry)->value = value;
    } else {
        MyHashMapEntry *new_entry = newHashMapEntry(key, value);
        new_entry->next = *entry;
        *entry = new_entry;
    }
}

int myHashMapGet(MyHashMap* obj, int key) {
    if (!obj) {
        return -1;
    }
    size_t index = key % obj->size;
    MyHashMapEntry *entry = obj->map[index];
    while (entry && entry->key != key) {
        entry = entry->next;
    }
    if (!entry) {
        return -1;
    }
    return entry->value;
}

void myHashMapRemove(MyHashMap* obj, int key) {
    if (!obj) {
        return;
    }
    size_t index = key % obj->size;
    MyHashMapEntry *entry = obj->map[index];
    if (!entry) {
        return;
    }
    if (entry->key == key) {
        obj->map[index] = entry->next;
        free(entry);
        return;
    }
    MyHashMapEntry *prev = entry;
    while (entry && entry->key != key) {
        prev = entry;
        entry = entry->next;
    }
    if (!entry) {
        return;
    }
    prev->next = entry->next;
    free(entry);
}

void myHashMapEntryChainFree(MyHashMapEntry* obj){
    while (obj){
        MyHashMapEntry *tmp = obj->next;
        free(obj);
        obj = tmp;
    }
}

void myHashMapFree(MyHashMap* obj) {
    for (size_t i = 0; i < obj->size; i++){
        myHashMapEntryChainFree(obj->map[i]);
    }
    free(obj->map);
    free(obj);
}

/**
 * Your MyHashMap struct will be instantiated and called as such:
 * MyHashMap* obj = myHashMapCreate();
 * myHashMapPut(obj, key, value);
 
 * int param_2 = myHashMapGet(obj, key);
 
 * myHashMapRemove(obj, key);
 
 * myHashMapFree(obj);
*/
