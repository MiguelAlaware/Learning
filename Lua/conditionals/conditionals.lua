-- Conditionals structure
local age = 78
local name = "Logan"

-- Ternary operator
local old = (age > 30) and true or false

-- Whole if, else & elseif structure
if (age >= 18) and (age < 60) and (name ~= "Pelinal") then
	print("You can enter the site!")
elseif name == "Logan" then
	print("Go on kind Sir... do whatever you want!")
elseif age < 0 then
	print("You're not even been born yet!")
else
	print("You cannot enter this site!!")
end

print(old)
