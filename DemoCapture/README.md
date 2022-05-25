1.VS开发QT 应用程序时出现std::cout<< 无法输出的情况，并且控制台也没有弹出
解决方法： 工程->属性->配置属性->链接器->系统->子系统中将 窗口(/SUBSYSTEM:WINDOW) 改为 控制台(/SUBSYSTEM:CONSOLE)

