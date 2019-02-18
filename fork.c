void init_library();
void print(uint64_t *s);
void print_character(uint64_t c);
void print_string(uint64_t *s);
void print_integer(uint64_t n);
void print_hexadecimal(uint64_t n, uint64_t a);
void print_octal(uint64_t n, uint64_t a);
void print_binary(uint64_t n, uint64_t a);
void println();
uint64_t *foo;

uint64_t main()
{
    uint64_t pid;
    init_library();
    pid= fork();
    if(pid==0){
        print_integer(pid);
        foo = "Hello World!    ";
        while (*foo != 0) {
            write(1, foo, 8);
            foo = foo + 1;
        }
    } else{
        foo = "Hello World!    ";
        print("Child PID : ");
        print_integer(pid);
        print("\n");

        while (*foo != 0)
        {
            write(1, foo, 8);
            foo = foo + 1;
        }
        print("\n");
    }
}
