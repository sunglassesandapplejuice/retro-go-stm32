#ifndef __SOUND_H__
#define __SOUND_H__

#include "emu.h"

typedef struct
{
	int on;
	unsigned pos;
	int cnt, encnt, swcnt;
	int len, enlen, swlen;
	int swfreq;
	int freq;
	int envol, endir;
} sndchan_t;

typedef struct
{
	int rate;
	sndchan_t ch[4];
	byte wave[16];
	int cycles;
} snd_t;

typedef struct
{
	int hz, len;
	int stereo;
	n16* buf;
	int pos;
} pcm_t;

extern pcm_t pcm;
extern snd_t snd;

void sound_write(byte r, byte b);
byte sound_read(byte r);
void sound_dirty();
void sound_reset();
void sound_mix();

#endif
