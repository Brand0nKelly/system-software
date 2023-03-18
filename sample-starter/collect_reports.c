#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <syslog.h>
#include "daemon_task.h"

void collect_reports(void) {
    // lock directories before collecting reports
    lock_directories();

    // code to collect reports from the upload directory and move them to the reporting directory
    printf("collect reports functionality could go here.. fork/cp will probably be used");

    // unlock directories after collecting reports
    unlock_directories();
}
