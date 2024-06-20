# DM-H7-development-IST
## This project is develop the DM borad-STM32H7. 
### 这是一个基于DM H7系列开发板的仓库
### 参考《Github入门与实践》



#### 第一部分  **Git 基本指令**
  
###### 1.```git init```  

初始化仓库 （在第一次新建本地库时使用） 使用后会在当前目录内容生成一个.git的文件夹来存储当前的仓库数据

###### 2.```git status```

用于显示当前Git仓库的过程，比如

```On branch main  //表示当前仓库处在main分支下 ```  
```nothing to commit , working tree clean // 表明当前所有更改都已经提交 ```  

###### 3. ```git add```

用于将文件加入暂存区，成为Git仓库的管理对象。
暂存区：提交之前的临时区域 在本地更改相关文件之后 需要读者将有关文件先提交到暂存区 
Git仓库才能对其进行处理 以及同步推送到远程仓库

###### 4.```git commit```

用于将当前暂存区的文件实际保存到仓库的历史记录中
```git commit -m "message"```  
这里的message就是对刚才提交的一个简要概述，说明你的改动。

完整概述可以像下面这样
```git commit```  
等待回应  
```# 用一行文字简述提交的更改内容```  
```# 空行```  
```# 记述更改的原因和详细内容```  
但是不建议直接使用`git commit` 而不加后缀 不如`-m`方便  

###### 5.```git log```

查看以往仓库提交的日志 查看后 按下Q键退出日志查看  
还有以下拓展

`git log --pretty=short`  
只让程序显示第一行简述信息  
`git log README.md`  
只显示指定目录、文件的日志  
`git log -p`  
只显示文件的改动 文件的前后差别就会显示在提交信息之后  
比如 `git log -p README.md`  
不用死记硬背，可以自己用的时候再查  

###### 6. ```git diff```  
查看更改前后的差别 

#### 第二部分  **Git 分支操作指令**

**分支介绍**
在进行多个并行作业时，我们会用到分支。
分支时从当前的main/master分出两个新的分支

图片见P47

在这两个分支上进行开发，开发完成后可以合并到main中
同时这些分支也支持多人同时高效开发

###### 1. `git brance`

显示分支一览表 标有*号的为当前所在的分支

###### 2. `git checkout -b`

创建、切换分支

**比如创建feature-A分支并进行提交**
`git checkout -b feature-A`
或者  
`git branch feature-A`  
`git checkout feature-A`

此时输入 `git branch `
就会提示处于 **feature-A**分支中