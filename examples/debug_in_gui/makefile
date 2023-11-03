CXX = g++
CXXFLAGS = -Wall -Wextra -g -fdiagnostics-color=always

#手动指定多文件时的依赖，这里的main是main.cpp不带扩展名的结果
main: main.cpp simple_random.cpp simple_random.h
	$(CXX) $(CXXFLAGS) $^ 
	mv a.out $@.out

# 定义对其他cpp文件编译规则
%: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@.out
	
	

#在 Makefile 中，$<、$@ 和 $^ 是自动化变量，用于表示规则中的特定部分。

# $< 表示规则的第一个依赖文件（即输入文件）。
# $@ 表示规则的目标文件（即输出文件）。
# $^ 表示规则的所有依赖文件（即输入文件）的列表，以空格分隔。


	



