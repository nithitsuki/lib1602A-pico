# lib-ST7066U-rp2040
Library for interfacinig with a ST7066U/ST7065C controller within or outside a 1602(A) display
for the rp2040 chipset (such as the raspberry pi pico) using using  the pico c/c++ sdk

# Supported Features
+ Data Transfer in 8-Bit Mode
+ Support for basic Display features and cursors
+ Use pre-defined CGRAM charecters (see table below)

# Upcoming Features
+ Erorr warnings and edge case handling (please read the docs!)
+ Data Transfer in 4-Bit Mode
+ Writing custom charecters to cgram (maybe!)
+ Checking the "busyflag" for safety (If i'm not busy)

# Feature that mostly likely won't come 
+ reading ram support
+ Changing cursor direction
+ Shifting the entire display
 (they're pretty easy to implement, but i don't need the features, so...)
