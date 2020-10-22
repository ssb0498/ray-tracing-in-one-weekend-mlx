<h1 align="center">☀ Ray Tracing in One Weekend</h1>
<h4 align="center">Implement in Minilibx, C library in 42</h4>

<br>

<p align="center"><image src="./sample/ch13.bmp"></p>

Practice version of [miniRT](https://github.com/cos18/miniRT) that implement [Ray Tracing in One Weekend](https://raytracing.github.io/books/RayTracingInOneWeekend.html) by Peter Shirley using Minilibx, simple C library that manage GUI in macOS.

<br>

## 🛠 Development Environment

- macOS 10.14+
- clang 11.0+
- Minilibx 20200219_beta (Already in project src!)
> Minilibx is available on macOS and Linux, but there are only macOS ver. mlx in this project. So this project ONLY runs on macOS 😢

<br>

## 💻 How to Run

```bash
$ make
$ ./weekend 2
```

### Usage

`./weekend (chapter) (--save)`

- chapter : **Required.** Chapter number that execute (2 ~ 13)
- --save : Optional. Save Image in bmp format. When this flag is off, it's running through Minilibx.

> 🎉 --save option work well! Sample bmp files are in [sample folder](./sample).

### Progress

- [x] 2. Output an Image
- [x] 3. The vec3 Class (Same result of  ch2)
- [x] 4. Rays, a Simple Camera, and Background
- [x] 5. Adding a Sphere
- [x] 6. Surface Normals and Multiple Objects
- [x] 7. Antialiasing
- [x] 8. Diffuse Materials
- [x] 9. Metal
- [ ] 10. Dielectrics
- [x] 11. Positionable Camera
- [ ] 12. Defocus Blur
- [x] 13. Where Next?

> 🚨 Last Example (Chapter 13) renders 125 spheres and this example only runs at single thread, so it will take few hours to render.
