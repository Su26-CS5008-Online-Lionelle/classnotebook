#include <stdio.h>
#include <stddef.h>

void array_param_demo(int * arr_param, size_t len) {
    // In a function parameter, int arr_param[] is treated as int *arr_param.
    printf("[array_param_demo] pointer size = %zu\n", sizeof(int *));
    printf("[array_param_demo] first value = %d\n", arr_param[0]);

    if (len > 1) {
        printf("[array_param_demo] second value = %d\n", arr_param[1]);
        printf("[array_param_demo] pointer math *(arr_param + 1) = %d\n", *(arr_param + 1));
    }
    arr_param[0] = 100;
}

typedef struct {
    char name[16];
    int age;
    double gpa;
} Person;

typedef struct {
    int id;
    char name[16];
} PersonWithIdFirst;

int main(void) {
    printf("=== Question 3: Arrays passed to functions ===\n");
    int nums[] = {10, 20, 30, 40, 50};
    size_t len = sizeof(nums) / sizeof(nums[0]);

    printf("[main] sizeof(nums) = %zu (full array bytes)\n", sizeof(nums));
    printf("[main] sizeof(nums[0]) = %zu\n", sizeof(nums[0]));
    printf("[main] len = %zu\n", len);
    printf("[main] nums        = %p\n", (void *)nums);
    printf("[main] &nums[0]    = %p\n", (void *)&nums[0]);
    printf("[main] &nums[1]    = %p\n", (void *)&nums[1]);
    array_param_demo(nums, len);
    printf("[main] nums[0]    = %i\n", nums[0]);

    printf("\n=== Question 4: Struct memory and addresses ===\n");
    Person person1 = {"Ada", 36, 3.9};

    printf("Person size = %zu bytes\n", sizeof(Person));
    printf("Offsets in Person: name=%zu age=%zu gpa=%zu\n",
           offsetof(Person, name), offsetof(Person, age), offsetof(Person, gpa));

    printf("&person1         = %p\n", (void *)&person1);
    printf("&person1.name    = %p\n", (void *)&person1.name);
    printf("person1.name     = %p (decays to pointer to first char)\n", (void *)person1.name);
    printf("&person1.age     = %p\n", (void *)&person1.age);
    printf("&person1.gpa     = %p\n", (void *)&person1.gpa);

    PersonWithIdFirst person2 = {42, "Grace"};
    printf("\nPersonWithIdFirst size = %zu bytes\n", sizeof(PersonWithIdFirst));
    printf("Offsets in PersonWithIdFirst: id=%zu bytes name=%zu bytes\n",
           offsetof(PersonWithIdFirst, id), offsetof(PersonWithIdFirst, name));

    printf("person2.id size = %zu bytes\n", sizeof(person2.id));
    printf("person2.name size = %zu bytes\n", sizeof(person2.name));

    printf("\n&person2         = %p\n", (void *)&person2);
    printf("&person2.id      = %p\n", (void *)&person2.id);
    printf("&person2.name    = %p\n", (void *)&person2.name);

    return 0;
}
