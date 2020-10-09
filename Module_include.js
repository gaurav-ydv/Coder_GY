var http = require('http');
var dt= require('./Module.js');

http.createServer(function (req, res) {
  res.writeHead(200, {'Content-Type': 'text/html'});
  res.write("The current date and time is:"+ dt.myDateTime());
  res.write(req.url);
  res.end('\nHi Everyone!');


}).listen(8880);