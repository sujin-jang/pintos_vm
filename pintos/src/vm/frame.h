#ifndef VM_FRAME_H
#define VM_FRAME_H

#include "threads/palloc.h"
#include "vm/page.h"

void frame_init (void);
void *frame_alloc (enum palloc_flags flags, void *upage, bool writable);
void frame_free (void *kpage);
void *frame_evict (void);

#endif
