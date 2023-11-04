使用：

pandoc -t beamer --latex-engine=xelatex --template=bt.tex slides.md -o slides.pdf

编译slides

For windows and Ubuntu:
请在`.vscode\launch.json`中的`miDebuggerPath`处设定为你安装gdb的绝对路径！

For mac:
请修改`.vscode\launch.json`中的`miDebuggerPath`。有可能你只需要修改其中的用户名。直接注释掉这行配置也有可能能正常运行（可能依具体的设备而不同）。
也可参考助教施程予提供的他自己在mac上调试cpp代码的[配置（以及视频演示](https://cloud.tsinghua.edu.cn/d/261eec7304af4c71ae45/)
