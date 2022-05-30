信令：
	socket = io.connect(socketUrl,{path:"/soc",transports: ["websocket"]});
	

	socket.on('connect_error', e => {
		console.log('connect_error', e);
	  });
	
	socket.on('joined', (roomid, id) => {
		console.log('receive joined message!', roomid, id);
	});
	
	socket.on('otherjoin', (roomid) => {
		console.log('receive otherjoin message:', roomid);
	});
	
	socket.on('full', (roomid, id) => {
		console.log('receive full message', roomid, id);
	});
	
	socket.on('leaved', (roomid, id) => {
		console.log('receive leaved message', roomid, id);
	});
	
	socket.on('bye', (room, id) => {
		console.log('receive bye message', roomid, id);
	});
	
	socket.on('disconnect', (socket) => {
		console.log('receive disconnect message!', roomid);
	});
	
	socket.on('message', (roomid, data) => {
		console.log('receive message!', roomid, data);	
	});
	
	socket.emit('join', roomid);




自己拷贝下来的源码，下载地址

链接：https://pan.baidu.com/s/1SZKWOw9stY0-KydJ5RPr1Q 
提取码：mb2o

socket.iocpp    github 地址

https://github.com/socketio/socket.io-client-cpp.git



开发注意事项：

- socket.io C++版本必须是2.0 分支。目前信令服务器（socket.i-netty  -1.7.19版本） 和控制端 js都是用的2.0 





目前进展:

-  vstudio 使用cmake  编译后，能正常编译，可以生成lib 包和头文件。但是引用失败



严重性	代码	说明	项目	文件	行	禁止显示状态
错误	LNK1104	无法打开文件“F:\WEBRTC_QT\DemoWebRTC\DesktopCtrlLib\lib.obj”	DesktopCtrlLib	F:\WEBRTC_QT\DemoWebRTC\DesktopCtrlLib\LINK	1	







参考资料：

https://blog.csdn.net/hallo_ween/article/details/108789744   （需要boost 依赖库，但是2.0 最新版本应该已经去除了该依赖，不一定能用 ）



https://andyli.blog.csdn.net/article/details/78321560  （ 这个文章有编译后的文件，百度盘链接更新https://pan.baidu.com/s/1X_ExM4btlGZMVmAAZ-lEpw 提取码:43gd  未使用到他的编译后的包。正在准备做尝试）