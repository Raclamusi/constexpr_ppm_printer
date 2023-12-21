# constexpr_ppm_printer

constexpr_ppm_printer は C++20 でコンパイル時に PPM ファイルを出力するためのライブラリです。

## 使い方

```c++
#define CONSTEXPR_PPM_PRINTER_WIDTH  3
#define CONSTEXPR_PPM_PRINTER_HEIGHT  2
#include "constexpr_ppm_printer.hpp"

int main() {
    // 画素は std::array<uint8_t, 3> または std::uint8_t のメンバ r, g, b を持つクラス
    constexpr std::array<std::array<std::uint8_t, 3>, CONSTEXPR_PPM_PRINTER_WIDTH * CONSTEXPR_PPM_PRINTER_HEIGHT> image{{
        { 255, 0, 0 }, { 0, 255, 0 }, { 0, 0, 255 },
        { 255, 255, 0 }, { 255, 255, 255 }, { 0, 0, 0, },
    }};

    // 出力
    print_ppm_constexpr(image);
}
```

## コンパイル時に画像出力

標準出力に PPM ファイルが出力されるので、リダイレクトで受け取ります。

```console
$ g++ -std=c++20 -O2 sample.cpp > image.ppm
```

## 一旦アセンブリファイルを作って画像出力

アセンブリファイルを生成すると、そのファイルをアセンプルしたときに画像が出力されます。

```console
$ g++ -std=c++20 -O2 -S sample.s sample.cpp
$ g++ sample.s > image.ppm
```
