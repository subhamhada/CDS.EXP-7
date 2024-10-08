# Experiment 7

## Aim -
To study and implement c++ arrays and strings

## Apparatus -
Vs code

## Theory -

## Comparison Table between arrays and strings 

| Feature           | Array                                           | String                                       |
|-------------------|-------------------------------------------------|----------------------------------------------|
| *Definition*    | A collection of elements of the same type stored in contiguous memory locations. | Sequences of characters used to represent text. Designed for textual data. |
| *Size*          |Size can be fixed or dynamic based on the language (e.g., static in C, dynamic in Python).         | Size is dynamic and adjusts with the length of the text. |
| *Mutability*    | Usually mutable; elements can be changed after the array is created.| Generally immutable; modifying a string creates a new one rather than altering the original. |
| *Access*        | Accessed via indices.                          | Characters accessed via indices; includes built-in methods for manipulation. |
| *Operations*    | Support various operations like sorting, searching, and element manipulation.  |Support operations like concatenation, substring extraction, and text formatting.|
| *Memory Allocation* |Typically allocated with a fixed size and contiguous memory.|Memory allocation can be variable and managed dynamically based on string length and encoding. |
| *Indexing* | Elements are accessed via numerical indices (e.g., arr[0]). | Characters are accessed via numerical indices (e.g., str[0]). |
| *Data Type* | Can hold multiple data types depending on the language (e.g., integers, floats, objects). |Specifically hold text data (characters).|
| *Use Cases* | Used for storing and processing collections of related data (e.g., lists of numbers, objects). |used for handling and manipulating textual data(e.g., user imput, file content|

## *Array* :
An array is a fixed-size sequential collection of elements of the same type stored in contiguous memory locations. 
The lowest address corresponds to the first element, and the highest address corresponds to the last element. Array indices start at 0.

## Declaring an Array:

Specifies the type of the elements and the number of elements.To declare an array, specify the type of elements and the number of elements required. array_size must be an integer constant greater than zero. Accesses the 10th element of the array. type can be any valid C++ data type.
  
      type arrayName[array_size];
- Type is the data type of the elements (e.g., int, float, double, char).
- arrayName is the name you want to give to the array.
- arraySize is the number of elements in the array.

*key point about declaring an array* :
- The size of the array (array_size) must be an integer constant greater than zero.
- Once the size of the array is defined, it cannot be changed

## Initializing an Array:
Arrays can be initialized element by element or using a single statement. Provides initial values to the elements of the array. The number of values in {} should not exceed array_size.

      int arr[5] = {1000, 2, 3, 17, 50};
- The number of values between braces { } cannot be larger than the number of elements that we declare for the array between square brackets [ ]. 

*key point about initializating an array* :
- The number of elements in the initializer list cannot exceed the size of the array.
- If you initialize an array without specifying the size, C++ will automatically determine the size based on the number of elements in the initializer list

## Accessing Array Elements:
An element can be accessed by indexing the array name. This is done by placing the index of the element within square brackets after the name of the array.
  
       int num = arr[9];
- Above statement accesses the 10th element of the array

*key point about accessing array elements* :
- Array indices start from 0. Therefore, the first element of the array has an index of 0, the second element has an index of 1, and so on.
- Accessing an index outside the array's bounds (e.g., using an index greater than or equal to the array's size) results in undefined behavior

## *Key Points about arrays* :

- *Definition* : An array is a variable that can store multiple values of the same type.

- *Use of Arrays* : Regular variables (e.g., v1, v2, v3) are manageable for a few objects, but arrays are needed for a larger number of instances.

- *Indexing* : Array indexes start at 0, with the first item at index x[0].

- *Last Element* : The last element in an array of size n is at index (n-1), e.g., x[5] for an array of size 6.

- *Sequential Addresses* : Array elements have sequential memory addresses. For example, if x[0] is at address 2120, then x[1] is at 2124, x[2] at 2128, etc.

- *Element Size* : Each element's address increases based on its size; if an int is 4 bytes, addresses increment by 4 for each element

## Strings :
A string is a sequence of characters used as an object of the class. The string class stores the characters as a sequence of bytes with the functionality of allowing access to the single-byte 
character. A string is different from an array of characters.

## Printing strings :
prnting a string involves simply presenting its content to the user. This operation is fundamental in programming and serves various purposes such as debugging, user feedback, and output generation. When you show a string, you typically output its content to the console or a user interface

*key points about printing a strings* :
- *String Formatting* : Use proper formatting to display text correctly, including handling dynamic content and alignment.

- *Escape Characters* : Properly manage special characters like newline (\n) and tab (\t) to ensure they appear as intended.

- *Encoding* : Ensure the correct character encoding (e.g., UTF-8) is used to handle special characters.

## Concatenating of strings :
String concatenation is a fundamental operation in programming, where two or more strings are joined together to form a single, continuous string. This operation is commonly used in various programming languages to combine text, build dynamic messages, or format output.String concatenation is not just limited to joining literal strings; it can also involve concatenating variables, user inputs, or results from other operations.

*key points about concatenation of strings* :
- *Joins Strings*: Combines multiple strings into one.

- *Immutability & Performance*: Can impact performance due to string immutability; consider efficient alternatives.

- *String Interpolation*: Offers a more readable and convenient way to concatenate.

- *Type Conversion*: Ensure proper conversion when concatenating different types.

## Reversing of strings :
When reversing strings, we're dealing with individual sequences of characters. Each word in a paragraph is a sequence of characters separated by spaces and punctuation marks. The goal is to reverse these sequences without altering the overall structure of the paragraph. This task involves a series of steps, each of which addresses a different aspect of text processing.

*key points about reversing of strings* :
- *Split the Paragraph:* Separate the text into words and punctuation marks.

- *Reverse Each Word:* Flip the characters in each word while keeping punctuation and spaces unchanged.

- *Reconstruct the Paragraph:* Reassemble the text with reversed words and original punctuation and spacing.

## Palindrome checking in strings :
A palindrome is a string that reads the same forward and backward, ignoring spaces, punctuation, and capitalization.To check if a string is a palindrome, you need to determine whether it reads the same backward as forward. This involves several key steps, starting with normalizing the string to ensure consistency. Normalization typically includes converting all characters to lowercase and removing any spaces or punctuation. Once the string is normalized, you reverse it to create a backward version. This reversed string is then compared to the original normalized string. If both strings are identical, it confirms that the original string is a palindrome.

*key points about palindrome checking of strings* :
- *Normalize the String* : Convert the string to lowercase and remove non-alphanumeric characters (spaces, punctuation) to ensure uniformity.

- *Reverse the String* : Create a reversed version of the normalized string.

- *Compare* : Check if the original normalized string matches the reversed string.

- If they are the same, the string is a palindrome.

## Code -
### For arrays
### 1. *Array declarations* -
```
//subham
//entc B2
//23070123132
//experiment 7
#include <iostream>
using namespace std;
int main()
{
    int array1[2] = {1, 2}; 
    int array2[2] = {2, 4}; 
    int array3[2] = {1, 3};

    // Printing array1
    for (int i = 0; i < 2; i++) 
    { 
        cout << array1[i] << " ";
    }
    cout << endl; 

    // Calling out array1[1]
    cout << "array1[1]: " << array1[1] << endl;

    // Printing array2
    for (int value : array2) 
    { 
        cout << value << " "; 
    }
    cout << endl;

    return 0;
}
```

### 2. *Input output array* -
```
//subham
//entc B2
//23070123132
//experiment 7
#include<iostream>
using namespace std;
int main()
{
    int n,i,j=0,k,l,temp;
    cout<<"enter size of array";
    cin>>n;
    int a1[n],a2[n];
    for (i=0;i<n;i++)
    {
        cout<<"enter element-"<<i+1<<": ";
        cin>>a1[i];
    }
}
```

### 3. *Reversing array* -
```
//subham
//entc B2
//23070123132
//experiment 7
#include<iostream>
using namespace std;

int main() {
    int n, i, j=0, k, l, temp;
    cout<<"Enter size of array: ";
    cin>>n;
    int a1[n], a2[n];


    for(i=0;i<5;i++) {
        cout<<"Enter element-"<<i+1<<": ";
        cin>>a1[i];
    }

    cout<<"\nArray given by user: ";
    for(l=0;l<5;l++) {
        cout<<a1[l];
    }
    cout<<endl;

    for(k=4;k>=0;k--) {
        temp = a1[k];
        a2[j] = temp;
        j++;
    }

    cout<<"Reversed array: ";
    for(l=0;l<5;l++) {
        cout<<a2[l];
    }
}
```

### 4. *Search elements in Array* -
 ```
//subham
//entc B2
//23070123132
//experiment 7
#include<iostream>
using namespace std;
int main() {
    int marks[5], i, j, num, flag=0, count=0;
    for(i=0;i<5;i++) {
        cout<<"Enter element-"<<i+1<<": ";
        cin>>marks[i];
    }
    cout<<"Enter element to be searched: ";
    cin>>num;
    for(j=0;j<5;j++) {
        if(marks[j]==num) {
            cout<<"Position of "<<num<<": "<<j+1<<endl;
            count++;
            flag=1;
        }
    }
    if(flag==0) {
        cout<<"Element not present";
    }
    else if(flag==1) {
        cout<<"Element is present: "<<count<<" times";
    }
}
```

### 5. *Sum and Average of Array* -
```
//subham
//entc B2
//23070123132
//experiment 7
#include<iostream>
using namespace std;
int main() {
int a1[5], i, j;
float sum=0, avg;
for(i=0;i<5;i++) {
cout<<"Enter element-"<<i+1<<":";
cin>>a1[i];
}
for(j=0;j<5;j++) {
sum = sum + a1[j];
}
cout<<"Sum of elements = "<<sum<<endl;
avg = sum/5;
cout<<"Average = "<<avg;
}
```

### 6. *Max and Min element of Array* -
```
//subham
//entc B2
//23070123132
//experiment 7
#include<iostream>
using namespace std;
int main() {
int n, i, max=0;
cout<<"Enter number of elements: ";
cin>>n;
int a[n];
for(i=0;i<n;i++){
cout<<"Enter element-"<<i<<": ";
cin>>a[i];
}
for(i=0;i<n;i++){
if(a[i]>max){
max=a[i];
}
}
int min=a[0];
for(i=0;i<n;i++){
if(min>a[i]){
min=a[i];
}
}
cout<<"Maximum: "<<max<<endl<<"Minimum: "<<min;
}
```

### For strings
### 1. *Prining String Input*
```
//subham
//entc B2
//23070123132
//experiment 7
#include <iostream>
#include<string>
using namespace std;
int main(){
    string a;
    cout<<"enter any word: ";
    cin>>a;
    cout<<" entered string is "<<a<<endl;
    return 0;
}
```

### 2. *Concatenation Of Strings*
```
//subham
//entc B2
//23070123132
//experiment 7
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a,b;
    cout<<"enter strings: ";
    cin>>a>>b;
    cout<<"CONCATENATION: "<<a+b;
    return 0;
}
```

### 3. *Reverse In String*
```
//subham
//entc B2
//23070123132
//experiment 7
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    cout<<"enter string: ";
    cin>>a;
    int i;
    for(i=a.length()-1;i>=0;i--)
    {
        cout<<a[i];
    }
    return 0;
}
```

### 4. *Palindrome Checking In String*
```
//subham
//entc B2
//23070123132
//experiment 7
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    cout<<"enter a string: ";
    cin>>a;
    int n=a.length(),i,flag=0;
    for(i=0;i<a.length();i++)
    {
        if(a[i]==a[n-1])
        {
            flag=1;
        }
        n--;
    }
    if(flag==1)
    {
        cout<<a<<" is palindrome";
    }
    else
    {
        cout<<a<<" is not palindrome";
    }
}
```

## Output -
### For arrays
### 1. *Array declaration*
![Screenshot 2024-08-07 090814](https://github.com/user-attachments/assets/8df54ddc-2c70-42b4-94a1-9af29c2aa6f4)

### 2. *Input output array*
![Screenshot 2024-08-07 011749](https://github.com/user-attachments/assets/1e060af1-06d8-4fbd-9160-65e13d778d1e)

### 3. *Reversing array*
![Screenshot 2024-08-07 011848](https://github.com/user-attachments/assets/e326c2b9-b08a-4960-80cd-d645a68b2df2)

### 4. *Search elements in Array*
- If present
![Screenshot 2024-08-07 011944](https://github.com/user-attachments/assets/c43bdadd-6616-4c19-b26c-99c88800c204)
- if not present
![Screenshot 2024-08-07 012016](https://github.com/user-attachments/assets/f078bef1-9007-4481-a1ca-5833722f9492)

### 5. *Sum and Average of Array*
![Screenshot 2024-08-07 012101](https://github.com/user-attachments/assets/d5a70dc3-d6a7-415f-9c96-d2ba0fc8f210)

### 6. *Max and Min element of Array*
![Screenshot 2024-08-07 012140](https://github.com/user-attachments/assets/14f67e64-b8af-45d1-83a0-7a2359b26109)

### For Strings
### 1. *prining string input*
![Screenshot 2024-08-07 100350](https://github.com/user-attachments/assets/05aba2ab-9044-45ab-9003-15b38bcd87c6)
### 2. *concatenation of strings*
![Screenshot 2024-08-07 100417](https://github.com/user-attachments/assets/72095d17-4972-490e-aa24-7b6cc22542a5)
### 3. *reverse in string*
![Screenshot 2024-08-07 100448](https://github.com/user-attachments/assets/5488fbb7-18fb-4e6d-a435-dbc865ee4103)
### 4. *palindrome checking in string*
- palindrome
![Screenshot 2024-08-07 100542](https://github.com/user-attachments/assets/a3edfbe7-06ef-474e-b00c-84ea267cc278)
- not palindrome
![Screenshot 2024-08-07 100516](https://github.com/user-attachments/assets/aceb181f-4d4b-4d41-8b65-2d4b71693250)

## Conclusion -
Arrays are a fundamental data structure in programming, used to store a collection of elements of the same type in contiguous memory locations.
Arrays provide efficient storage and access for a fixed number of elements but are limited in flexibility compared to dynamic data structures.

`string` class allows you to handle text easily, using double quotes for initialization and the `+` operator for concatenation. You can access individual characters, check the length with `length()`, and extract parts of the string using `substr()`. Additionally, you can compare strings and read user input with `getline()`, making string manipulation straightforward.
