#ifndef BRUCE_SDR_H
#define BRUCE_SDR_H

// IQ Record — raw I/Q capture from the ESP32-S3 WiFi radio to the SD card.
// Ported from PBJ3000-ESP32-Jammer (lib/esp_sdr, GPL-3.0-or-later), which is
// itself based on ESPARGOS/esp-sdr (RX half only; the TX/jammer side was
// removed). Availability is decided by core/iq_record_gate.h: full build,
// ESP32-S3, PSRAM enabled, and no board-level opt-out.
// Include core/iq_record_gate.h after Arduino.h and gate call sites on
// !defined(BRUCE_IQ_RECORD_UNAVAILABLE).
void sdr_menu();

#endif
