long fib(long n)
{
  if (n <= 2)
    return 1;

  return fib(n - 1) + fib(n - 2);
}

int main()
{
  printf("%ld", fib(3));
  return 0;
}

// * each time the condition is flase the fib fn will call itself twice
