# hit_E_Programs
这里是hit易点俱乐部2016秋学习管理仓库

今后学习任务和项目进度都提交到这个仓库里！  

---

###Mission one：初来乍到  
#####任务描述：  
    欢迎小萌新XX来到哈村！  
    为了方便日后的任务管理（刷怪）与团队协作（打Boss），现在需要你掌握分布式版本控制工具Git（上古神器）的基本使用方法  
#####刷怪秘籍：  
    廖雪峰博客(http://www.liaoxuefeng.com/wiki/0013739516305929606dd18361248578c67b8067c8c017b000)  
    博客内容从如何安装讲到自定义Git（你需要掌握到“使用GitHub”即可）  
#####任务耗时：
    2h  
#####任务目标：
    T1：认识Git  
    T2：安装Git  
    T3：建立一个Git本地仓库，并对一个文档进行增删改，试验Git的功能（可参考博客内操作内容）  
    T4：认识代码托管服务GitHub（https://github.com/），并拥有一个GitHub帐号，尝试查看GitHub Guide  
    T5:如自己特别有想做的项目，请捋清思路，在会上提出！       
#####任务帮助：  
	  Git官网：https://git-scm.com  
	  如果在官网下载速度极慢，这里有Windows 64位版本：（链接：http://pan.baidu.com/s/1dES2XtZ 密码：2kgg）  


###Mission two：会用GitHub  
#####任务描述：  
    学习了Git的一些基础操作后，本地仓库的管理应当是很easy了（妈妈再也不用担心自己的项目版本凌乱了） 
    现在，为了组团刷怪，你需要用到“远程仓库”啦！  
    GitHub就为你提供了一个免费的“远程代码仓库”服务，那么就请学会使用GitHub，并完成以下任务。  
#####刷怪秘籍：  
    GitHub Guides(https://guides.github.com/)  
#####任务耗时：
    母鸡，应该很快  
#####任务目标：
    T1：认识学习GitHub  
    T2：了解并学会clone、remote、push、pull、fork、pull request等操作    
    T3：fork本仓库到自己的帐号下，并将fork的仓库clone到本地  
    T4：在本地仓库新建一个分支（如dev）（不要使用默认的master分支），并使用该分支进行操作  
    T5：在本地仓库的mission_two文件夹内新建一个markdown文件（或txt文件），以自己的GitHub帐号名为名，如 dusz7.md，文件中写上你最喜欢的一句话       
    T6：在本地仓库中提交本次修改  
	T7：在远程仓库中新建同名分支（如dev），并将其和本地新建的分支（如dev）关联  
	T8：将本地仓库的本次commit推送到远程仓库的关联分支（push）  
	T9：向原仓库的master分支发起pull request，等待合并分支  
#####任务截止时间：  
	9月27日（周二）晚23:50


###Mission three：邂逅Linux  
#####任务描述：    
    尽管Linux是一个热门已久的操作系统，但是很多同学对它仍然停留在听说过或是接触过一丢丢的地步。        
    本任务让诸位未来的Hackers探索Linux的魅力。     
#####任务耗时： 
    取决于你对本行业的热爱。     
#####任务目标： 
    T1：阅读文章[完全用Linux工作](http://www.cnblogs.com/skyseraph/archive/2010/10/30/1865280.html)，在这篇十分偏激的鼓吹Linux的文章中思索自己为何不肯放弃Windows。    
    T2：在搜索引擎中搜索Ubuntu,Debian,Fedora,ArchLinux等Linux发行版，了解他们之间的差异（下次培训随机抽取同学说出至少一个发行版的特点）。    
    T3：挑选一个自己喜欢的Linux发行版，在自己的电脑上安装一个该发行版的系统。（建议新手选择Ubuntu14.04 or 16.04）      
#####任务帮助：  
    （对于T3任务的补充说明） 
    安装系统，推荐以下三种方式：    
    1. 不在本机安装，通过购买云服务器，在本机远程控制云服务器进行Linux系统的相关操作。云服务器的价格一般偏高，这里推荐[腾讯云服务器](https://www.qcloud.com/act/campus)，腾讯云服务器对学生有优惠政策，每日发放固定名额，服务器每月1元。其他云服务器也有相关政策，根据自己的经济实力进行选取。   本地与远程服务器连接的软件推荐使用winscp+putty。   
    2. 在本机安装linux+windows双系统，此处不负责教学，请自行在搜索引擎上进行折腾。    
    3. 在本机安装虚拟机程序，如virtualBox，VMware等，在虚拟机中安装Linux系统。    
    对于以上三种方式，建议新手同学采用第二种。第一种虽操作简单但是服务器一般不包含图形界面，对新手不够友好。而第三种性能偏差，不适合程序员真正使用Linux。    
#####任务截止时间：  
	下次培训之前（暂定10月9日（周日））


###Mission four：Shell之旅 
#####任务描述：    
    目前大家对Linux、Vim、Shell有了一个基本的了解，那么现在请进行一些Shell的训练吧。    
#####任务耗时： 
    4h。
#####任务目标： 
    T1：在[Leetcode](https://leetcode.com)上注册一个账号。Leetcode是一个online judge平台。
    T2：工具栏的Problems下选中Shell，浏览192~195共四道关于shell的题。
    T3：在自己的Linux系统上，在任意目录下用vim建立测试样例文件和Shell脚本文件。
    T4：使用vim编辑脚本使其满足题意，在本地测试通过后，将代码复制粘贴到Leetcode上，查看是否通过，不通过则检查自己的代码，重新测试与提交。通过则进行下一题。
    T5：全部完成后，在工程中创建文件夹mission_four/<你的ID>/，在二级目录下创建192.sh 193.sh 194.sh 195.sh并提交commit。
    T6：依照mission_two中学习的，将本地commit push到远程分支，并且选择pull request等待我们merge。
    额外：建议学有余力的同学阅读[命令行的艺术](https://github.com/jlevy/the-art-of-command-line/blob/master/README-zh.md)。
#####任务帮助：  
    1. [鸟叔的Linux私房菜](http://linux.vbird.org/)是一本系统讲述Linux的推荐书籍。其中有关于Vim和Shell的章节可帮助完成该任务。
    2. 学会合理使用搜索引擎去寻找资料与解决问题。
#####任务截止时间：  
	10月12日（星期三）晚23:50