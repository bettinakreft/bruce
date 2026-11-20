#pragma once

// IQ Record reserves 64 KiB of internal SRAM for capture. Only enable it for
// full ESP32-S3 builds with PSRAM and without the board-level opt-out.
#if defined(LITE_VERSION) || defined(BRUCE_NO_IQ_RECORD) || !defined(CONFIG_SPIRAM) || \
    !defined(CONFIG_IDF_TARGET_ESP32S3)
#define BRUCE_IQ_RECORD_UNAVAILABLE 1
#endif
