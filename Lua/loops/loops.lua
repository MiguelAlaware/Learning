-- The for loop structure

local start_val, end_val, step_val = 1, 10, 1

local arr = { 2, 3, 56, 12, 63, 102, 902 }

local peeps = 10
local x = 1

for i = start_val, end_val, step_val do
	if i >= 1 then
		print(i)
	end
end

print("Values in array:")
for i = 1, #arr do
	print(arr[i])
end

-- The while loop structure
print("Counting people in a party")
while peeps > 0 do
	peeps = peeps - 1
	print("People left at party: " .. peeps)
end

-- The repeat structure
repeat
	print("Repeating" .. string.rep(".", x))
	x = x + 1
until x > 10
