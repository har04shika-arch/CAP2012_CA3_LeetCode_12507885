class MyCircularDeque {
public:
    deque<int> q;
    int k;

    MyCircularDeque(int k) {
        this->k = k;
    }

    bool insertFront(int value) {
        if (q.size() == k) return false;
        q.push_front(value);
        return true;
    }

    bool insertLast(int value) {
        if (q.size() == k) return false;
        q.push_back(value);
        return true;
    }

    bool deleteFront() {
        if (q.empty()) return false;
        q.pop_front();
        return true;
    }

    bool deleteLast() {
        if (q.empty()) return false;
        q.pop_back();
        return true;
    }

    int getFront() {
        return q.empty() ? -1 : q.front();
    }

    int getRear() {
        return q.empty() ? -1 : q.back();
    }

    bool isEmpty() {
        return q.empty();
    }

    bool isFull() {
        return q.size() == k;
    }
};
