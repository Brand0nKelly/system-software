#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <syslog.h>

#define DIR_PATH "/workspaces/system-software/Assignment/upload"

void unlock_directories()
{
    char cmd[200] = "chmod -R 777 ";
    strcat(cmd, DIR_PATH);

    if (system(cmd) == -1) {
        syslog(LOG_ERR, "Could not unlock directory: %m");
    } else {
        syslog(LOG_INFO, "Directory unlocked successfully");
    }
}
