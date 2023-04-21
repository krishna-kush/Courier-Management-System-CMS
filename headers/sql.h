#include <mysql/mysql.h>  // contains all the definations of mysql functions and structs...

MYSQL* connect1(MYSQL *conn, Auth auth);
MYSQL* fetch(MYSQL* conn, const char* query, int len);

MYSQL* add_courier(Auth auth, Args args);
MYSQL* add_user(Auth auth, Args args);
MYSQL* add_client(Auth auth, Args args);

MYSQL* update_courier(Auth auth, Args args);
MYSQL* track_cour(Auth auth, Args args);

MYSQL* login(Auth auth, Args args);