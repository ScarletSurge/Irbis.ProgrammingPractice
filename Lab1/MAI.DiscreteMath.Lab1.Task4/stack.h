#ifndef STACK_H
#define STACK_H

#include <stdio.h>

enum retval
{
    OK = 0,
    PARAMETER_IS_NULL = 1,
    MEMORY_ALLOCATION_ERROR = 2,
    MEMORY_REALLOCATION_ERROR = 3,
    INVALID_OPERATION = 4
};

#define stack_on_array_of(type_name)\
typedef struct stack_on_array_of_##type_name\
{\
    type_name *values;\
    size_t values_count;\
    size_t values_capacity;\
} stack_on_array_of_##type_name;

#define init_stack_on_array_of(type_name)\
int init_stack_on_array_of_##type_name(\
    stack_on_array_of_##type_name *stack_instance,\
    size_t initial_capacity)\
{\
    if (stack_instance == NULL)\
    {\
        return PARAMETER_IS_NULL;\
    }\
    \
    if ((stack_instance->values = (type_name## *)malloc(sizeof(type_name) * initial_capacity)) == NULL)\
    {\
        return MEMORY_ALLOCATION_ERROR;\
    }\
    \
    stack_instance->values_capacity = initial_capacity;\
    stack_instance->values_count = 0;\
    \
    return OK;\
}

#define deinit_stack_on_array_of(type_name)\
int deinit_stack_on_array_of_##type_name(\
    stack_on_array_of_##type_name *stack_instance)\
{\
    if (stack_instance == NULL)\
    {\
        return PARAMETER_IS_NULL;\
    }\
    \
    free(stack_instance->values);\
    stack_instance->values = NULL;\
    stack_instance->values_capacity = 0;\
    stack_instance->values_count = 0;\
    \
    return OK;\
}

#define push_into_stack_on_array_of(type_name)\
int push_into_stack_on_array_of_##type_name(\
    stack_on_array_of_##type_name *stack_instance,\
    type_name value_to_push)\
{\
    type_name *for_realloc;\
    \
    if (stack_instance == NULL)\
    {\
        return PARAMETER_IS_NULL;\
    }\
    \
    if (stack_instance->values_count == stack_instance->values_capacity)\
    {\
        if ((for_realloc = (type_name *)realloc(stack_instance->values, sizeof(type_name) * stack_instance->values_capacity * 2)) == NULL)\
        {\
            return MEMORY_REALLOCATION_ERROR;\
        }\
        \
        stack_instance->values = for_realloc;\
        stack_instance->values_capacity *= 2;\
    }\
    \
    stack_instance->values[stack_instance->values_count++] = value_to_push;\
    \
    return OK;\
}

#define pop_from_stack_on_array_of(type_name)\
int pop_from_stack_on_array_of_##type_name(\
    stack_on_array_of_##type_name *stack_instance,\
    type_name *popped_value_target)\
{\
    if (stack_instance == NULL)\
    {\
        return PARAMETER_IS_NULL;\
    }\
    \
    if (popped_value_target == NULL)\
    {\
        return PARAMETER_IS_NULL;\
    }\
    \
    if (stack_instance->values_count == 0)\
    {\
        return INVALID_OPERATION;\
    }\
    \
    *popped_value_target = stack_instance->values[--stack_instance->values_count];\
    \
    return OK;\
}

#define top_from_stack_on_array_of(type_name)\
int top_from_stack_on_array_of_##type_name(\
    stack_on_array_of_##type_name const *stack_instance,\
    type_name *top_value_target)\
{\
    if (stack_instance == NULL)\
    {\
        return PARAMETER_IS_NULL;\
    }\
    \
    if (top_value_target == NULL)\
    {\
        return PARAMETER_IS_NULL;\
    }\
    \
    if (stack_instance->values_count == 0)\
    {\
        return INVALID_OPERATION;\
    }\
    \
    *top_value_target = stack_instance->values[stack_instance->values_count - 1];\
    \
    return OK;\
}

#define stack_on_array_declaration_for(type_name)\
stack_on_array_of(type_name)\
init_stack_on_array_of(type_name)\
deinit_stack_on_array_of(type_name)\
push_into_stack_on_array_of(type_name)\
pop_from_stack_on_array_of(type_name)\
top_from_stack_on_array_of(type_name)

#endif