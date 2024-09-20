# C++ Notes

## C++ 'Hello world' Code Expalin

### Different Ways to Write "Hello, World!" in C++

### 1. Using `namespace` and `using` Keywords

- **Method 1:** Full use of `namespace`:

    ```cpp
    #include <iostream>

    using namespace std;

    int main() {
        cout << "Hello, World!" << endl;
        return 0;
    }
    ```

- **Method 2:** Selective use of `using` for specific elements:

    ```cpp
    #include <iostream>

    using std::cout;
    using std::endl;

    int main() {
        cout << "Hello, World!" << endl;
        return 0;
    }
    ```

### 2. Without `namespace` or `using` Keywords

This approach avoids bringing anything from the standard library into the global namespace, making it clearer where each element comes from.

```cpp
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
```

### <code>#include < iostream></code>

- This line includes the <code>iostream</code> library, which provides essential input and output functionalities,
  such as <code>cin</code> (for input) and <code>cout</code> (for output).

### <code>using namespace std;</code>

- The <code>namespace</code> keyword allows us to use names for objects and variables from the C++ standard library.
- <code>std</code> is the standard namespace that includes common functionalities like <code>cin</code> and <code>cout</code>.
- We can define our own namespaces for custom code organization.

### <code>int main() {...};</code>

- This function tells the C++ compiler where to start executing the program. It serves as the entry point for any C++ application.
- Remember to always specify the return type (<code>int</code> in this case), which indicates that the <code>main</code> function will return an integer value to the operating system, typically indicating the success or failure of the program.

### <code>cout << "Hello World!" << endl;</code>

- <b><code>cout & endln</code></b> : These are part of the <code>std</code>(standard) namespace. <code>cout</code> is used for outputting text to the console, and <code>endl</code> is used to insert a newline character and flush the output buffer.
- <b><code> <<</code> operator</b> : This is the stream insertion operator. It directs the text <code>'Hello World!'</code> to the <code>cout</code> object, which then displays it on the console. The <code><<</code> operator is also used to chain multiple outputs together.

### <code>return 0;</code> or <code>return 1;</code>

- <code>return 0;</code>\_\_ indicates that the program has executed successfully.
- <code>return 1;</code> (or any non-zero value)\_\_ indicates that the program encountered an error or failure. Different non-zero values can be used to represent specific types of errors. <br /> <br />
- Since we declared <code>int</code> as the return type for the <code>main</code> function, it is mandatory to return an integer value. This value is communicated to the operating system, indicating the program’s outcome.

## Custom namespace/region

- Defining a custom namespace similar to the standard 'std' namespace

        #include < iostream>

        using namespace std;

        namespace myRegion {
            void display() {
                // This function currently does nothing
            }
        }

        namespace anotherRegion {
            void display() {
                // This function currently does nothing
            }
        }

        int main() {
            myRegion::display();
            anotherRegion::display();
            cout << "Hello, World!" << endl;
            return 0;
        }

- We can now use <code>myRegion::display()</code> to call the <code>display</code> function.
- Here, <code>myRegion::display()</code> and <code>anotherRegion::display()</code> are distinguished by their namespaces, so there’s no confusion about which display function is being used.

## <code>#include</code> & <code>using</code> in C++ Vs. <code>import</code> in JavaScript

- <b><code>#include</code></b>: In C++, it’s a preprocessing directive used to include code from another file. This is like a direct code copy-and-paste, as the contents of the included file are inserted into the source file before compilation begins.
- <b><code>using</code></b>: It helps to avoid prefixing with the namespace name every time you access a function or variable from that namespace. It does not affect the inclusion of code but rather the visibility of names.
- <b><code>import</code></b>: In JavaScript, it handles module imports, allowing you to use code from other files or libraries with a <code>runtime mechanism</code>. It doesn’t involve copying code but linking/referencing modules.

### What does mean <u>runtime mechanism</u> in 'JavaScript'

- <b>Module Loading</b>: When you use import, JavaScript loads the module or file at runtime (when the code is executed). This is different from compile-time inclusion, like #include in C++, where the code is directly copied into the source file before compilation.

- <b>Dynamic Importing</b>: JavaScript modules can be dynamically imported using the import() function, which allows for modules to be loaded on demand. This can improve performance by loading code only when it is actually needed.

- <b>Caching</b>: Once a module is imported, JavaScript engines cache the module's exports. This means that if the same module is imported again, the engine reuses the cached version instead of loading it again, which improves efficiency.

## 🔍 C++ vs. JavaScript: A Performance Perspective

As a developer, understanding the differences between languages can significantly impact your choice of technology. Here’s a quick comparison between C++ and JavaScript focusing on performance aspects:

- ### Compilation vs. Interpretation:

<b><code>C++</code></b>: A compiled language where code is translated into machine code before execution. This direct execution by hardware often results in faster performance. <br>
<b><code>JavaScript</code></b>: Primarily an interpreted language, though modern engines use Just-In-Time (JIT) compilation. Code is executed at runtime, which can introduce additional overhead.

- ### Static vs. Dynamic Typing:

<b><code>C++</code></b>: Statically typed, meaning types are checked at compile-time. This allows for optimizations during compilation. <br>
<b><code>JavaScript</code></b>: Dynamically typed, with type checking occurring at runtime, leading to some performance overhead.

- ### Memory Management:

<b><code>C++</code></b>: Offers fine-grained control over memory, leading to potentially more optimized and efficient code. <br>
<b><code>JavaScript</code></b>: Uses automatic garbage collection, which introduces some overhead due to periodic memory management.

- ### Low-Level Operations:

<b><code>C++</code></b>: Provides low-level access to system resources and hardware, enabling highly optimized execution for performance-critical tasks. <br>
<b><code>JavaScript</code></b>: Operates at a higher level with additional abstractions, designed for flexibility and ease of use in web development.
<br> <br>

- <b>Summary : </b> &nbsp; <code>C++</code> excels in performance-critical applications due to its compiled nature, static typing, and low-level control. <code>JavaScript</code>, while potentially slower, offers flexibility and ease of development for web environments. Understanding these differences helps in choosing the right tool for your specific needs.
