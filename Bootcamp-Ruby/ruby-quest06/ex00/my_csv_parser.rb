def my_csv_parser(param_1, param_2)
    i = 0
    lines = param_1.split("\n")
    arr = []

    while i < lines.length do
        line = lines[i].split(",")
        arr.append(line)
        i += 1
    end
    return arr
end

# Input "a,b,c,e\n1,2,3,4\n"
# Expected Return Value [["a", "b", "c", "e"], ["1", "2", "3", "4"]]