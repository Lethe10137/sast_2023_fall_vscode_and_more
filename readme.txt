使用：

sudo apt install texlive-xetex

pandoc -t beamer --latex-engine=xelatex --template=bt.tex slides.md -o slides.pdf

编译slides

For windows and Ubuntu:
请在`.vscode\launch.json`中的`miDebuggerPath`处设定为你安装gdb的绝对路径！