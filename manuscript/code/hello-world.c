uint64_t *foo;

uint64_t main() {
  foo = "Hello World!    ";
  while (*foo != 0)
  {
    write(1, foo, 8);

    foo = foo + 1;
  }
}