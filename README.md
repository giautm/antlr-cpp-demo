## Install dependencies

```sh
curl -O https://www.antlr.org/download/antlr-4.13.1-complete.jar
brew install cmake
```

## How to build?

```sh
cmake -B ./build
make -C ./build
```

## Run the demo program:

```sh
./build/demo
```