/**
 * 用来记录已经安装的URL,列出这些URL,并且检查一些程序是否已安装一遍跳过。
 * 这里使用一个简单、扁平化的文件数据库，以及bstrlib.h
*/
#ifdef _db_h
#define _db_h

#define DB_FILE "/usr/local/.devpkg/db"
#define DB_DIR "/usr/local/.devpkg"

int DB_init();
int DB_list();
int DB_update(const char *url);
int DB_find(const char *url);
#endif