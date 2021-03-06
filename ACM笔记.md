###学习路径:
初学者：刘汝佳《算法竞赛入门经典》（小白），watashi翻译的《挑战程序设计竞赛》
进阶：刘汝佳《算法竞赛入门经典——训练指南》（大白），刘汝佳《算法艺术与信息学竞赛》（黑书）

###《算法竞赛入门经典》
####前言
比赛的核心是算法（Algorithm），并且推荐使用Pascal语言，因为它适合描述算法。

Pascal 的IDE有Turbo Pascal、free pascal下载，Delphi是一个集成开发环境（IDE），使用的是由传统Pascal语言发展而来的Object Pascal语言。

gdb尽管只是一个文本界面的调试器，但功能十分强大。不管是Linux和Windows下的MinGW，gcc和gdb都是最佳拍档。

####MAC使用GCC编译器
1. 编译，会自动生成a.out，这是可执行文件，不是目标文件：gcc  test.c
执行，显示运行结果：./a.out

2. 执行时，显示执行时间，使用time命令：
time ./a.out

2. 用户还可以通过使用选项-o来改变编译后的文件名，如使用下面的命令行，可以把a.out给成result:
gcc -o result test.c
这个时候，执行新命名的文件：
./result

2. -c选项：只把源代码（.c文件）编译成目标代码（.o文件），但跳过连接一步。它能使编译多个C程序时的速度更快且更加容易管理。默认时，gcc建立的目标代码文件只有一个.o的扩展名。
gcc -c test.c

2. -S选项：告诉gcc在C程序文件产生了汇编语言文件后停止编译，产生的汇编语言文件的默认文件扩展名为.s。
gcc -S test.c

2. -E选项：指示编译器只对输入的文件进行预处理，且预处理的输出将被送到标准输出而不是储存在文件里。
gcc -E test.c

2. 如果安装了多个版本的gcc，要指定运行某个版本的gcc，命令如下，要注意大小写：
gcc -V 2.6.3 -v

2. 显示警告：
在gcc中使用开关-W控制警告信息的命令如下：
gcc -Wall -o test test.c

2. 浏览文件:cat test.c
