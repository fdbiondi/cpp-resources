## Build image

```
docker build -t cpp .
```

## Create container

Creates container mounting the source directory into it

```
docker run -it --rm  --name=<container-name> --mount type=bind,source=${PWD},target=/src <image-name> bash
```

Creates container with volume

```
docker run --rm --name <container-name> -v <checked-out-path-on-host>:<path-in-the-container> -it <docker-image-name>
```

## Docker hub

- https://hub.docker.com/_/gcc
## Useful links

- [cpp docs](https://devdocs.io/cpp/)
- [cpp microsoft docs](https://learn.microsoft.com/en-us/cpp/cpp/)
- [CMake docs](https://cmake.org/documentation/)
- [behnamasadi/cpp_tutorials/](https://github.com/behnamasadi/cpp_tutorials/)
- [TechHara/vscode_docker](https://github.com/TechHara/vscode_docker/)
- Dockerrize build example
    - [presentation](https://docs.google.com/presentation/d/1jkp-1AyWI0S3d-L_YTnSCYxNhA_0lzwiAy4rbeNeDuk/edit#slide=id.g113e263f2e0_0_20)
    - [makefile working with docker](https://github.com/f-squirrel/dockerized_cpp)
    - [Dockerized build environments for C/C++ projects](https://ddanilov.me/dockerized-cpp-build)
    - [Example of using the Makefile](https://github.com/f-squirrel/dockerized_cpp_build_example)

