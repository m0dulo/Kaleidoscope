# 基于 LLVM 的 Kaleidoscope 语言自制编译器
基于 LLVM 的 Kaleidoscope 语言自制编译器实践、个人学习体会和相关文档翻译
## 组织结构
每章逐步对 Kaleidoscope 语言编译器进行完善
- [第 1 章：Kaleidoscope 语言和词法分析器](doc/Kaleidoscope01.md)  
 阐述了目标和想要构建的基本功能。词法分析器是为一门编程语言构建解析器的基础，使用 C++ 实现一个简单的词法分析器
- [第 2 章：实现解析器和 AST](doc/Kaleidoscope02.md)  
 介绍了解析器相关技术，以及抽象语法树的构造。关于解析技术，本教程使用的是递归下降分析法和算符优先级分析法
- [第 3 章：LLVM IR 的代码生成](doc/Kaleidoscope03.md)  
 介绍了如何基于 AST 生成 LLVM IR，通过一种简单的方法将 LLVM 引入到编译器实现中
- [第 4 章：添加 JIT 和优化器支持](doc/Kaleidoscope04.md)  
 基于 LLVM 为 Kaleidoscope 实现 JIT 编译功能，同时加入对于优化器的支持
- [第 5 章：扩展语言：控制流 ControlFlow](doc/Kaleidoscope05.md)  
 对 Kaleidoscope 进行语言扩展，实现控制流能力(if 语句和 for 语句)。同时介绍了 SSA 的构造
- [第 6 章：扩展语言：用户定义的运算符](doc/Kaleidoscope06.md)  
 对 Kaleidoscope 进行语言扩展，实现自定义运算符能力，允许用户自定义一元运算符和二元运算符（支持运算符优先级）
- [第 7 章：扩展语言：可变变量](doc/Kaleidoscope07.md)  
 对 Kaleidoscope 进行语言扩展，实现局部变量和赋值操作符。同时，介绍了一种隐式的方法让 LLVM 自动构造 SSA
- [第 8 章：编译为目标文件](doc/Kaleidoscope08.md)  
 介绍了如何基于 LLVM IR 编译生成目标文件
- [第 9 章：调试信息](doc/Kaleidoscope09.md)  
 支持调试器，添加调试信息，允许在 Kaleidoscope 函数中设置断点，打印参数变量和调用函数
- [第 10 章：总结展望](doc/Kaleidoscope10.md)  
 主要讨论语言扩展的进阶内容，比如指针、垃圾回收、异常、调试、“意大利面堆栈(spaghetti stacks)”（spaghetti stacks也叫 [Parent pointer tree](https://en.wikipedia.org/wiki/Parent_pointer_tree#:~:text=The%20term%20spaghetti%20stack%20is,bindings%20and%20other%20environmental%20features.)， 是一种 N 元树数据结构，其中子节点具有指向父节点的指针）的支持等