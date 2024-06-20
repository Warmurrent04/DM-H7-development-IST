# DM-H7-development-IST
## This project is develop the DM borad-STM32H7. 
### 这是一个基于DM H7系列开发板的仓库




#### 第一部分  **Git 指令大全**

##### 参考《Github入门与实践》

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