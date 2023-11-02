CXX = g++
CXXFLAGS = -Wall -Wextra -g -fdiagnostics-color=always


# 定义对其他cpp文件编译规则
%: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@
	

#在 Makefile 中，$<、$@ 和 $^ 是自动化变量，用于表示规则中的特定部分。

# $< 表示规则的第一个依赖文件（即输入文件）。
# $@ 表示规则的目标文件（即输出文件）。
# $^ 表示规则的所有依赖文件（即输入文件）的列表，以空格分隔。


	



