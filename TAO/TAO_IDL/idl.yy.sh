flex -t -P tao_yy fe/idl.ll |\
 sed -e 's/ NULL/ 0/g' \
   -e 's/	/        /g' \
   -e 's/ *$//g' \
   -e 's/YY_BREAK break;/YY_BREAK ACE_NOTREACHED (break;)/g' \
   -e 's/fread\([^\)]*\)/static_cast<int> (&)/g' \
   -e 's@#include <stdio\.h>@#include \"ace/OS_NS_stdio.h\"@' \
   -e 's@#include <unistd\.h>@#include \"ace/os_include/os_ctype.h\"@' \
   -e 's@c = getc@c = ACE_OS::getc@' \
   -e 's@199901L@199901L || defined (__HP_aCC)@' \
   -e '/#include <[seu]/d' > fe/idl.yy.cpp