#include "EEPROMManager.h"
EEPROMManager memory(512);
// =====================================================
// Berserk CORE-X
// =====================================================

void setup() {
  initBerserkMotores();
  initBerserkSensores();
}

void loop() {
  readSensor();
  controllRobot();
}

// =====================================================
// Inicialização
// =====================================================

void initBerserkMotores() {
  // TODO: aqui vamos configurar a lógica dos motores
}

void initBerserkSensores() {
  // TODO: aqui vamos configurar a lógica dos sensores
}

// =====================================================
// Sensores
// =====================================================

void readSensor() {
  // TODO: realizar leitura dos sensores
}

// =====================================================
// Controle
// =====================================================

void controllRobot() {
  // TODO: implementar lógica do comportamento do robô
}
