add_rules("mode.debug", "mode.release")
set_languages("c++20")

local libs = { "gtest" }

add_includedirs("include")
add_requires(table.unpack(libs))

target("tdd_lib")
  set_kind("static")
  add_files("source/*.cpp")
  add_packages(table.unpack(libs))

target("test")
    set_kind("binary")
    add_files("test/*.cpp")
    add_packages(table.unpack(libs))
    add_deps("tdd_lib")
