# Linux

> 你一直不肯放弃Windows，你真正了解Windows吗？（注册表，PowerShell等）
> 你为什么一直排斥Linux，是因为害怕命令行吗？

## 我们为什么选择Linux？

 - Linux看上去比Windows复杂很多，实际上并不是那么回事。
 - Linux目前很流行，目前基本霸占了服务器系统、嵌入式系统等市场。
 - Linux让我们更近地接触到计算机组成原理、操作系统等课程的知识。
 - Linux让我们深度定制化自己的系统。
 - Linux给予我们足够的信任，完全服从我们的命令，无论是正确的还是错误的。（对于聪明人来说是好事）
 - ...

## Linux发行版

    提问：说出你了解的某个Linux发行版的特点

- Ubuntu
- Debian
- Fedora
- ArchLinux
- ...

## 命令行基础指令

    几乎所有的指令都有参数可以选择。如rm --help。--help即为参数。

- cd  
- ls
- mkdir
- rmdir
- move
- cp
- rm
- ..

# Vim

一款历史悠久但是仍然强大的编辑器。

## 为什么学习Vim

- 几乎所有的Linux发行版都会内置Vim
- 很多Linux程序默认的编辑器为Vim，不掌握Vim在使用这些程序时会很尴尬
- Vim学习成本高，但是掌握后会极大提高编辑速度

## Vim的三种模式

- 一般指令模式
- 编辑模式
- 命令模式

## Vim基础指令

- vim <文件名>
- i
- Esc
- :q :q!
- :w :wq
- h j k l
- 0 $
- :set nu
- ..

# Shell

## 为什么学习Shell

- Shell是操作 操作系统 的接口
- Shell脚本可以直接对命令行进行操作

## Shell的种类

- Bourne Shell（/usr/bin/sh或/bin/sh）
- **Bourne Again Shell（/bin/bash）**
- C Shell（/usr/bin/csh）
- K Shell（/usr/bin/ksh）
- Shell for Root（/sbin/sh）
- ..

## Shell脚本基础

### Shell变量

    a=3 （不同于其他编程语言，Shell的赋值=前后不可以有空格）
    echo $a （输出a的值）
    readonly a（使a变为只读的）
    unset a （删除变量a）

### Shell参数传递

    echo $1（输出第一个参数）
    echo $* （输出所有参数）

### Shell数组

    m_array=(A B C D)  （初始化数组）
    echo ${m_array[0]} （输出数组第一个位置的值）
    echo ${m_array[*]} （输出数组的值）
    echo ${#m_array[*]}（输出数组的长度）

### Shell流程控制

if-else

    if [ $a == $b ]
    then
       echo "a 等于 b"
    elif [ $a -gt $b ]
    then
       echo "a 大于 b"
    elif [ $a -lt $b ]
    then
       echo "a 小于 b"
    else
       echo "没有符合的条件"
    fi

for

    for str in 'This is a string'
    do
        echo $str
    done

### Shell函数

    demoFun(){
        echo "这是我的第一个 shell 函数!"
    }
    echo "-----函数开始执行-----"
    demoFun
    echo "-----函数执行完毕-----"

> Shell参考资料：[Shell新手教程](http://www.runoob.com/linux/linux-shell-func.html)