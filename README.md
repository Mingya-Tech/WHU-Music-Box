# 制作一个以武大老图书馆为外形的电子音乐盒

> 【关键词】3D打印；Arduino Nano；无源蜂鸣器；纽扣电池；丙烯颜料


## 1. 简介

## 2. 3D打印
### 2.1 关于建模

<div style="text-align:center">
    <img src="查看STL模型文件.png" width="480">
    <div>使用Win10自带的3D查看器浏览STL模型文件</div>
</div>

老图的3D建模工作是土建院的郭泓同学完成的（这里吹一下郭泓学长，这个模型也是他参加我校图书馆办的第一届3D打印设计大赛的一等奖作品），据他说是使用 Autodesk 123D Design 软件设计的，不过这个软件现在 AutoDesk 公司似乎已经不更新了。

我自己比较常用的三维建模软件是 Autodesk Inventor（安利一下冯霞老师的《Inventor产品设计》这门公选课），而作为没有任何基础的同学如果想要入门三维设计，做一些简单的尝试的话，建议试一下 Win10 自带的画图3D，还有就是 AutoDesk 公司的在线建模软件 [TinkerCAD](https://www.tinkercad.com/) ，注册一下就可以使用了（记得注册为教育用户，这样 AutoDesk 公司的几十个软件都可以在三年之内免费使用，这里不详述）。

虽然已经有了基本的模型，但也不是立马就能用来做音乐盒的外壳，而是在制作的过程中经过反复的手动调整、反复沟通（si）和二次设计，最后才确定了现在的组合方式。

### 2.2 打印过程
<div style="text-align:center">
    <img src="0.jpg" width="480">
    <div>打印中</div>
</div>
打印全部的零件差不多花了10余个小时，还是个挺漫长的过程，笔者用的这个打印机精度不算高，出模之后还有一些毛边需要手工用刀片处理下。

<div style="text-align:center">
    <img src="1.jpg" width="640">
    <div>打印出的部件全家福</div>
</div>

<div style="text-align:center">
    <img src="2-1.jpg" width="640">
    <div>简单地预组装一下</div>
</div>



## 3. Arduino部分
下面到了电子元器件的部分
<div style="text-align:center">
    <img src="2-2.jpg" width="640">
    <div></div>
</div>

### 3.1 元器件简介
**Arduino Nano**

Arduino Nano 是一款基于 ATmega328P 的开发板，它和Arduino Uno十分类似，区别是体积更小，没有直流供电口，使用 Mini-B USB 接口与电脑连接。

**无源蜂鸣器**



**纽扣电池**



### 3.2 组合与焊接
<div style="text-align:center">
    <img src="3.jpg" width="640">
    <div>连接蜂鸣器并测试</div>
</div>

<div style="text-align:center">
    <img src="4.jpg" width="640">
    <div>连接纽扣电池盒并测试</div>
</div>

<div style="text-align:center">
    <img src="5.jpg" width="640">
    <div>焊接触点</div>
</div>

<div style="text-align:center">
    <img src="6.jpg" width="640">
    <div>整体组合</div>
</div>

### 3.3 代码部分
> tone() 函数介绍
> 
> 蜂鸣器音调和频率的对应关系

将简谱录入为两个数组

## 4. 上色
使用丙烯颜料给模型上色，丙烯的特点是可以用水做溶剂，干燥之后防水而且耐磨、不易脱落，所以很适合DIY的时候用来给塑料或金属制品上色。

想要调出合适的颜色需要花点耐心，上色的时候也一样，
先用较粗的画笔大致上一遍，待颜料基本干后，再用较细的笔勾描一下细节。


<div style="text-align:center">
    <img src="7.jpg" width="640">
    <div>上色过程</div>
</div>