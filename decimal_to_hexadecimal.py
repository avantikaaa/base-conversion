hex_value = {0: "0", 1: "1", 2: "2", 3: "3", 4: "4", 5: "5", 6: "6", 7: "7", 8 : "8", 9: "9", 10: "A", 11: "B", 12: "C", 13: "D", 14: "E", 15: "F"}
decimal = int(input())
hex = ""
while(decimal > 15):
    hex_digit = int(decimal/16)
    hex += hex_value[hex_digit]
    decimal %= 16

hex += hex_value[decimal]

print(hex)
