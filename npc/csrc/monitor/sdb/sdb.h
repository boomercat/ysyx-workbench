
#ifndef __SDB_H__
#define __SDB_H__

#include <common.h>

word_t expr(char *e, bool *success);
word_t paddr_read(paddr_t addr, int len);
void set_WP(char *args,word_t value);
void display_watchpoint();
void delete_point(int num);
void scan_wp();
void isa_reg_display();
word_t isa_reg_str2val(const char *name, bool *success);

#endif
