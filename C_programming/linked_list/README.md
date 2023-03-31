# Linked list.
Linked list is  a representation multiples datum in a list with help of a pointer to the next data.

## factors that makes up a linked list.
This are concepts to be familiar with in order to male use of a linked list.
- pointer
- structure or typedef
- memory allocation.

## Visual representation of Linked list.
(EAD)                         (TAIL)
|data1|ptr2|-->|data2|ptr3|-->|data3|ptr|
        |              |            |
        data2         data3       NULL



### Array vs Linked list
+ in array: arr[3] = {0,1,2};
** memory block of array

### 
    Data1 (0) | Data2 (1) | Data (2)
    1000         1004        1008--------addr

in an array the memory block are arranged in a contiguous format, which means that they are all found one after the other
but, 
in linked list: \*list = 0, 1, 2;
** memory block of linked list
### 
    |Data1(0)|ptr(2000)|
        addr:500
            |
    |Data2(1)|ptr(1000)|
       addr:2000
            |
    |Data3(2)|Ptr(NULL)|
        addr:1000

The memory are at different point, connected together by a node ( a pointer tk the next data).

+ It is difficult to delete elements of an array unlike in a linked list.

+ a Linked list has more time complexity than an array.
