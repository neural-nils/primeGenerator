# primeGenerator

This is just a small C++ code that generates a list of numbers each labelled as either prime (1) or composite (0).

You can also find a file: "primes10M.txt" which contains the first 10,000,000 numbers, and whether it is a prime or not.

I think prime numbers are a fascinating topic, and - from time to time - I find myself contemplating about their structure.
Often times I would start plotting some primes, e.g. to recreate the famous Ulam spiral.

With a prepared file where the first 10M numbers are either labelled as prime or composite, this is much easier.

By the way, it took me only 752 min or around 12.5 h to generate the provided list (AMD Ryzen 9 5950x), with this small, single-threaded program.
____
#### Compilation

You can compile this small tool with:

~~~console
g++ primeGenerator.cpp -o primeGenerator
~~~

Once it is compiled, you can start the tool and provide a number up to which the primeGenerator will output the primes:

~~~console
./primeGenerator <number>
~~~

The output should be something like that:

~~~console
2	1
3	1
4	0
5	1
6	0
7	1
8	0
9	0
10	0
11	1
...
~~~

Each composite is labelled as 0, each prime is labelled as 1.


Have fun experimenting with it!