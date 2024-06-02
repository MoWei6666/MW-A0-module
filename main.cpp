#include  <备用.cpp>

int main(){
    int count = 0;
    Clear_logs();
    std::cout << "正在清理日志" << std::endl;
    usleep(500);
   if (fileExists(memoryconf_path)){
       Log("配置文件存在");
       //开始进行下一步操作
      }else{
       Log("配置文件不存在 请重新安装模块再试");
   }
   HookLMKD();
   if (fileExists(standby_conf)){
       standby_process();
      }else{
        //无操作
   }

   // 以下判断为乖巧进程
   if (fileExists(Kill_process_conf)){
       while (true) {
           InotifyMain("/dev/cpuset/top-app", IN_MODIFY);
           count++; // 增加计数器
           if (count == 4) {
               Kill_process(); // 当计数器等于3时，执行Kill_process函数
               count = 0; // 重置计数器
                 if (fileExists(standby_conf)){
                    standby_process();
                 } else {
                    //无操作
                 }
           }
       }
    }else{
   sleep(3600 * 24 * 365);//放年假
  }   
}