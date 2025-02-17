#pragma once

namespace filemanager {
void initSd();
void deinitSd();
int openFile(const char* path);
void closeFile(int handle);
unsigned int readFileToBuffer(int handle, void* buffer, int numBytes);
}