struct MyCircularQueue {
    head: usize, // front of the queue
    tail: usize, // rear of the queue
    queue: Vec<i32>,
    len: usize,      // current number of elements in the queue
    capacity: usize, // maximum capacity of the queue
}

/**
 * `&self` means the method takes an immutable reference.
 * If you need a mutable reference, change it to `&mut self` instead.
 */
impl MyCircularQueue {
    fn new(k: i32) -> Self {
        MyCircularQueue {
            queue: vec![0; k as usize],
            head: 0, // front of the queue
            tail: 0, // rear of the queue
            len: 0,
            capacity: k as usize,
        }
    }

    fn en_queue(&mut self, value: i32) -> bool {
        if self.is_full() || self.capacity == 0 {
            return false;
        }
        self.queue[self.tail] = value; // insert the value at the tail
        self.tail = (self.tail + 1) % self.capacity;
        self.len += 1;
        true
    }

    fn de_queue(&mut self) -> bool {
        if self.is_empty() || self.capacity == 0 {
            return false;
        }
        self.head = (self.head + 1) % self.capacity;
        self.len -= 1;
        if self.len == 0 {
            self.head = 0;
            self.tail = 0;
        }
        true
    }

    fn front(&self) -> i32 {
        if self.is_empty() || self.capacity == 0 {
            return -1;
        }
        self.queue[self.head]
    }

    fn rear(&self) -> i32 {
        if self.is_empty() || self.capacity == 0 {
            return -1;
        }
        self.queue[(self.tail + self.capacity - 1) % self.capacity]
    }

    fn is_empty(&self) -> bool {
        self.len == 0
    }

    fn is_full(&self) -> bool {
        self.len == self.capacity
    }
}

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * let obj = MyCircularQueue::new(k);
 * let ret_1: bool = obj.en_queue(value);
 * let ret_2: bool = obj.de_queue();
 * let ret_3: i32 = obj.front();
 * let ret_4: i32 = obj.rear();
 * let ret_5: bool = obj.is_empty();
 * let ret_6: bool = obj.is_full();
 */
