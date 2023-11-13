class user
{
public:
    user();
    ~user();
    int option();
    void regi();
    void log();
    void opt();
};

class doctor:public user
{
public:
    doctor();
    ~doctor();
    void info();
    void opt();
    void view();
};
class patient:public user
{
public:
    patient();
    ~patient();
    void info();
    void opt();
    void view();
};
class room:public user
{
public:
    room();
    ~room();
    void info();
    void opt();
    void view();
};
