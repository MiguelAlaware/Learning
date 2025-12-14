-- Learning about variables and math library in Lua

-- Treating with formatation and scope
NAME = "Miguel"
_G.SURNAME = "Fialho"
local age = 18
print("I am " .. age .. " years old" .. " and my name is " .. NAME .. " " .. SURNAME)
print(type(age))

-- Exploring a little from math library
local r = 10
local circle_area = (math.pi * (r ^ 2))
print("The area of a circumference with " .. r .. "cm radius is " .. circle_area .. "cm")

-- Randomization based on time
math.randomseed(os.time())
print("The lowest number on this list: [10, 1, 50, 12, 19, 100, 2, 14] is " .. math.min(10, 1, 50, 12, 19, 100, 2, 14))
print(
	"The float 3.145123 floored and ceiled, respectively, is: " .. math.floor(3.145123) .. "and" .. math.ceil(3.145123)
)
print("A randomized number between [0, 30] " .. math.random(0, 30))
print("Time in seconds: " .. os.time())
