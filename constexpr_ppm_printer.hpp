#pragma once

// 画像の幅
#ifndef CONSTEXPR_PPM_PRINTER_WIDTH
# error CONSTEXPR_PPM_PRINTER_WIDTH must be defined
#endif

// 画像の高さ
#ifndef CONSTEXPR_PPM_PRINTER_HEIGHT
# error CONSTEXPR_PPM_PRINTER_HEIGHT must be defined
#endif

// 画素値の最大値
#ifndef CONSTEXPR_PPM_PRINTER_MAXVAL
# define CONSTEXPR_PPM_PRINTER_MAXVAL  255
#endif

// トークンの文字列化
#define CONSTEXPR_PPM_PRINTER_TOSTR2(...)  #__VA_ARGS__
#define CONSTEXPR_PPM_PRINTER_TOSTR(...)  CONSTEXPR_PPM_PRINTER_TOSTR2(__VA_ARGS__)

// アセンブル時出力
#define CONSTEXPR_PPM_PRINTER_PRINT(str)  asm volatile (".print \"" str "\"")

#include <array>
#include <ranges>
#include <utility>
#include <concepts>
#include <cstdint>
#include <cstddef>

namespace constexpr_ppm_printer {
    namespace detail {
        template <std::uint8_t Value, std::size_t, int, std::uintmax_t>
        void print_value() {
            if constexpr (Value == 0) CONSTEXPR_PPM_PRINTER_PRINT("0");
            else if constexpr (Value == 1) CONSTEXPR_PPM_PRINTER_PRINT("1");
            else if constexpr (Value == 2) CONSTEXPR_PPM_PRINTER_PRINT("2");
            else if constexpr (Value == 3) CONSTEXPR_PPM_PRINTER_PRINT("3");
            else if constexpr (Value == 4) CONSTEXPR_PPM_PRINTER_PRINT("4");
            else if constexpr (Value == 5) CONSTEXPR_PPM_PRINTER_PRINT("5");
            else if constexpr (Value == 6) CONSTEXPR_PPM_PRINTER_PRINT("6");
            else if constexpr (Value == 7) CONSTEXPR_PPM_PRINTER_PRINT("7");
            else if constexpr (Value == 8) CONSTEXPR_PPM_PRINTER_PRINT("8");
            else if constexpr (Value == 9) CONSTEXPR_PPM_PRINTER_PRINT("9");
            else if constexpr (Value == 10) CONSTEXPR_PPM_PRINTER_PRINT("10");
            else if constexpr (Value == 11) CONSTEXPR_PPM_PRINTER_PRINT("11");
            else if constexpr (Value == 12) CONSTEXPR_PPM_PRINTER_PRINT("12");
            else if constexpr (Value == 13) CONSTEXPR_PPM_PRINTER_PRINT("13");
            else if constexpr (Value == 14) CONSTEXPR_PPM_PRINTER_PRINT("14");
            else if constexpr (Value == 15) CONSTEXPR_PPM_PRINTER_PRINT("15");
            else if constexpr (Value == 16) CONSTEXPR_PPM_PRINTER_PRINT("16");
            else if constexpr (Value == 17) CONSTEXPR_PPM_PRINTER_PRINT("17");
            else if constexpr (Value == 18) CONSTEXPR_PPM_PRINTER_PRINT("18");
            else if constexpr (Value == 19) CONSTEXPR_PPM_PRINTER_PRINT("19");
            else if constexpr (Value == 20) CONSTEXPR_PPM_PRINTER_PRINT("20");
            else if constexpr (Value == 21) CONSTEXPR_PPM_PRINTER_PRINT("21");
            else if constexpr (Value == 22) CONSTEXPR_PPM_PRINTER_PRINT("22");
            else if constexpr (Value == 23) CONSTEXPR_PPM_PRINTER_PRINT("23");
            else if constexpr (Value == 24) CONSTEXPR_PPM_PRINTER_PRINT("24");
            else if constexpr (Value == 25) CONSTEXPR_PPM_PRINTER_PRINT("25");
            else if constexpr (Value == 26) CONSTEXPR_PPM_PRINTER_PRINT("26");
            else if constexpr (Value == 27) CONSTEXPR_PPM_PRINTER_PRINT("27");
            else if constexpr (Value == 28) CONSTEXPR_PPM_PRINTER_PRINT("28");
            else if constexpr (Value == 29) CONSTEXPR_PPM_PRINTER_PRINT("29");
            else if constexpr (Value == 30) CONSTEXPR_PPM_PRINTER_PRINT("30");
            else if constexpr (Value == 31) CONSTEXPR_PPM_PRINTER_PRINT("31");
            else if constexpr (Value == 32) CONSTEXPR_PPM_PRINTER_PRINT("32");
            else if constexpr (Value == 33) CONSTEXPR_PPM_PRINTER_PRINT("33");
            else if constexpr (Value == 34) CONSTEXPR_PPM_PRINTER_PRINT("34");
            else if constexpr (Value == 35) CONSTEXPR_PPM_PRINTER_PRINT("35");
            else if constexpr (Value == 36) CONSTEXPR_PPM_PRINTER_PRINT("36");
            else if constexpr (Value == 37) CONSTEXPR_PPM_PRINTER_PRINT("37");
            else if constexpr (Value == 38) CONSTEXPR_PPM_PRINTER_PRINT("38");
            else if constexpr (Value == 39) CONSTEXPR_PPM_PRINTER_PRINT("39");
            else if constexpr (Value == 40) CONSTEXPR_PPM_PRINTER_PRINT("40");
            else if constexpr (Value == 41) CONSTEXPR_PPM_PRINTER_PRINT("41");
            else if constexpr (Value == 42) CONSTEXPR_PPM_PRINTER_PRINT("42");
            else if constexpr (Value == 43) CONSTEXPR_PPM_PRINTER_PRINT("43");
            else if constexpr (Value == 44) CONSTEXPR_PPM_PRINTER_PRINT("44");
            else if constexpr (Value == 45) CONSTEXPR_PPM_PRINTER_PRINT("45");
            else if constexpr (Value == 46) CONSTEXPR_PPM_PRINTER_PRINT("46");
            else if constexpr (Value == 47) CONSTEXPR_PPM_PRINTER_PRINT("47");
            else if constexpr (Value == 48) CONSTEXPR_PPM_PRINTER_PRINT("48");
            else if constexpr (Value == 49) CONSTEXPR_PPM_PRINTER_PRINT("49");
            else if constexpr (Value == 50) CONSTEXPR_PPM_PRINTER_PRINT("50");
            else if constexpr (Value == 51) CONSTEXPR_PPM_PRINTER_PRINT("51");
            else if constexpr (Value == 52) CONSTEXPR_PPM_PRINTER_PRINT("52");
            else if constexpr (Value == 53) CONSTEXPR_PPM_PRINTER_PRINT("53");
            else if constexpr (Value == 54) CONSTEXPR_PPM_PRINTER_PRINT("54");
            else if constexpr (Value == 55) CONSTEXPR_PPM_PRINTER_PRINT("55");
            else if constexpr (Value == 56) CONSTEXPR_PPM_PRINTER_PRINT("56");
            else if constexpr (Value == 57) CONSTEXPR_PPM_PRINTER_PRINT("57");
            else if constexpr (Value == 58) CONSTEXPR_PPM_PRINTER_PRINT("58");
            else if constexpr (Value == 59) CONSTEXPR_PPM_PRINTER_PRINT("59");
            else if constexpr (Value == 60) CONSTEXPR_PPM_PRINTER_PRINT("60");
            else if constexpr (Value == 61) CONSTEXPR_PPM_PRINTER_PRINT("61");
            else if constexpr (Value == 62) CONSTEXPR_PPM_PRINTER_PRINT("62");
            else if constexpr (Value == 63) CONSTEXPR_PPM_PRINTER_PRINT("63");
            else if constexpr (Value == 64) CONSTEXPR_PPM_PRINTER_PRINT("64");
            else if constexpr (Value == 65) CONSTEXPR_PPM_PRINTER_PRINT("65");
            else if constexpr (Value == 66) CONSTEXPR_PPM_PRINTER_PRINT("66");
            else if constexpr (Value == 67) CONSTEXPR_PPM_PRINTER_PRINT("67");
            else if constexpr (Value == 68) CONSTEXPR_PPM_PRINTER_PRINT("68");
            else if constexpr (Value == 69) CONSTEXPR_PPM_PRINTER_PRINT("69");
            else if constexpr (Value == 70) CONSTEXPR_PPM_PRINTER_PRINT("70");
            else if constexpr (Value == 71) CONSTEXPR_PPM_PRINTER_PRINT("71");
            else if constexpr (Value == 72) CONSTEXPR_PPM_PRINTER_PRINT("72");
            else if constexpr (Value == 73) CONSTEXPR_PPM_PRINTER_PRINT("73");
            else if constexpr (Value == 74) CONSTEXPR_PPM_PRINTER_PRINT("74");
            else if constexpr (Value == 75) CONSTEXPR_PPM_PRINTER_PRINT("75");
            else if constexpr (Value == 76) CONSTEXPR_PPM_PRINTER_PRINT("76");
            else if constexpr (Value == 77) CONSTEXPR_PPM_PRINTER_PRINT("77");
            else if constexpr (Value == 78) CONSTEXPR_PPM_PRINTER_PRINT("78");
            else if constexpr (Value == 79) CONSTEXPR_PPM_PRINTER_PRINT("79");
            else if constexpr (Value == 80) CONSTEXPR_PPM_PRINTER_PRINT("80");
            else if constexpr (Value == 81) CONSTEXPR_PPM_PRINTER_PRINT("81");
            else if constexpr (Value == 82) CONSTEXPR_PPM_PRINTER_PRINT("82");
            else if constexpr (Value == 83) CONSTEXPR_PPM_PRINTER_PRINT("83");
            else if constexpr (Value == 84) CONSTEXPR_PPM_PRINTER_PRINT("84");
            else if constexpr (Value == 85) CONSTEXPR_PPM_PRINTER_PRINT("85");
            else if constexpr (Value == 86) CONSTEXPR_PPM_PRINTER_PRINT("86");
            else if constexpr (Value == 87) CONSTEXPR_PPM_PRINTER_PRINT("87");
            else if constexpr (Value == 88) CONSTEXPR_PPM_PRINTER_PRINT("88");
            else if constexpr (Value == 89) CONSTEXPR_PPM_PRINTER_PRINT("89");
            else if constexpr (Value == 90) CONSTEXPR_PPM_PRINTER_PRINT("90");
            else if constexpr (Value == 91) CONSTEXPR_PPM_PRINTER_PRINT("91");
            else if constexpr (Value == 92) CONSTEXPR_PPM_PRINTER_PRINT("92");
            else if constexpr (Value == 93) CONSTEXPR_PPM_PRINTER_PRINT("93");
            else if constexpr (Value == 94) CONSTEXPR_PPM_PRINTER_PRINT("94");
            else if constexpr (Value == 95) CONSTEXPR_PPM_PRINTER_PRINT("95");
            else if constexpr (Value == 96) CONSTEXPR_PPM_PRINTER_PRINT("96");
            else if constexpr (Value == 97) CONSTEXPR_PPM_PRINTER_PRINT("97");
            else if constexpr (Value == 98) CONSTEXPR_PPM_PRINTER_PRINT("98");
            else if constexpr (Value == 99) CONSTEXPR_PPM_PRINTER_PRINT("99");
            else if constexpr (Value == 100) CONSTEXPR_PPM_PRINTER_PRINT("100");
            else if constexpr (Value == 101) CONSTEXPR_PPM_PRINTER_PRINT("101");
            else if constexpr (Value == 102) CONSTEXPR_PPM_PRINTER_PRINT("102");
            else if constexpr (Value == 103) CONSTEXPR_PPM_PRINTER_PRINT("103");
            else if constexpr (Value == 104) CONSTEXPR_PPM_PRINTER_PRINT("104");
            else if constexpr (Value == 105) CONSTEXPR_PPM_PRINTER_PRINT("105");
            else if constexpr (Value == 106) CONSTEXPR_PPM_PRINTER_PRINT("106");
            else if constexpr (Value == 107) CONSTEXPR_PPM_PRINTER_PRINT("107");
            else if constexpr (Value == 108) CONSTEXPR_PPM_PRINTER_PRINT("108");
            else if constexpr (Value == 109) CONSTEXPR_PPM_PRINTER_PRINT("109");
            else if constexpr (Value == 110) CONSTEXPR_PPM_PRINTER_PRINT("110");
            else if constexpr (Value == 111) CONSTEXPR_PPM_PRINTER_PRINT("111");
            else if constexpr (Value == 112) CONSTEXPR_PPM_PRINTER_PRINT("112");
            else if constexpr (Value == 113) CONSTEXPR_PPM_PRINTER_PRINT("113");
            else if constexpr (Value == 114) CONSTEXPR_PPM_PRINTER_PRINT("114");
            else if constexpr (Value == 115) CONSTEXPR_PPM_PRINTER_PRINT("115");
            else if constexpr (Value == 116) CONSTEXPR_PPM_PRINTER_PRINT("116");
            else if constexpr (Value == 117) CONSTEXPR_PPM_PRINTER_PRINT("117");
            else if constexpr (Value == 118) CONSTEXPR_PPM_PRINTER_PRINT("118");
            else if constexpr (Value == 119) CONSTEXPR_PPM_PRINTER_PRINT("119");
            else if constexpr (Value == 120) CONSTEXPR_PPM_PRINTER_PRINT("120");
            else if constexpr (Value == 121) CONSTEXPR_PPM_PRINTER_PRINT("121");
            else if constexpr (Value == 122) CONSTEXPR_PPM_PRINTER_PRINT("122");
            else if constexpr (Value == 123) CONSTEXPR_PPM_PRINTER_PRINT("123");
            else if constexpr (Value == 124) CONSTEXPR_PPM_PRINTER_PRINT("124");
            else if constexpr (Value == 125) CONSTEXPR_PPM_PRINTER_PRINT("125");
            else if constexpr (Value == 126) CONSTEXPR_PPM_PRINTER_PRINT("126");
            else if constexpr (Value == 127) CONSTEXPR_PPM_PRINTER_PRINT("127");
            else if constexpr (Value == 128) CONSTEXPR_PPM_PRINTER_PRINT("128");
            else if constexpr (Value == 129) CONSTEXPR_PPM_PRINTER_PRINT("129");
            else if constexpr (Value == 130) CONSTEXPR_PPM_PRINTER_PRINT("130");
            else if constexpr (Value == 131) CONSTEXPR_PPM_PRINTER_PRINT("131");
            else if constexpr (Value == 132) CONSTEXPR_PPM_PRINTER_PRINT("132");
            else if constexpr (Value == 133) CONSTEXPR_PPM_PRINTER_PRINT("133");
            else if constexpr (Value == 134) CONSTEXPR_PPM_PRINTER_PRINT("134");
            else if constexpr (Value == 135) CONSTEXPR_PPM_PRINTER_PRINT("135");
            else if constexpr (Value == 136) CONSTEXPR_PPM_PRINTER_PRINT("136");
            else if constexpr (Value == 137) CONSTEXPR_PPM_PRINTER_PRINT("137");
            else if constexpr (Value == 138) CONSTEXPR_PPM_PRINTER_PRINT("138");
            else if constexpr (Value == 139) CONSTEXPR_PPM_PRINTER_PRINT("139");
            else if constexpr (Value == 140) CONSTEXPR_PPM_PRINTER_PRINT("140");
            else if constexpr (Value == 141) CONSTEXPR_PPM_PRINTER_PRINT("141");
            else if constexpr (Value == 142) CONSTEXPR_PPM_PRINTER_PRINT("142");
            else if constexpr (Value == 143) CONSTEXPR_PPM_PRINTER_PRINT("143");
            else if constexpr (Value == 144) CONSTEXPR_PPM_PRINTER_PRINT("144");
            else if constexpr (Value == 145) CONSTEXPR_PPM_PRINTER_PRINT("145");
            else if constexpr (Value == 146) CONSTEXPR_PPM_PRINTER_PRINT("146");
            else if constexpr (Value == 147) CONSTEXPR_PPM_PRINTER_PRINT("147");
            else if constexpr (Value == 148) CONSTEXPR_PPM_PRINTER_PRINT("148");
            else if constexpr (Value == 149) CONSTEXPR_PPM_PRINTER_PRINT("149");
            else if constexpr (Value == 150) CONSTEXPR_PPM_PRINTER_PRINT("150");
            else if constexpr (Value == 151) CONSTEXPR_PPM_PRINTER_PRINT("151");
            else if constexpr (Value == 152) CONSTEXPR_PPM_PRINTER_PRINT("152");
            else if constexpr (Value == 153) CONSTEXPR_PPM_PRINTER_PRINT("153");
            else if constexpr (Value == 154) CONSTEXPR_PPM_PRINTER_PRINT("154");
            else if constexpr (Value == 155) CONSTEXPR_PPM_PRINTER_PRINT("155");
            else if constexpr (Value == 156) CONSTEXPR_PPM_PRINTER_PRINT("156");
            else if constexpr (Value == 157) CONSTEXPR_PPM_PRINTER_PRINT("157");
            else if constexpr (Value == 158) CONSTEXPR_PPM_PRINTER_PRINT("158");
            else if constexpr (Value == 159) CONSTEXPR_PPM_PRINTER_PRINT("159");
            else if constexpr (Value == 160) CONSTEXPR_PPM_PRINTER_PRINT("160");
            else if constexpr (Value == 161) CONSTEXPR_PPM_PRINTER_PRINT("161");
            else if constexpr (Value == 162) CONSTEXPR_PPM_PRINTER_PRINT("162");
            else if constexpr (Value == 163) CONSTEXPR_PPM_PRINTER_PRINT("163");
            else if constexpr (Value == 164) CONSTEXPR_PPM_PRINTER_PRINT("164");
            else if constexpr (Value == 165) CONSTEXPR_PPM_PRINTER_PRINT("165");
            else if constexpr (Value == 166) CONSTEXPR_PPM_PRINTER_PRINT("166");
            else if constexpr (Value == 167) CONSTEXPR_PPM_PRINTER_PRINT("167");
            else if constexpr (Value == 168) CONSTEXPR_PPM_PRINTER_PRINT("168");
            else if constexpr (Value == 169) CONSTEXPR_PPM_PRINTER_PRINT("169");
            else if constexpr (Value == 170) CONSTEXPR_PPM_PRINTER_PRINT("170");
            else if constexpr (Value == 171) CONSTEXPR_PPM_PRINTER_PRINT("171");
            else if constexpr (Value == 172) CONSTEXPR_PPM_PRINTER_PRINT("172");
            else if constexpr (Value == 173) CONSTEXPR_PPM_PRINTER_PRINT("173");
            else if constexpr (Value == 174) CONSTEXPR_PPM_PRINTER_PRINT("174");
            else if constexpr (Value == 175) CONSTEXPR_PPM_PRINTER_PRINT("175");
            else if constexpr (Value == 176) CONSTEXPR_PPM_PRINTER_PRINT("176");
            else if constexpr (Value == 177) CONSTEXPR_PPM_PRINTER_PRINT("177");
            else if constexpr (Value == 178) CONSTEXPR_PPM_PRINTER_PRINT("178");
            else if constexpr (Value == 179) CONSTEXPR_PPM_PRINTER_PRINT("179");
            else if constexpr (Value == 180) CONSTEXPR_PPM_PRINTER_PRINT("180");
            else if constexpr (Value == 181) CONSTEXPR_PPM_PRINTER_PRINT("181");
            else if constexpr (Value == 182) CONSTEXPR_PPM_PRINTER_PRINT("182");
            else if constexpr (Value == 183) CONSTEXPR_PPM_PRINTER_PRINT("183");
            else if constexpr (Value == 184) CONSTEXPR_PPM_PRINTER_PRINT("184");
            else if constexpr (Value == 185) CONSTEXPR_PPM_PRINTER_PRINT("185");
            else if constexpr (Value == 186) CONSTEXPR_PPM_PRINTER_PRINT("186");
            else if constexpr (Value == 187) CONSTEXPR_PPM_PRINTER_PRINT("187");
            else if constexpr (Value == 188) CONSTEXPR_PPM_PRINTER_PRINT("188");
            else if constexpr (Value == 189) CONSTEXPR_PPM_PRINTER_PRINT("189");
            else if constexpr (Value == 190) CONSTEXPR_PPM_PRINTER_PRINT("190");
            else if constexpr (Value == 191) CONSTEXPR_PPM_PRINTER_PRINT("191");
            else if constexpr (Value == 192) CONSTEXPR_PPM_PRINTER_PRINT("192");
            else if constexpr (Value == 193) CONSTEXPR_PPM_PRINTER_PRINT("193");
            else if constexpr (Value == 194) CONSTEXPR_PPM_PRINTER_PRINT("194");
            else if constexpr (Value == 195) CONSTEXPR_PPM_PRINTER_PRINT("195");
            else if constexpr (Value == 196) CONSTEXPR_PPM_PRINTER_PRINT("196");
            else if constexpr (Value == 197) CONSTEXPR_PPM_PRINTER_PRINT("197");
            else if constexpr (Value == 198) CONSTEXPR_PPM_PRINTER_PRINT("198");
            else if constexpr (Value == 199) CONSTEXPR_PPM_PRINTER_PRINT("199");
            else if constexpr (Value == 200) CONSTEXPR_PPM_PRINTER_PRINT("200");
            else if constexpr (Value == 201) CONSTEXPR_PPM_PRINTER_PRINT("201");
            else if constexpr (Value == 202) CONSTEXPR_PPM_PRINTER_PRINT("202");
            else if constexpr (Value == 203) CONSTEXPR_PPM_PRINTER_PRINT("203");
            else if constexpr (Value == 204) CONSTEXPR_PPM_PRINTER_PRINT("204");
            else if constexpr (Value == 205) CONSTEXPR_PPM_PRINTER_PRINT("205");
            else if constexpr (Value == 206) CONSTEXPR_PPM_PRINTER_PRINT("206");
            else if constexpr (Value == 207) CONSTEXPR_PPM_PRINTER_PRINT("207");
            else if constexpr (Value == 208) CONSTEXPR_PPM_PRINTER_PRINT("208");
            else if constexpr (Value == 209) CONSTEXPR_PPM_PRINTER_PRINT("209");
            else if constexpr (Value == 210) CONSTEXPR_PPM_PRINTER_PRINT("210");
            else if constexpr (Value == 211) CONSTEXPR_PPM_PRINTER_PRINT("211");
            else if constexpr (Value == 212) CONSTEXPR_PPM_PRINTER_PRINT("212");
            else if constexpr (Value == 213) CONSTEXPR_PPM_PRINTER_PRINT("213");
            else if constexpr (Value == 214) CONSTEXPR_PPM_PRINTER_PRINT("214");
            else if constexpr (Value == 215) CONSTEXPR_PPM_PRINTER_PRINT("215");
            else if constexpr (Value == 216) CONSTEXPR_PPM_PRINTER_PRINT("216");
            else if constexpr (Value == 217) CONSTEXPR_PPM_PRINTER_PRINT("217");
            else if constexpr (Value == 218) CONSTEXPR_PPM_PRINTER_PRINT("218");
            else if constexpr (Value == 219) CONSTEXPR_PPM_PRINTER_PRINT("219");
            else if constexpr (Value == 220) CONSTEXPR_PPM_PRINTER_PRINT("220");
            else if constexpr (Value == 221) CONSTEXPR_PPM_PRINTER_PRINT("221");
            else if constexpr (Value == 222) CONSTEXPR_PPM_PRINTER_PRINT("222");
            else if constexpr (Value == 223) CONSTEXPR_PPM_PRINTER_PRINT("223");
            else if constexpr (Value == 224) CONSTEXPR_PPM_PRINTER_PRINT("224");
            else if constexpr (Value == 225) CONSTEXPR_PPM_PRINTER_PRINT("225");
            else if constexpr (Value == 226) CONSTEXPR_PPM_PRINTER_PRINT("226");
            else if constexpr (Value == 227) CONSTEXPR_PPM_PRINTER_PRINT("227");
            else if constexpr (Value == 228) CONSTEXPR_PPM_PRINTER_PRINT("228");
            else if constexpr (Value == 229) CONSTEXPR_PPM_PRINTER_PRINT("229");
            else if constexpr (Value == 230) CONSTEXPR_PPM_PRINTER_PRINT("230");
            else if constexpr (Value == 231) CONSTEXPR_PPM_PRINTER_PRINT("231");
            else if constexpr (Value == 232) CONSTEXPR_PPM_PRINTER_PRINT("232");
            else if constexpr (Value == 233) CONSTEXPR_PPM_PRINTER_PRINT("233");
            else if constexpr (Value == 234) CONSTEXPR_PPM_PRINTER_PRINT("234");
            else if constexpr (Value == 235) CONSTEXPR_PPM_PRINTER_PRINT("235");
            else if constexpr (Value == 236) CONSTEXPR_PPM_PRINTER_PRINT("236");
            else if constexpr (Value == 237) CONSTEXPR_PPM_PRINTER_PRINT("237");
            else if constexpr (Value == 238) CONSTEXPR_PPM_PRINTER_PRINT("238");
            else if constexpr (Value == 239) CONSTEXPR_PPM_PRINTER_PRINT("239");
            else if constexpr (Value == 240) CONSTEXPR_PPM_PRINTER_PRINT("240");
            else if constexpr (Value == 241) CONSTEXPR_PPM_PRINTER_PRINT("241");
            else if constexpr (Value == 242) CONSTEXPR_PPM_PRINTER_PRINT("242");
            else if constexpr (Value == 243) CONSTEXPR_PPM_PRINTER_PRINT("243");
            else if constexpr (Value == 244) CONSTEXPR_PPM_PRINTER_PRINT("244");
            else if constexpr (Value == 245) CONSTEXPR_PPM_PRINTER_PRINT("245");
            else if constexpr (Value == 246) CONSTEXPR_PPM_PRINTER_PRINT("246");
            else if constexpr (Value == 247) CONSTEXPR_PPM_PRINTER_PRINT("247");
            else if constexpr (Value == 248) CONSTEXPR_PPM_PRINTER_PRINT("248");
            else if constexpr (Value == 249) CONSTEXPR_PPM_PRINTER_PRINT("249");
            else if constexpr (Value == 250) CONSTEXPR_PPM_PRINTER_PRINT("250");
            else if constexpr (Value == 251) CONSTEXPR_PPM_PRINTER_PRINT("251");
            else if constexpr (Value == 252) CONSTEXPR_PPM_PRINTER_PRINT("252");
            else if constexpr (Value == 253) CONSTEXPR_PPM_PRINTER_PRINT("253");
            else if constexpr (Value == 254) CONSTEXPR_PPM_PRINTER_PRINT("254");
            else if constexpr (Value == 255) CONSTEXPR_PPM_PRINTER_PRINT("255");
        }

        template <class Pixel>
            requires requires (const Pixel& pixel) {
                { pixel.r } -> std::convertible_to<std::uint8_t>;
                { pixel.g } -> std::convertible_to<std::uint8_t>;
                { pixel.b } -> std::convertible_to<std::uint8_t>;
            }
        [[nodiscard]]
        constexpr std::array<std::uint8_t, 3> get_rgb(const Pixel& pixel) {
            return std::array<std::uint8_t, 3>{ pixel.r, pixel.g, pixel.b };
        }
        
        using std::get;

        template <class Pixel>
            requires requires (const Pixel& pixel) {
                { get<0>(pixel) } -> std::convertible_to<std::uint8_t>;
                { get<1>(pixel) } -> std::convertible_to<std::uint8_t>;
                { get<2>(pixel) } -> std::convertible_to<std::uint8_t>;
            }
        [[nodiscard]]
        constexpr std::array<std::uint8_t, 3> get_rgb(const Pixel& pixel) {
            return std::array<std::uint8_t, 3>{ get<0>(pixel), get<1>(pixel), get<2>(pixel) };
        }
    }

    /// @brief Image に指定された画像をアセンブル時に出力します。
    /// @tparam Image `array<uint8_t, 3>` または `uint8_t` のメンバ `r`, `g`, `b` を持つクラスを要素とする `array` オブジェクト
    /// @tparam Counter 別々にインスタンス化させるためのパラメータ
    template <auto Image, std::uintmax_t Counter = 0>
    void print_ppm() noexcept {
        constexpr auto size = std::ranges::size(Image);
        static_assert(size == (CONSTEXPR_PPM_PRINTER_WIDTH) * (CONSTEXPR_PPM_PRINTER_HEIGHT));
        []<std::size_t... I>(std::index_sequence<I...>) {
            CONSTEXPR_PPM_PRINTER_PRINT("P3");
            CONSTEXPR_PPM_PRINTER_PRINT(CONSTEXPR_PPM_PRINTER_TOSTR(CONSTEXPR_PPM_PRINTER_WIDTH) " " CONSTEXPR_PPM_PRINTER_TOSTR(CONSTEXPR_PPM_PRINTER_HEIGHT));
            CONSTEXPR_PPM_PRINTER_PRINT(CONSTEXPR_PPM_PRINTER_TOSTR(CONSTEXPR_PPM_PRINTER_MAXVAL));
            ([] {
                constexpr auto rgb = detail::get_rgb(Image[I]);
                detail::print_value<rgb[0], I, 0, Counter>();
                detail::print_value<rgb[1], I, 1, Counter>();
                detail::print_value<rgb[2], I, 2, Counter>();
            }(), ...);
        }(std::make_index_sequence<size>{});
    }
}

#define print_ppm_constexpr(...)  ::constexpr_ppm_printer::print_ppm<(__VA_ARGS__), __COUNTER__>()
