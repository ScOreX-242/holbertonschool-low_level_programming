#ifndef HOLBERTON_H
#define HOLBERTON_H

/*
 * File: holberton.h
 * Auth: Amin Israfilov
 * Desc: Header file containing prototypes for all functions
 *       written in the 0x14-file_io directory.
 */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);

#endif /* HOLBERTON_H */
