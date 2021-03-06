#ifndef __KERN_FS_SWAP_SWAPFS_H__
#define __KERN_FS_SWAP_SWAPFS_H__

#include <memlayout.h>
#include <swap_manager.h>

#ifdef UCONFIG_SWAP
void swapfs_init(void);
int swapfs_read(swap_entry_t entry, struct Page *page);
int swapfs_write(swap_entry_t entry, struct Page *page);

#endif

#endif /* !__KERN_FS_SWAP_SWAPFS_H__ */
