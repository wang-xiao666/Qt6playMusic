# Qt6playMusic
Qt6 播放音频
注意Cmakelists.txt中改动
Cmakelists.txt:
加入：find_package(Qt6 COMPONENTS Multimedia REQUIRED)
target_link_libraries(untitled1 PRIVATE Qt6::Multimedia)// untitled1为项目名称


音频为绝对路径，可自行修改
