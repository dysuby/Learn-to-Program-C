# [Loop]Substring

# Description
If A,B are two strings and B completely contains A, we say A is a substring of B.

For example:

* "abc" is a substring of "abcde"
* "love" is a substring of "I_love_TA"
* "math" is **not** a substring of "matrix"

Now we want to know how many substrings in B given a string A

For example, if A="ab", B="abcabc", we say B has two substring A.

We allow two substring to **overlap**, that means if A="aa", B="aaa", then we also say B has two substring A

Please implement a function `getNumOfSubstring` to do this job.

## Input
two string

## Output
the number of substring

## Sample Input 1
```
abcabc ab
```
## Sample Output 1
```
2
```
## Sample Input 2
```
aaa aa
```
## Sample Output 2
```
2
```

>Note: You don't need to submit the main function, your code should be like this:
```
int getNumOfSubstring(char a[], char b[]) {
  //todo
}
```