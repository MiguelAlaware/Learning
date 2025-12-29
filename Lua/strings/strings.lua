-- Looking up to string formating

local str = [[ 
Hello World!
My name is Miguel
And... 3 + 4 = 7
]]
local phrase = "Lorem Ipsum"

local count = "Count of chars in:" .. "Hello World," .. " is " .. #"Hello World"

local x = 22
local y = tostring(x)
local begin, ending = string.find(phrase, "Lorem")

-- Escape chars and strings

print(string.rep("-=", 15) .. "-")
print(string.rep(" ", 5) .. "STRING MANIPULATIONS")
print(string.rep("-=", 15) .. "-")
print(type(x), type(y))
print("Hello\nWorld\t!!!!\vVertical Tab!")
print("Thats a slash: \\")

-- Some strings manipulations
print(string.rep("-=", 15) .. "-")
print("Formating the string: " .. phrase)
print(string.upper(phrase))
print(string.lower(phrase))
print(string.sub(phrase, 1, 4))
print(string.find(phrase, "Ips"))
print(string.byte(string.sub(phrase, 1)))
print(string.len(phrase))
print("Begin: " .. begin .. "\nEnding: " .. ending)
print(string.gsub(phrase, " ", "_"))
print(string.rep("-=", 15) .. "-")

-- Formating numbers
print("Formanting numbers:\n" .. string.format("pi: %.10f\nMy age: %i", math.pi, 18))
print(string.rep("-=", 15) .. "-")
