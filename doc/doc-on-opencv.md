# opencv 学习笔记

* 开发环境
  * opencv3.2.0+vs2017(debug x64)

## 1 示例代码补充说明

### 1.1 Scalar 标量

```c++
  typedf struct Scalar {
    double val[4];
  } Scalar;
```
一个长度为4的数组，最多存储4个值，mat 初始化有个通道值，Scalar 表示每个通道的值。

```c++
  Mat M (4, 4, CV_32FC2, Scalar (1, 3));
  cout << M << endl;
```

CV_32F 表示每个元素的值是32位浮点数，C2表示有两个通道，Scalar (1, 3) 表示通道的值是(1，3)，
```
[1, 3, 1, 3, 1, 3, 1, 3;
 1, 3, 1, 3, 1, 3, 1, 3;
 1, 3, 1, 3, 1, 3, 1, 3;
 1, 3, 1, 3, 1, 3, 1, 3]
```



## 参考资料

1. [ learn opencv3 examples](https://github.com/oreillymedia/Learning-OpenCV-3_examples)
2. [OpenCV3编程入门(毛星云)]()
