**SO-ul nu se linkeaza cu aplicatiile ci expune o interfata peste care lucreza , el ruleaza separat intr-un mod privilegiat**

### Componenta stiva software

1. App
2. Framework
3. Librarii
4. Kernel / drivere
5. HW



#### Scop SO
- Daca vorbim de sisteme embedded nu mai e neovie de SO pentru ca o caracteristica esentiala a SO-ului e ca se ocupa de scheduleing
- De asemenea si securitate

#### FD

Tabela de file descriptori este limtiata la 1024 max pt ca altfel ar putea fi atacata prin ddos

#minishell
The `dup2` system call in Unix-like operating systems is used to duplicate an existing [[file descriptor]] to a specific file descriptor number. It allows redirecting one file descriptor to another, and it can be used to implement input/output redirection in shell-like programs.

Here is the basic syntax of `dup2`:

```
int dup2(int oldfd, int newfd);
```
- `oldfd`: The file descriptor to be duplicated.
- `newfd`: The file descriptor number to which `oldfd` should be duplicated.

The `dup2` function performs the following steps:

1. If `newfd` is already open, it is first closed.
2. `oldfd` is duplicated to `newfd`.
3. `newfd` now refers to the same open file description as `oldfd`.


In Unix-like operating systems, a file descriptor is a non-negative integer that uniquely identifies an open file within a process. File descriptors are a fundamental concept in Unix I/O (input/output) operations and are used to interact with files, sockets, pipes, and other I/O resources.

The three standard file descriptors are:

1. **Standard Input (stdin):** File descriptor 0 (`STDIN_FILENO`) represents the standard input stream. It is typically associated with the keyboard or another input source.
    
2. **Standard Output (stdout):** File descriptor 1 (`STDOUT_FILENO`) represents the standard output stream. It is usually associated with the terminal or another output destination.
    
3. **Standard Error (stderr):** File descriptor 2 (`STDERR_FILENO`) represents the standard error stream. It is used for error messages and is also associated with the terminal or another output destination.
    

When a new process is created, these standard file descriptors are usually inherited from the parent process. File descriptors greater than or equal to 3 are typically used for additional file handles, pipes, sockets, etc.

File descriptors are manipulated using system calls such as `open`, `close`, `read`, `write`, `dup`, and [[dup2]]. They provide a consistent interface for performing I/O operations regardless of the specific I/O resource being used.


#### LAB 1
Cum creezi un thread?
```c
int pthread_create(pthread_t *thread, const pthread_attr_t *attr, void *(*start_routine) (void *), void *arg);
```

Cum astepti toate threadurile intr-un punct?
```c
int pthread_join(pthread_t thread, void **retval);
```

 Un cod simplu cu threaduri:
```c
//example.c
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
 
#define NUM_THREADS 2
 
void *f(void *arg)
{
    long id = *(long*) arg;
    printf("Hello World din thread-ul %ld!\n", id);
    return NULL;
}
 
int main(int argc, char *argv[])
{
    pthread_t threads[NUM_THREADS];
    int r;
    long id;
    void *status;
    long arguments[NUM_THREADS];
 
    for (id = 0; id < NUM_THREADS; id++) {
        arguments[id] = id;
        r = pthread_create(&threads[id], NULL, f,  (void *) &arguments[id]);
 
        if (r) {
            printf("Eroare la crearea thread-ului %ld\n", id);
            exit(-1);
        }
    }
 
    for (id = 0; id < NUM_THREADS; id++) {
        r = pthread_join(threads[id], &status);
 
        if (r) {
            printf("Eroare la asteptarea thread-ului %ld\n", id);
            exit(-1);
        }
    }
 
    return 0;
}
```

---

#### Lab2

##### Mutex

În Pthreads, un ==mutex== se reprezintă printr-o variabilă de tip pthread_mutex_t, și se inițializează folosind următoarea funcție:

```c
int pthread_mutex_init(pthread_mutex_t *mutex, const pthread_mutexattr_t *attr);
```

Pentru a dezaloca un mutex, se folosește următoarea funcție, care primește ca parametru un pointer la mutexul care urmează a fi dezalocat:

```c
int pthread_mutex_destroy(pthread_mutex_t *mutex);
```

Pentru a se face lock pe un mutex, se folosește următoarea funcție, care primește ca parametrul mutexul:

```c
int pthread_mutex_lock(pthread_mutex_t *mutex);
```

Operația inversă, prin care se specifică ieșirea dintr-o zonă critică (adică deschiderea mutexului), este executată prin intermediul următoarei funcții:

```c
int pthread_mutex_unlock(pthread_mutex_t *mutex);
```

 >[!important] Toate patru funcțiile de mutex returnează 0 dacă s-au executat cu succes, sau un cod de eroare în caz contrar.

>[!error] Dacă vrem să protejăm o secțiune din programul nostru folosind un mutex, atunci fiecare thread care accesează acea secțiune trebuie să facă lock și unlock pe aceeași variabilă mutex. De asemenea, dacă un thread vrea să facă unlock pe un mutex pe care nu îl deține (nu a făcut lock pe el în prealabil), va rezulta un comportament nedefinit.

| Column 1 | Column 2 |
|----------|----------|
| ceva     | altceva  |

![Hello, World!](helloworld.png)
##### Bariera
:smile:
Ea are rolul de a se asigura că niciun thread nu poate trece mai departe de punctul în care este plasată decât atunci când toate thread-urile gestionate de barieră ajung în acel punct.

>[!tip]
>un fel de pthread_join pt mutex

În Pthreads, o barieră este reprezentată prin tipul **pthread_barrier_t** și inițializată prin următoarea funcție:

```c
int pthread_barrier_init(pthread_barrier_t *barrier, const pthread_barrierattr_t *attr, unsigned count);
```

Pentru a dezaloca o barieră, se folosește următoarea funcție:

```c
int pthread_barrier_destroy(pthread_barrier_t *barrier);
```

Ambele funcții returnează 0 dacă s-au executat cu succes sau un cod de eroare în caz contrar.

Pentru a face un thread să aștepte la o barieră (pentru a "pune o barieră" în cod), se folosește următoarea funcție:

```c
int pthread_barrier_wait(pthread_barrier_t *barrier);
```

Funcția de mai sus va returna **PTHREAD_BARRIER_SERIAL_THREAD** pentru un singur thread arbitrar de la barieră și **0** pentru toate celelalte. Dacă funcția a avut vreo eroare, un cod eroare va fi returnat.

>[!attention] Fiecare thread care trebuie să aștepte la barieră va apela funcția de mai sus pe aceeași variabilă de tip **pthread_barrier_t**. Dacă numărul de thread-uri care apelează **pthread_barrier_wait** este mai mic decât parametrul cu care a fost inițializată bariera, aceasta nu se va debloca niciodată.

(link)[https://github.com/rosedu/workshop-markdown/pull/15]

