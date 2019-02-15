// libcstar procedures for printing
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
    uint64_t pid2;
    uint64_t i;
    uint64_t* status;
    
    // initialize selfie's libcstar library
    init_library();
    pid = fork();

    if (pid != 0)
    {
        // parent
        wait(status);
        print("Parent PID :     ");
        print_integer(pid);
        println();

        pid2 = fork();
        if (pid2 != 0)
        {
            // parent
            wait(status);
            print("Parent 2 PID :     ");
            print_integer(pid2);
            println();
        }
        else
        {
            // child
            print("Child 2 PID :     ");
            print_integer(pid2);
            println();
        }
    }else{
        // child
        print("Child PID :     ");
        print_integer(pid);
        println();
    }
  
 foo = "Hello World!    ";
    while (*foo != 0)
    {
        write(1, foo, 8);

        foo = foo + 1;
    }
}

