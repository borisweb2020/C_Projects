#include <stdio.h>
#include <stddef.h>

int main() {
    /*  Указатель хранит адрес объекта в памяти. Адрес представляет собой целочисленное значение, выраженное в 16-ричном формате. */
    int x = 10;  // определение переменной
    int *p_1;    // определение указателя
    p_1 = &x;    // указатель получает адрес переменной
    printf("Адрес переменной: %p\n", p_1);  // 0x7ffeecac07f4
    printf("Адрес переменной: %p\n", &x);  // 0x7ffeecac07f4

    // Операция разыменования - dereference operator
    int y = *p_1;  // присваиваем переменной у значение по адресу из указателя р
    printf("y = %d\n", y);  // 10

    // Используя указатель, можно менять значение по адресу:
    *p_1 = 45;
    printf("x = %d ;; y = %d\n", x, y);  // x = 45 ;; y = 10

    puts("**************************************");

    // Присвоение указателю другого указателя:
    int a = 20;
    int b = 35;
    int *p_a = &a;
    int *p_b = &b;
    printf("Var a:: address = %p ;; value = %d\n", p_a, *p_a);  //0x7ffee5fb97d8 value = 20
    printf("Var b:: address = %p ;; value = %d\n", p_b, *p_b);  //0x7ffee5fb97d4 value = 35

    p_a = p_b;  //  Теперь указатель р_а хранит адрес переменной b
    printf("Var b:: address = %p ;; value = %d\n", p_a, *p_a);  //0x7ffee5fb97d4 value = 35

    int *p_null = NULL;
    printf("address = %p\n", p_null);  // address = 0x0

    puts("**************************************");

    // Адрес указателя:
    int j = 108;
    int *p_j = &j;
    printf("Value on pointer: %d\n", *p_j);    // 108
    printf("Address of var: %p\n", p_j);       // 0x7ffeea1c67c8
    printf("Address of pointer: %p\n", &p_j);  // 0x7ffee1c67c0

    puts("**************************************");

    int f = 49;
    int *p_f = &f;
    int **p_pf = &p_f;
    printf("f:: address = %p ;; value = %d\n", p_f, *p_f); // 0x7ffee0903794 ;; 49
    printf("p_f:: address = %p ;; value of p_f = %p ;; value of f %d\n", p_pf, *p_pf, **p_pf); // 0x7ffee0903788 ;; 0x7ffee0903794 ;; 49
    
    /***** Pointer Arithmetic *****/
    
    /* В случае с указателем увелечение (уменьшение) на еденицу будет означать увелечение адреса на размер типа указателя, 
    т.е. для int на 4 байта, для float на 8 байт, для char на 1 байт и т.д. */
    int n = 11;
    int *p_n = &n;
    printf("Address: %p ;; value: %d\n", p_n, *p_n);
    p_n++;
    printf("Address: %p ;; value: %d\n", p_n, *p_n);
    p_n--;
    printf("Address: %p ;; value: %d\n", p_n, *p_n);

    puts("***********************************************");

    double d = 10.6;
    double *p_d = &d;
    printf("Address: %p ;; value: %.2lf\n", p_d, *p_d);  // 0x7ffee9b8f7e0 10.60
    printf("Size of double: %zu\n", sizeof(double));     // 8
    p_d = p_d + 2;
    printf("Address: %p\n", p_d); // 0x7ffee9b8f7f0

    puts("************************************************");

    // Разница между адресами:
    int a = 18;
    int b = 22;
    int *p_a = &a;
    int *p_b = &b;
    ptrdiff_t diff = p_a - p_b; // (0x7ffee1fbd7c4 - // 0x7ffee1fbd7c0) / 4
    printf("address of a = %p\n", p_a); // 0x7ffee1fbd7c4
    printf("address of b = %p\n", p_b); // 0x7ffee1fbd7c0
    printf("diff = %ld\n", diff); // 1

    int arr[64];
    int *p_10 = &arr[10]; // указатель на 10-й элемент массива
    int *p_40 = &arr[40]; // указатель на 40-й элемент массива
    ptrdiff_t dist = p_40 - p_10; // расстояние в элементах int
    printf("dist = %ld\n", dist); // 30

    puts("*************************************************");
    // Операции со значением по адресу:
    int m = 88;
    int *p_m = &m;
    int k = *p_m - 45;
    printf("k = %d\n", k); // 43

    return 0;
}
