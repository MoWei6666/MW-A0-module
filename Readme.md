<h1>🔮 A0后台优化更新文档与配置文档</h1>
<div align="center">
<a href="http://cppmicroservices.org/"><img alt="C++ Language" src="https://img.shields.io/badge/-C++-808080?logo=c%2B%2B&style=flat-square&logoColor=ffffff">
<a href="https://www.python.org/"><img alt="Bash Shell" src="https://img.shields.io/badge/-Bash-ae9a5a?style=flat-square&logo=shell&logoColor=ffffff">
<img alt="Android Support" src="https://img.shields.io/badge/Android%208~14-Support-green">
<img alt="arm64-v8a Support" src="https://img.shields.io/badge/arm64--v8a-Support-green"> </a> <br>
</div>
  
1.模块基于嘟嘟ski的scene附加模块二修改得来 <br>
模块将由魔威共同维护与更新 <br>
由于还是学生可能会鸽 <br>
PS:这个应该可能大概绝对会鸽的吧 <br>
## 2.更新内容: <br>

90 测试版: <br>
1.减少A0-memory内存占用 <br>
2.删除了不必要的类型转换 <br> 
3.简化获取PID的过程 <br>
4.优化休眠进程 <br>
5.删除无用代码 <br>
6.新增兼容模式 <br>
7.修复休眠进程无法使用问题 <br>
8.修改zram代码 <br>
9.添加自定义ZRAM压缩力度 <br>
10.附加XPosed模块 完善对系统框架的Hook 防止掉卡片及系统底层的杀后台功能 <br>
11.调整面板 <br>

89测试版: <br>
1.减少模块性能开销 <br>
2.新增详细日志 <br>
3.完善休眠进程 <br>
4.删除调整min_free_kbytes extra_free_kbytes  watermark_scale_factor功能 <br>
5.减少A0-memory的性能开销 <br>
6.修复面板无法配置ZRAM算法BUG <br>
7.新增Hook LMKD判断 <br>
8.调整配置文件 <br>
9.优化部分使用场景 <br>
10.面板的调整 <br>
11.加快ZRAM的调整速度 <br>


## 关于附加XP模块 <br>
作者:MoWei <br>
附加模块目前已对系统框架和MIUI电量与性能进行Hook 达到防止掉卡片 杀后台等情况 建议搭配magisk模块一起使用 <br>
 
模块原作者: 嘟嘟ski 开心小阳光 <br>

二改magisk模块作者: 魔威 <br>

## 以下为感谢名单 排名不分前后 <br>
| 昵称  | 技术支持 | 
| ----  | ----  | ----  |  
| XShe  | 提供技术支持 | 
| AnMo2077 | 部分shell命令提供;网络更新技术支持 | 
| sy6006  | 反馈bug并提供技术支持 | 
| 曼珠沙华Y  | 反馈细节并提供技术支持 | 
| 泠熙子  | 提供技术支持  | 
| Seraph | 提供技术支持  | 
| 开心小阳光  | 原作者  | 
| 焕晨  | 提供bug并提供技术支持  | 
| 嘟嘟ski  | 原作者  | 
| shadow3aaa  | 提供技术支持  | 
| l奋斗的小青年| 提供技术支持 | 

该文档更新时间:2024.06.09 13：00 <br>
# 🔍 适配的安卓版本
- 目前支持A8-A14
- 完美适配MIUI12-14 Flyme9-10.3 ColorOS7-13 
- 不确定适配:Flyme 10.5-11 ColorOS14等
如有关于此模块问题 请酷安私信或评论 我都会看的 由于私信过多 我一天只能回复那么多 请谅解 <br>
# ✨A0-后台优化开发者文档
  自带配置适用于绝大多数设备，但有些设备不适用默认配置，所以我们开放更多自定义参功能 <br>
## 休眠进程
  使用standby对应用进行限制 达到省电减少CPU占用的功能 <br>
  配置格式如下<br>
  | standby + 需要执行休眠进程的软件包名 | 
  | ----  | ----  | ----  |  
  配置教程可见下图 <br>
## 乖巧进程
  通过向内核发送SIGKILL信号 达到减少内存与CPU占用的功能<br>
  配置格式如下<br>
  | KILL + 需要杀死的进程名 | 
  | ----  | ----  | ----  |  
  配置教程可见下图 <br>
## Hook LMKD
  通过Hook注入LMKD 防止杀后台 <br>
  如果是OPPO 魅族等手机 请开启兼容模式 防止软重启 <br> 
## 详细日志
  提供给第三方开发者的功能 便于更好配置文件 <br> 
## 🌟收藏趋势
  
[![](https://api.star-history.com/svg?repos=MoWei6666/MW-A0-module&type=Date)](https://star-history.com/#MoWei6666/MW-A0-module&Date)

  
**官方群聊:**[QQ组织](https://qm.qq.com/cgi-bin/qm/qr?_wv=1027&k=pMRTaRASiuq1_BFlNzFsdcONyDojDzPF&authKey=gRTAkJocSGyNb6qvWfsuDP6pxPtJV2J%2F%2FVeWyjbhyzNDlX%2B%2F%2Fl%2BV%2F8A20lFE4NdS&noverify=0&group_code=939336948) **爱发电:**[点我前往](https://afdian.net/a/MoWei_2077) **酷安:**[点我前往](http://www.coolapk.com/u/24268987)
