class Node {
    public:
        Student student;
        Node *next = NULL;
    public:
        Node(Student student);
        ~Node();
};