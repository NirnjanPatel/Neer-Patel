// console.log("Hello NodeJS");
const http = require('http');
const hostname = '127.0.0.1';
const port = 3000;
const server = http.createServer((req, res) => {
    res.statusCode = 200;
    res.setHeader('Content-Type', 'text/plain');
    // res.setHeader('Content-Type', 'text/html');
    // res.end('Hello World');
    res.end(`<html>
        <head>
            <title>Inline and Block elements</title>
                    </head>
                    <body>
                        <strong style="border: 2px solid red;">this is a paragraph</strong>
                        <span style="border: 2px solid red;">this is a span</span>
                    </body>
                </html>`);
});
server.listen(port, hostname, () => {
    console.log(`Server running at http://${hostname}:${port}/`);
});