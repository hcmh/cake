
typedef int errno_t;
typedef unsigned long long size_t;
typedef unsigned long long rsize_t;
typedef unsigned short wchar_t;


void* memchr(void const* _Buf, int _Val, size_t _MaxCount);
int memcmp(void const* _Buf1, void const* _Buf2, size_t _Size);
void* memcpy(void* _Dst, void const* _Src, size_t _Size);
void* memmove(void* _Dst, void const* _Src, size_t _Size);
void* memset(void* _Dst, int _Val, size_t _Size);
char* strchr(char const* _Str, int _Val);
char* strrchr(char const* _Str, int _Ch);
char* strstr(char const* _Str, char const* _SubStr);
wchar_t* wcschr(wchar_t const* _Str, wchar_t _Ch);
wchar_t* wcsrchr(wchar_t const* _Str, wchar_t _Ch);
wchar_t* wcsstr(wchar_t const* _Str, wchar_t const* _SubStr);
static __inline errno_t memcpy_s(void* const _Destination, rsize_t const _DestinationSize, void const* const _Source, rsize_t const _SourceSize);
static __inline errno_t memmove_s(void* const _Destination, rsize_t const _DestinationSize, void const* const _Source, rsize_t const _SourceSize);
int _memicmp(void const* _Buf1, void const* _Buf2, size_t _Size);
void* memccpy(void* _Dst, void const* _Src, int _Val, size_t _Size);
int memicmp(void const* _Buf1, void const* _Buf2, size_t _Size);
errno_t wcscat_s(wchar_t* _Destination, rsize_t _SizeInWords, wchar_t const* _Source);
errno_t wcscpy_s(wchar_t* _Destination, rsize_t _SizeInWords, wchar_t const* _Source);
errno_t wcsncat_s(wchar_t* _Destination, rsize_t _SizeInWords, wchar_t const* _Source, rsize_t _MaxCount);
errno_t wcsncpy_s(wchar_t* _Destination, rsize_t _SizeInWords, wchar_t const* _Source, rsize_t _MaxCount);
wchar_t* wcstok_s(wchar_t* _String, wchar_t const* _Delimiter, wchar_t** _Context);
wchar_t* _wcsdup(wchar_t const* _String);
wchar_t* wcscat(wchar_t* _Destination, wchar_t const* _Source); int wcscmp(wchar_t const* _String1, wchar_t const* _String2);
wchar_t* wcscpy(wchar_t* _Destination, wchar_t const* _Source); size_t wcscspn(wchar_t const* _String, wchar_t const* _Control);
size_t wcslen(wchar_t const* _String);
size_t wcsnlen(wchar_t const* _Source, size_t _MaxCount);
static __inline size_t wcsnlen_s(wchar_t const* _Source, size_t _MaxCount);
wchar_t* wcsncat(wchar_t* _Destination, wchar_t const* _Source, size_t _Count);
int wcsncmp(wchar_t const* _String1, wchar_t const* _String2, size_t _MaxCount);
wchar_t* wcsncpy(wchar_t* _Destination, wchar_t const* _Source, size_t _Count);
wchar_t* wcspbrk(wchar_t const* _String, wchar_t const* _Control);
size_t wcsspn(wchar_t const* _String, wchar_t const* _Control);
wchar_t* wcstok(wchar_t* _String, wchar_t const* _Delimiter, wchar_t** _Context);
size_t wcsxfrm(wchar_t* _Destination, wchar_t const* _Source, size_t _MaxCount);
int wcscoll(wchar_t const* _String1, wchar_t const* _String2);
wchar_t* wcsdup(wchar_t const* _String);
int wcsicmp(wchar_t const* _String1, wchar_t const* _String2);
int wcsnicmp(wchar_t const* _String1, wchar_t const* _String2, size_t _MaxCount);
wchar_t* wcsnset(wchar_t* _String, wchar_t _Value, size_t _MaxCount);
wchar_t* wcsrev(wchar_t* _String);
wchar_t* wcsset(wchar_t* _String, wchar_t _Value);
wchar_t* wcslwr(wchar_t* _String); wchar_t* wcsupr(wchar_t* _String); 
int wcsicoll(wchar_t const* _String1, wchar_t const* _String2);
char* strtok_s(char* _String, char const* _Delimiter, char** _Context); 
void* _memccpy(void* _Dst, void const* _Src, int _Val, size_t _MaxCount);
char* strcat(char* _Destination, char const* _Source);
int strcmp(char const* _Str1, char const* _Str2);

int strcoll(char const* _String1, char const* _String2);
char* strerror(int _ErrorMessage);

size_t strlen(char const* _Str);

char* strncat(char* _Destination, char const* _Source, size_t _Count);
int strncmp(char const* _Str1, char const* _Str2, size_t _MaxCount);
char* strncpy(char* _Destination, char const* _Source, size_t _Count);
size_t strnlen(char const* _String, size_t _MaxCount);
static __inline size_t strnlen_s(char const* _String, size_t _MaxCount);
char* strpbrk(char const* _Str, char const* _Control);
size_t strspn(char const* _Str, char const* _Control);
char* strtok(char* _String, char const* _Delimiter); 
char* strdup(char const* _String);
int strcmpi(char const* _String1, char const* _String2);
int stricmp(char const* _String1, char const* _String2);
char* strlwr(char* _String);
int strnicmp(char const* _String1, char const* _String2, size_t _MaxCount);
char* strnset(char* _String, int _Value, size_t _MaxCount);
char* strrev(char* _String);
char* strset(char* _String, int _Value); char* strupr(char* _String);

