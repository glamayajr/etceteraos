function help(arg)
  if arg == "" then
    io.write("Usage: help program. For a list of commands type \"programs\".\n")
  elseif arg == "lua" then
    io.write("Enters the Lua interpeter, type exit to exit.\n")
  elseif arg == "cmd" then
    io.write("Enters the CMD interpeter, type exit to exit.\n")
  elseif arg == nil then
    print("Usage: help program. For a list of commands type \"programs\".")
  else
    print("Invalid program \""..arg.."\".")
  end
end

function programs()
  print("help\ndir\ncd\nrm\nmkdir\nrmdir")
end

function dir()
  local out = os.execute("dir")
  print(out)
end

function cd(arg)
  if arg == "" then
    print("Usage: cd directory")
  elseif arg == nil then
    print("Usage: cd directory")
  else
    os.execute("cd "..arg)
  end
end

function rm(arg)
  if arg == "" then
    print("Usage: rm file")
  elseif arg == nil then
    print("Usage: rm file")
  else
    os.execute("del "..arg)
  end
end

function mkdir(arg)
  if arg == "" then
    print("Usage: mkdir name")
  elseif arg == nil then
    print("Usage: mkdir name")
  else
    os.execute("mkdir "..arg)
  end
end

function rmdir(arg)
  if arg == "" then
    print("Usage: rmdir directory")
  elseif arg == nil then
    print("Usage: rmdir directory")
  else
    os.execute("rmdir "..arg)
  end
end