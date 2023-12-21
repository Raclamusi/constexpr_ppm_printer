#define CONSTEXPR_PPM_PRINTER_WIDTH  64
#define CONSTEXPR_PPM_PRINTER_HEIGHT  48
#include "constexpr_ppm_printer.hpp"

#include <array>
#include <algorithm>
#include <ranges>
#include <concepts>
#include <cstdint>

using color_t = std::array<std::uint8_t, 3>;

struct circle {
    int cx;
    int cy;
    int r;
    color_t color;
};

template <std::ranges::input_range Circles>
    requires std::same_as<std::ranges::range_value_t<Circles>, circle>
[[nodiscard]]
constexpr auto render_image(color_t background, Circles&& circles) {
    constexpr int width = CONSTEXPR_PPM_PRINTER_WIDTH;
    constexpr int height = CONSTEXPR_PPM_PRINTER_HEIGHT;
    std::array<color_t, width * height> image{};
    std::ranges::fill(image, background);
    for (auto&& [cx, cy, r, color] : circles) {
        int top = std::ranges::max(cy - r + 1, 0);
        int bottom = std::ranges::min(cy + r, height);
        int left = std::ranges::max(cx - r + 1, 0);
        int right = std::ranges::min(cx + r, width);
        for (int y = top; y < bottom; ++y) {
            for (int x = left; x < right; ++x) {
                if ((x - cx) * (x - cx) + (y - cy) * (y - cy) < r * r) {
                    image[y * width + x] = color;
                }
            }
        }
    }
    return image;
}

int main() {
    constexpr circle circles[] {
        circle{ -14,  6, 28, { 255, 0, 0 } },
        circle{  48, 16,  8, { 0, 192, 0 } },
        circle{  24, 30, 12, { 0, 0, 255 } },
    };
    constexpr auto image = render_image(color_t{ 204, 230, 255 }, circles);

    print_ppm_constexpr(image);
}
