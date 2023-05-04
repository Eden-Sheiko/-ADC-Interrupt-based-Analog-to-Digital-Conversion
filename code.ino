volatile uint16_t digital_value;

void setup() {
  // Initialize the Serial Monitor at 9600 baud rate
  Serial.begin(9600);

  // Set the ADC input channel to ADC0 and the reference voltage to AVcc
  ADMUX &= ~(1 << MUX0); // Clear the MUX0 bit to set the input channel to ADC0
  ADMUX |= (1 << REFS0);
  
  // Enable the ADC and set the prescaler to 128
  ADCSRA |= (1 << ADEN) | (1 << ADPS2) | (1 << ADPS1) | (1 << ADPS0);

  // Enable ADC conversion complete interrupt
  ADCSRA |= (1 << ADIE);

  // Enable global interrupts
  sei();

  // Start ADC conversion
  ADCSRA |= (1 << ADSC);
}

// ADC conversion complete interrupt service routine
ISR(ADC_vect) {
  // Read the converted value (10 bits) from ADCL and ADCH registers
  digital_value = (ADCL | (ADCH << 8));

  // Print the digital value to the Serial Monitor
  Serial.println(digital_value);

  // Start next ADC conversion
  ADCSRA |= (1 << ADSC);
}

void loop() {
  // The loop function is left empty as everything is now handled by the ADC interrupt service routine
}
