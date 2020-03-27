#ifndef _WIFI_H_
#define _WIFI_H_

#define SSID "Internetz"
#define PASSWD "wARMESwEIZENbIER"

/**
 * Initialise wifi connection by setting relevant information
 */
void wifi_init(void);

/**
 * Wait until connected Bit is set
 */
void wifi_wait_connected(void);
#endif
