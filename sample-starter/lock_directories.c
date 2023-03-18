#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

void lock_directories() {
    char* upload_dir = "upload";
    char* reporting_dir = "reporting";

    // change permissions of upload directory to read-only
    if (chmod(upload_dir, S_IRUSR | S_IRGRP | S_IROTH) == -1) {
        perror("Error changing permissions of upload directory");
        exit(EXIT_FAILURE);
    }

    // change permissions of reporting directory to read-only
    if (chmod(reporting_dir, S_IRUSR | S_IRGRP | S_IROTH) == -1) {
        perror("Error changing permissions of reporting directory");
        exit(EXIT_FAILURE);
    }

    printf("Directories locked successfully\n");
}
