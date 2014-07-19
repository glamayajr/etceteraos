-- Displays help on all programs.
require("rom.programs")

io.write("Et Cetera OS dev1\n")
while true do
  input_table = {}
  io.write("> ")
  shell_input = io.read()
  for i in string.gmatch(shell_input, "%S+") do
    input_table[#input_table + 1] = i
  end
  if input_table[1] == "help" then
    help(input_table[2])
  elseif input_table[1] == "cd" then
    cd(input_table[2])
  elseif input_table[1] == "mkdir" then
    mkdir(input_table[2])
  elseif input_table[1] == "rmdir" then
    rmdir(input_table[2])
  elseif shell_input == "dir" then
    dir()
  elseif input_table[1] == "rm" then
    rm(input_table[2])
  elseif shell_input == "programs" then
    programs()
  elseif shell_input == "lua" then
    exit = false
    repeat
      io.write("Lua> ")
      lua_input = io.read()
      if lua_input ~= "exit" then
        os.execute("lua -e "..lua_input)
      else
        exit = true
      end
    until exit == true
  elseif shell_input == "cmd" then
    exit = false
    repeat
      io.write("CMD> ")
      cmd_input = io.read()
      if lua_input ~= "exit" then
        os.execute(cmd_input)
      else
        exit = true
      end
    until exit == true
  elseif shell_input == "exit" then
    return
  else
    print("Invalid input \""..shell_input.."\".")
  end
end