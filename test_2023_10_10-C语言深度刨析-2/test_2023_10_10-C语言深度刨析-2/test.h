#pragma once

// 1.C头文件
// 2.所有的变量的声明
// 3.所有的函数声明
// 4.#define    typedef    struct 

// 在单纯使用源文件的时候，组织项目结构的时候，项目越大越复杂的时候，维护成本会变得越来越高
// .h 头文件，组织项目结构的时候，减少大型项目的维护成本

// .h 可能被多个源文件包含，可能有一个问题，头文件被重复拷贝的问题
// #pragam once
#include <stdio.h>

extern g_val;
extern void show(void);
