#include <string_view>
#include <array>

#ifndef CONSTANTS_H
#define CONSTANTS_H

//Namespace for constants.
namespace constants {
    inline constexpr std::array<std::string_view, 13> logo_007 = {
        "         .=*#@@@@%*=             .=*#@@@@%#=      :%%%%%%%%%%%%%%%%%%%%%. @@@@@@@@@@@@@@@@@@@@@@@@@%",
        "       =%@@@@@*-=@@@@=         =%@@@@@*-=@@@@=   :@@@@@@@@@@@@@@@@@@@@@% -@@@@@@@@@@@@@@@@@@@@@@@@#.",
        "     +@@@@@@*    #@@@@+      +@@@@@@*.   #@@@@+ .@@@@#         :@@@@@@@: *##############=........   ",
        "   :%@@@@@@-     %@@@@@.   .%@@@@@@=     %@@@@@.*@@@*         =@@@@@@@::**************:             ",
        "  -@@@@@@@:     :@@@@@@-  -@@@@@@@:     :@@@@@@-            -%@@@@@@#. %@#****%@@*-..               ",
        " :@@@@@@@:      %@@@@@@: :@@@@@@@:      #@@@@@@-          :#@@@@@@%-   -@.   :@@-                   ",
        " @@@@@@@:      +@@@@@@%  @@@@@@@-      =@@@@@@@         .*@@@@@@@+          +@#.                    ",
        "+@@@@@@=      -@@@@@@@- +@@@@@@+      -@@@@@@@-        +@@@@@@@*.=********#%#-                      ",
        "%@@@@@#      =@@@@@@@+  %@@@@@#      -@@@@@@@*       =@@@@@@@*.                                     ",
        "@@@@@@.     +@@@@@@@+   %@@@@@.     +@@@@@@@*      -%@@@@@@%:                                       ",
        "*@@@@+    .#@@@@@@@-    *@@@@*    .#@@@@@@@=      *@@@@@@@+                                         ",
        ".@@@@=   +@@@@@@@*      .%@@@=   +@@@@@@@*.      #@@@@@@@-                                          ",
        " .*@@@*#@@@@@@%=.         *@@@*#@@@@@@%+.       #@@@@@@@-                                           "
    };
}

#endif