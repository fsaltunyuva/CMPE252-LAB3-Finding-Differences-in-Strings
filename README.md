<a name="br1"></a> 

**Computer Engineering Department**

**TED University**

**CMPE 252 – C Programming, Spring 2023**

**Lab 03**

In this program, there are four functions, namely, main, findDifference, and printNameSurnameAge. main function is already provided and it is supposed to remain as it is (you should not change it). You are required to implement findDifferenceand printNameSurnameAge functions.

Here are the operations performed in mainfunction:

➢ An array of strings with name list is created to hold name, surname and age data in “name\_surname\_age” format.

➢ Two *arrays of pointers to strings* with names group1 and group2 are created along with two integer variables n1 and n2 to hold the number of elements in the arrays.

➢ n1 and group1are initialized by taking data from the standard input.

➢ n2 and group2are initialized by taking data from the standard input.

➢ *An array of pointers to strings* with name diff and an integer variable with name diffCount are created. The array of pointers diff is supposed to hold pointers to the strings that are included in group1 but not included in group2. diffCount is supposed to hold the number of elements in the difference set. Those variables are to be filled by calling findDifference function.

➢ findDifference function is called with 6 arguments, which are the array of pointers (group1 and group2), their number of elements (n1and n2), the array of pointers diff, and the address of diffCountvariable.

➢ The strings pointed to, by the elements of the array group1are printed.

➢ The strings pointed to, by the elements of the array group2are printed.

➢ The strings pointed to, by the elements of the array diffare printed.

➢ The user is asked whether to print the strings in the difference set in Name Surname Age format. If the answer is 1, then:

o printNameSurnameAge function is called with 2 arguments, which are the array ofpointers diffand its number of elements diffCount.

o The strings pointed to, by the elements of the array diff are printed again to check whether they remain unchanged after calling printNameSurnameAgefunction.




**Task 1:** Implement findDifferencefunction.

**void findDifference(char \*group1[], char \*group2[], int n1, int n2, char \*diff[], int\*diffCountPtr);**

The array of pointers diff is an output parameter and it is supposed to hold pointers to the set ofstrings pointed to, by the elements of group1but not pointed to, by the elements of group2. The total number of elements in the difference is to be stored in the integer variable pointed to, by diffCountPtr(which is also an output parameter).

**Hint:** You need to compare each string in group1 with each string in group2. You need to use strcmp function for the comparison.

Expected Run:

> Number of elements in group1: *5*

> Entries in group1: *1 5 9 4 7*

> Number of elements in group2: *4*

> Entries in group2: *9 5 1 6*

> group1:

> zoe\_vin\_32

> denzel\_bale\_65

> dustin\_smith\_51

> david\_studi\_17

> james\_alonso\_30

> group2:

> dustin\_smith\_51

> denzel\_bale\_65

> zoe\_vin\_32

> james\_feldman\_76

> difference of group1 from group2:

> david\_studi\_17

> james\_alonso\_30

> Do you want to print the difference in Name Surname Age format (1/0)? *0*


**Task 2:** Implement printNameSurnameAge function.

**void printNameSurnameAge(char \*diff[], int diffCount);**

The strings pointed to, by the elements of the array diffare printed in Name Surname Age format (the first letters of Name and Surname are capitalized). diffCount holds the number of elements in the array diff.

Expected Run:

> Number of elements in group1: *5*

> Entries in group1: *1 5 9 4 7*

> Number of elements in group2: *4*

> Entries in group2: *9 5 1 6*

> group1:

> zoe\_vin\_32

> denzel\_bale\_65

> dustin\_smith\_51

> david\_studi\_17

> james\_alonso\_30

> group2:

> dustin\_smith\_51

> denzel\_bale\_65

> zoe\_vin\_32

> james\_feldman\_76

> difference of group1 from group2:

> david\_studi\_17

> james\_alonso\_30

> Do you want to print the difference in Name Surname Age format (1/0)? *1*

> difference of group1 from group2 in Name Surname Age format:

> David Studi 17

> James Alonso 30

> difference of group1 from group2:

> david\_studi\_17

> james\_alonso\_30
