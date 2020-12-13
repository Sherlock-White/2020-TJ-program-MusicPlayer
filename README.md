# **MusicPlayer项目说明文档**

> 同济大学2019级软件学院数据结构课荣誉班项目



## 项目信息

+  **项目名称：用Qt实现一个轻量级的音乐播放器**

+ **指导老师：张颖老师**

+ **小组成员：**
**1951576   沈星宇**
**1953288   张思源**

+ **贡献比例：**
**沈星宇：100%**
**张思源：100%**

+ **项目github地址：**

  https://github.com/Sherlock-White/2020-TJ-program-MusicPlayer

+ **参考博客：**

  https://blog.csdn.net/Kingsman_T/article/details/103879947

  

## 项目开发文档

+ 开发环境：Qt5 （Qt Creator 4.13.3 + Qt 5.9.9 MinGW 32bit）

+ 支持平台：windows

+ 完成时间：2020.12.6 - 2020.12.31

  

### **1 功能分析**

**基础功能：**

- [x] 支持添加本地文件（支持格式：.mp3 、.flac 、.mpga ）并播放
- [x] 支持解析歌词以滚动形式展示
- [x] 支持解析专辑封面
- [x] 支持自定义主页面背景
- [x] 支持歌单管理（”我喜欢“+”其他自定义歌单“）
- [x] 支持多种歌曲循环模式
- [x] 支持“下一曲、下一曲”
- [x] 支持“暂停、播放”

**细节功能：**

- [x] 鼠标悬浮在按钮上时有提示信息
- [x] 任务栏右击进行任务选择
- [x] 主页面通过”about“来展示项目基本信息



### **2 类结构设计**

 **项目中用到的类如下：**

+ Music 类

+ MusicList 类

+ MusicListWidget 类

+ MusicListDialog 类

+ LyricWidget 类

+ MainWidget 类

<img src="C:\Users\张思源\Desktop\res_readme\类继承关系(1).png" style="zoom: 67%;" /> 

**解释：灰色边框的类是Qt提供的可继承的类，紫色边框的为本项目从原有类中派生出来的类，详细的接口、成员与功能在2.2阐述。**



#### 2.2 各个类详细展示

##### **2.2.1 Music 类（歌曲类）**

> 用来储存歌曲的信息，包含数据库的存取和歌曲解析两大功能

<img src="C:\Users\张思源\Desktop\res_readme\Music类 (1).png" style="zoom: 35%;" /> <img src="C:\Users\张思源\Desktop\res_readme\code_MusicClass.jpg" style="zoom: 35%;" />





##### **2.2.2 MusicList 类（歌单类）**

> 歌曲列表（即歌单），是用容器vector将music类的对象存储起来，由此可以进行一些具体的、针对多首歌曲的操作

<img src="C:\Users\张思源\Desktop\res_readme\MusicList类.png" alt="MusicList类" style="zoom: 33%;" />  <img src="C:\Users\张思源\Desktop\res_readme\code_MusicListClass.jpg" style="zoom: 33%;" />





##### **2.2.3 MusicListWidget 类（歌单窗口）**

> 用来展示歌单（其实还包括”播放列表“和”本地音乐“），主要是将歌单能实现的功能与窗口上的按钮建立信号槽

<img src="C:\Users\张思源\Desktop\res_readme\MusicListWidget类.png" alt="MusicListWidget类" style="zoom: 33%;" /> <img src="C:\Users\张思源\Desktop\res_readme\code_MusicListWidgetClass.jpg" style="zoom: 33%;" />





##### **2.2.4 MusicListDialog 类（”添加至歌单“时弹出的对话框）**

> 歌单的创立需要用户自行选择歌曲加入歌单，此时将弹出一个窗口，供用户从”本地音乐“中选取一个或多个歌曲进入对应的歌单

<img src="C:\Users\张思源\Desktop\res_readme\MusicListDialog类.png" alt="MusicListDialog类" style="zoom: 33%;" />   <img src="C:\Users\张思源\Desktop\res_readme\code_MusicListWidgetClass.jpg" style="zoom: 33%;" />





##### **2.2.5 LyricWidget  类（歌词显示的窗口）**

> 用来专门显示歌词的窗口，嵌入至主页面中，点击”下一曲“旁边标注有”词“的按钮即可召唤此窗口，建立在”单条歌词（LyricLine类）“的基础上

<img src="C:\Users\张思源\Desktop\res_readme\LyricWidget类.png" alt="LyricWidget类" style="zoom: 33%;" /> <img src="C:\Users\张思源\Desktop\res_readme\code_LyricWidgetClass.jpg" style="zoom: 33%;" />





##### **2.2.6 MainWidget  类（主窗口）**

> 负责整个播放器各模块的协调与关联，以及承接主页面上各种按钮对应的信号槽，以此实现对应的功能







### 3 界面设计

#### 3.1 主页面

<img src="C:\Users\张思源\AppData\Roaming\Typora\typora-user-images\image-20201213172007835.png" alt="image-20201213172007835" style="zoom:50%;" /> 



#### 3.2 歌词界面







#### 3.3 ”添加音乐至歌单“界面

<img src="C:\Users\张思源\AppData\Roaming\Typora\typora-user-images\image-20201213175452264.png" alt="image-20201213175452264" style="zoom:50%;" /> 



### **4 功能实现简述**



### **5 亮点和小结**



#### 5.1 代码亮点简述

**以下简述一下本项目的一些亮点（仅代表小组两人观点）：**

1. ……
2. ……
3. ……
4. 




#### 5.2 项目小结/心得

​	