

## 在Windows下开发
1. 编辑为VS项目:
```
qmake -spec win32-msvc2013 -tp vc
```

2. 打开项目属性，->链接->通用->附加库目录->添加
D:\pylon5\Development\lib\x64


## 在Mac下开发
首先安装MacPort
```
sudo port install opencv
```
配置Qt系统变量![](images/config.png)



