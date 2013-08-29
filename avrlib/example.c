// Initialize AVR for use with mirf
mirf_init();
// Wait for mirf to come up
_delay_ms(50);
// Activate interrupts
sei();
// Configure mirf
mirf_config();
// Test communication
mirf_send(buffer,buffersize);
while (!mirf_data_ready());
mirf_get_data(buffer);
