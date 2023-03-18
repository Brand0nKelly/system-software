#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <syslog.h>

#define DIR_PATH "/workspaces/system-software/Assignment/upload"

void lock_directories()
{
    // Chmod used to change permissions in the directory / array size 200 to accomdate for the dir path and the chmod command
    // Read only permissions for the all users, owner and group file,
    char cmd[200] = "chmod -R 555 ";
    strcat(cmd,DIR_PATH);

    if(system(cmd) == -1)
    {
        syslog(LOG_ERR, "Could not lock directory: %m");
    } else {
        syslog(LOG_INFO, "Directory locked successfully");
    }
}
