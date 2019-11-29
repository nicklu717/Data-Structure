# Notes for C/C++

## Compile Methods on MacOS

#### Terminal:
``` Console
[C]
$ gcc ${filename}.c
$ ./a.out

[C++]
$ g++ ${filename}.cpp
$ ./a.out
```
#### VSCode Extension:
```
1. C/C++ Clang Command Adapter
2. Code Runner(Run code: [ctrl]+[option]+[n])
```

## Basics for C

### Loop
*for* loop
``` C
int main() {

    for(int i = 0; i < 10; i++) {
        printf("%d\n", i);
    }

    for( ; ; ) {
        printf("This will run forever.");
    }
    
    return 0;
}
```
*while* loop
``` C
int main() {

    int a = 0;

    while(a < 10) {
        printf("%d\n", a);
        a++;
    }
    
    return 0;
}
```
*do-while* loop
``` C
int main() {

    int a = 0;

    do {
        printf("%d\n", a);
        a++;

    } while(a < 10);
    
    return 0;
}
```

### Pointer
``` C
void printArray(int *pointer, int count) {
    
    for(int i = 0; i < rows; i++) {
        printf("Address: %8u, value: %d\n", pointer + i, *(pointer + i));
    }
}

int main() {

    int intArray[] = {0, 2, 4, 6, 8};

    printArray(intArray, 5);
    // Address: 3889944064, value: 0
    // Address: 3889944068, value: 2
    // Address: 3889944072, value: 4
    // Address: 3889944076, value: 6
    // Address: 3889944080, value: 8
    
    return 0;
}
```

### Structure
``` C
// Defining
struct Human {
    char name[10];
    int age;
    float salary;
} mike, allen;  // struct variables(optional)

int main() {

    mike.age = 20;

    printf("%s\n", mike.name);  //
    printf("%d\n", mike.age);  // 20
    printf("%f\n", mike.salary);  // 0.000000

    struct Human nick;  // variable declaration

    strcpy(nick.name, "Nick");  // duplicate str to char's array, defined in <string.h>
    nick.age = 10;
    nick.salary = 30000;

    printf("%s\n", nick.name);  // Nick
    printf("%d\n", nick.age);  // 10
    printf("%f\n", nick.salary);  // 30000
    
    return 0;
}
```

## Basics for C++

.h
https://kaiching.org/pydoing/cpp-guide/unit-13-header.html
https://blog.techbridge.cc/2017/09/30/cpp-header-guard/