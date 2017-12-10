#include <stdio.h>
#include <stdlib.h>

typedef struct obfl_uptime_card_info_ {
    /* some uptime card specific information tracked here */
    /* Note: below defs does not need to be aligned to 16 bit boundary */
    uint16_t  start_card_magic; /* block meta data end */
    uint32_t  length;
    uint8_t   version; /* version */
    uint8_t   flags;   /* set if any of below absolute values changed */
    uint8_t   last_chassis_sn[16];
    uint8_t   current_chassis_sn[16];
    uint32_t  uptime_write_interval; /* min */
    uint32_t  first_power_on_ts; /* first power/customer on time for this card */
    uint32_t  last_erase_ts; /* timestamp for last erase operation */
    uint16_t  last_rack;
    uint16_t  last_slot;
    uint16_t  last_instance;
    uint16_t  current_rack;
    uint16_t  current_slot;
    uint16_t  current_instance;
    uint64_t  rack_change_count;
    uint64_t  slot_change_count;
    uint16_t  last_reset_reason;
    uint32_t  last_reset_ts;
    uint8_t   reserved[16]; /* reserved for future use - set to 0x0 */
    uint16_t  end_card_magic;
} obfl_uptime_card_info_t;

typedef struct obfl_block_meta_data_ {
    uint16_t     start_bmd_magic; /* block meta data start */
    uint16_t     bmd_len; /* length of this BMD */
    uint8_t      version; /* version # of s/w that wrote this block */
    uint8_t      stor_type; /* BDI_STORAGE_TLV/... */
    uint32_t     unused;
    uint64_t     seq_num; /* helps identify most recent block written */
    uint32_t     block_size; /* total block size - default 64k */
    uint32_t     bytes_in_block; /* total bytes written in this block */
    uint16_t     attributes; /* TBD */
    uint8_t      state; /* free/in-use/zombie/in-erase/good/bad/invalid... */
    uint8_t      reserved1[7]; /* reserved for future use - set to 0x0 */
    uint16_t     checksum;  /* start to end of magic excluding checksum field */
    uint16_t     end_bmd_magic; /* block meta data end */
    /*
     * Other card specific info
     * These fields are not accounted in checksum
     * but will be read immediately during startup/restart.
     * NB: Try not to increase total bmd size (bmd_len) beyond
     *     one single read size (256 bytes) of CCC mbox
     */
    obfl_uptime_card_info_t uci;
} obfl_block_meta_data_t;

typedef struct obfl_cmn_header_ {
    uint16_t    begin_magic;
    uint32_t    length;
    uint16_t    version;
    uint8_t     rec_type;    /* this is obfl_rec_type_e defined in one byte */
    uint32_t    timestamp;   /* seconds */
    uint64_t    seq_num;
    uint32_t    flags;       /* flags - repeat/... - future use */
} obfl_cmn_header_t;

typedef struct obfl_cmn_footer_ {
    uint16_t    pad;
    uint16_t    end_magic;
} obfl_cmn_footer_t;

typedef struct obfl_uptime_rec_ {
    obfl_cmn_header_t   header;
    uint32_t            this_power_on_ts;
    obfl_cmn_footer_t   footer;
} obfl_uptime_rec_t;

int main () {
    obfl_block_meta_data_t obfl_data;
    printf("%lu\n", sizeof(obfl_data));

    obfl_uptime_rec_t up_rec;
    printf("sizeof(obfl_uptime_rec) = %lu\n", sizeof(up_rec));
    return 0;
}
