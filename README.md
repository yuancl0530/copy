# copy
**在打ACM题目的时候，每次都要写头文件，很麻烦**
**在Ubuntu环境下，这个小程序可以批量复制你写好的模板**

## 使用方法
>1.写好模板文件MODEL.cpp,更改creat.cpp文件中模板文件的路径(绝对地址) <br>2.编译creat.cpp文件:` g++ creat.cpp -o creat`<br>3.将生成的creat文件拷贝到根目录的bin文件夹中:`sudo cp MODEL.cpp /ect/bin/creat`<br>4.接下来就可以在命令行中任意文件夹下输入`creat num`命令，就会在当前目录下生成num个模板(A.cpp,B.cpp,c.cpp......).
