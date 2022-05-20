ÐÅÁî£º
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