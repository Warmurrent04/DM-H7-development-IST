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
在开发时，可以创建一个新的分支让别人帮我们些README等一些东西，最后进行合并。方便我们共同开发

###### 3.`get merge`

合并分支  

当我们开发完毕后，就要将这些别的分支与主分支main/master进行合并

此时输入  
`git checkout main`  
`git merge --no-ff feature-A `  
随后编辑器启动将feature-A分支合并到main/master主分支中

合并之后，Git并不会自动删除分支，想要删除可以自己手动
合并后要确认内容是否合并到主分支  
确认后可以删除该分支  

`git branch -d feature-A`  
删除本地的分支  
`git push branch origin -d feature-A`  
删除远程仓库的分支

###### 4.`get log --graph`  
以图表形式查看分支  
这个指令比起来之前的更加的直观，以后查看日志就用这行代码



#### 第三部分  **Git 更改提交的指令**

###### 5. `git reset`  

回溯历史版本  

在回溯时需要得到要回溯节点的哈希值  

比如  
`git reset --hard 哈希值`  

回溯时，需要得到各个节点的哈希值

如果回溯是当前分支的可以使用`git log` 查看当前分支的各个节点哈希值

如果回溯的是当前仓库的可以使用`git reflog` 查看当前仓库的哈希值  

***注意因为我们上面把分支feature-Ag给删掉了回溯时间节点并不会帮我们把删去的分支给找回来***

###### 6.`git commit --amend`  
修改提交信息

使用这条指令可以修改上一条的提交信息

###### 7.`git rebase -i`
压缩历史  

在合并特性分支之前，如果发现已提交的内容中有些许拼写错误等，
不妨提交一个修改，然后将这个修改包含到前一个提交之中，压缩成一
个历史记录

#### 第四部分  **Git 推送远程仓库的指令**

在Github端创建远程仓库是不建议选择自动生成README文件
这会导致一开始远程仓库就和本地仓库失去了整合性

###### 1.`git remote add`  

添加远程仓库  

###### 2.`git push`  

推送指令

推送至主分支 `git push origin main/master`  
推送至其他分支 `git push origin feature-D`  


#### 第五部分  **Git 获取远程仓库的指令**

###### 1.`git clone `  

获取远程仓库    

此时会默认处在main/master分支下 使用origin作为远程仓库标识符

可以将远程仓库克隆到本地的文件夹里面（注意不要和上传的文件夹在一个目录下）