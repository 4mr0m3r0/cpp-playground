class BadLengthException {
private:
    int length;
public:
    BadLengthException(int bad_length) {
        length = bad_length;
    }
    
    int what() {
        return length;
    }
};
