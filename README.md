# Navtive module demos for Node.js
Small guide demo for beginners to write node native modules

# How to run
Make sure switch your node version to 0.10.33

``` bash
$ nvm use 0.10.33
```

Generate the project build files, for more command, please refer [node-gyp](https://github.com/nodejs/node-gyp).

``` bash
$ node-gyp configure
```

Build the project

``` bash
$ node-gyp build
```

Run the native moudle by nodejs

``` bash
$ node hello.js
```

# License
MIT
