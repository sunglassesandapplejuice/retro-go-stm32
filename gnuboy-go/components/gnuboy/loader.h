#ifndef __LOADER_H__
#define __LOADER_H__

int rom_loadbank(int);
int rom_load(const char *file);
void rom_unload(void);

int sram_load(const char *file);
int sram_save(const char *file);
int gb_state_load(const uint8_t *flash_ptr, size_t size);
int gb_state_save(uint8_t *flash_ptr, size_t size);

/* share CACHE buffer with save state */
extern unsigned char *GB_ROM_SRAM_CACHE;
extern void gb_loader_restore_cache();

#endif
