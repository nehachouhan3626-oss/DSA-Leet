class PeekingIterator : public Iterator {
private:
    int nextValue;
    bool hasNextValue;

public:
    PeekingIterator(const vector<int>& nums) : Iterator(nums) {
        hasNextValue = Iterator::hasNext();

        if(hasNextValue) {
            nextValue = Iterator::next();
        }
    }

    int peek() {
        return nextValue;
    }

    int next() {
        int current = nextValue;

        hasNextValue = Iterator::hasNext();

        if(hasNextValue) {
            nextValue = Iterator::next();
        }

        return current;
    }

    bool hasNext() const {
        return hasNextValue;
    }
};