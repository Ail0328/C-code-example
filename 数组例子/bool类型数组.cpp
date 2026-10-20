bool a[5];                 // 局部变量：未初始化，值不确定
bool b[5] = {};            // 全 false（值初始化）
bool c[5] = {true};        // c[0]=true，其余 false
bool d[3] = {true, false, true};//

bool e[5];
std::fill(e, e + 5, false); // 手动初始化