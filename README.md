# 🤖 Aulas_UNIBE — Robótica

Repositório com o conteúdo das aulas de **Robótica** ministradas na UNIBE. Aqui você encontra slides, projetos práticos e recursos de apoio para acompanhar as atividades da disciplina.

## 📁 Estrutura do Repositório

```
Aulas_UNIBE/
├── SLIDES DE AULA/                  # Apresentações utilizadas nas aulas
├── codigo_semafaro/                 # Projeto: Semáforo com LEDs
├── codigo_botao/                    # Projeto: Acender LED com botão
├── projeto_sensor_proximidade/      # Projeto: Sensor de proximidade
├── projeto_luminosidade/            # Projeto: Regulagem de luminosidade
├── projeto_piano_bananas/           # Projeto: Piano de Bananas
└── README.md
```

## 📊 Slides de Aula

Os slides utilizados nas aulas estão disponíveis na pasta [`SLIDES DE AULA`](https://github.com/DebbieMatt/Aulas_UNIBE/tree/7d77e0fff22c8a188ae2f9570353becf1293fe04/SLIDES%20DE%20AULA).

---

## 🚦 Projeto 1 — Semáforo com LEDs (23/05)

**Simulação no Tinkercad:** [Abrir projeto](https://www.tinkercad.com/things/3i3rkc0BCs6-copy-of-semafaro-led/editel?returnTo=%2Fthings%2F3i3rkc0BCs6-copy-of-semafaro-led)

### 🎯 Propósito

Este projeto tem como objetivo demonstrar a importância dos sistemas de controle sequencial no cotidiano, utilizando o semáforo como exemplo prático. Por meio dele, os alunos aprendem a controlar o tempo de ativação de diferentes saídas digitais, compreendendo como microcontroladores podem automatizar processos do mundo real.

### 🖼️ Imagem do Circuito

[![Circuito do Semáforo](https://github.com/DebbieMatt/Aulas_UNIBE/blob/4195dfbaa3d8316dca0135f55fec41e3b1d5bfe7/codigo_semafaro/Circuito%20do%20Semafaro.png)](https://github.com/DebbieMatt/Aulas_UNIBE/blob/4195dfbaa3d8316dca0135f55fec41e3b1d5bfe7/codigo_semafaro/Circuito%20do%20Semafaro.png)

### 📎 Arquivos do Projeto

| Arquivo | Descrição |
|---|---|
| [📄 Semafaro.pdf](https://github.com/DebbieMatt/Aulas_UNIBE/blob/4195dfbaa3d8316dca0135f55fec41e3b1d5bfe7/codigo_semafaro/Semafaro.pdf) | Esquema elétrico do circuito |
| [🧾 bom.csv](https://github.com/DebbieMatt/Aulas_UNIBE/blob/4195dfbaa3d8316dca0135f55fec41e3b1d5bfe7/codigo_semafaro/bom.csv) | Lista de componentes (Bill of Materials) |
| [💻 codigo_semafaro.ino](https://github.com/DebbieMatt/Aulas_UNIBE/blob/4195dfbaa3d8316dca0135f55fec41e3b1d5bfe7/codigo_semafaro/codigo_semafaro.ino) | Código fonte Arduino |

---

## 💡 Projeto 2 — Acender LED com Botão (30/05)

**Simulação no Tinkercad:** [Abrir projeto](https://www.tinkercad.com/things/iOVvH7vB9mG-copy-of-button-button/editel?returnTo=%2Fthings%2FiOVvH7vB9mG-copy-of-button-button)

### 🎯 Propósito

Introduzir o conceito de **entrada digital**, permitindo que o aluno compreenda como um microcontrolador lê sinais externos (como o pressionamento de um botão) e responde a eles acionando uma saída (LED).

### 🖼️ Imagem do Circuito

[![Circuito - Acender LED com Botão](https://github.com/DebbieMatt/Aulas_UNIBE/blob/a4237acb9f01c7c6eff41f9243588dcd15d4d130/codigo_botao/circuito_bot%C3%A3o.png)](https://github.com/DebbieMatt/Aulas_UNIBE/blob/a4237acb9f01c7c6eff41f9243588dcd15d4d130/codigo_botao/circuito_bot%C3%A3o.png)

### 📎 Arquivos do Projeto

| Arquivo | Descrição |
|---|---|
| [📄 circuito botão.pdf](https://github.com/DebbieMatt/Aulas_UNIBE/blob/a4237acb9f01c7c6eff41f9243588dcd15d4d130/codigo_botao/circuito%20bot%C3%A3o.pdf) | Esquema elétrico do circuito |
| [🧾 bom.csv](https://github.com/DebbieMatt/Aulas_UNIBE/blob/a4237acb9f01c7c6eff41f9243588dcd15d4d130/codigo_botao/bom.csv) | Lista de componentes (Bill of Materials) |
| [💻 codigo_botão.ino](https://github.com/DebbieMatt/Aulas_UNIBE/blob/a4237acb9f01c7c6eff41f9243588dcd15d4d130/codigo_botao/codigo_bot%C3%A3o.ino) | Código fonte Arduino |

---

## 📡 Projeto 3 — Sensor de Proximidade

**Simulação no Tinkercad:** [Abrir projeto](https://www.tinkercad.com/things/dxh9HIapIc6-sensor-de-proximidade/editel?returnTo=https%3A%2F%2Fwww.tinkercad.com%2Fdashboard%2Fdesigns%2Fall)

### 🎯 Propósito

Introduzir o uso de **sensores ultrassônicos** (como o HC-SR04), demonstrando como o Arduino pode medir distâncias e reagir a objetos próximos. Os alunos aprendem a trabalhar com entradas analógicas/digitais de sensores do mundo real, abrindo caminho para aplicações em robótica móvel e automação.

### 🖼️ Imagem do Circuito

[![Circuito - Sensor de Proximidade](https://github.com/DebbieMatt/Aulas_UNIBE/blob/791ebb4b5cb47120fea56be05ccb865ab39f623a/projeto_sensor_proximidade/sensor%20de%20proximidade.png)](https://github.com/DebbieMatt/Aulas_UNIBE/blob/791ebb4b5cb47120fea56be05ccb865ab39f623a/projeto_sensor_proximidade/sensor%20de%20proximidade.png)

### 📎 Arquivos do Projeto

| Arquivo | Descrição |
|---|---|
| [📄 sensor de proximidade.pdf](https://github.com/DebbieMatt/Aulas_UNIBE/blob/791ebb4b5cb47120fea56be05ccb865ab39f623a/projeto_sensor_proximidade/sensor%20de%20proximidade.pdf) | Esquema elétrico do circuito |
| [🧾 bom.csv](https://github.com/DebbieMatt/Aulas_UNIBE/blob/791ebb4b5cb47120fea56be05ccb865ab39f623a/projeto_sensor_proximidade/bom.csv) | Lista de componentes (Bill of Materials) |
| [💻 sensor_de_proximidade.ino](https://github.com/DebbieMatt/Aulas_UNIBE/blob/791ebb4b5cb47120fea56be05ccb865ab39f623a/projeto_sensor_proximidade/sensor_de_proximidade.ino) | Código fonte Arduino |

---

## ☀️ Projeto 4 — Regulagem de Luminosidade com Fotorresistor e Botões

**Simulação no Tinkercad:** [Abrir projeto](https://www.tinkercad.com/things/g0E6WHsMlL2-tremendous-amberis/editel?returnTo=https%3A%2F%2Fwww.tinkercad.com%2Fdashboard%2Fdesigns%2Fall)  
**Simulação no Wokwi:** [Abrir projeto](https://wokwi.com/projects/465583584552505345)

### 🎯 Propósito

Explorar o uso de **sensores analógicos** combinados com **entradas digitais**, permitindo que o aluno compreenda como o Arduino lê variações de luz ambiente por meio de um fotorresistor (LDR) e como dois botões podem ser usados para ajustar manualmente o nível de luminosidade de um LED. O projeto integra leitura analógica, controle PWM e lógica de interação com o usuário.

### 🖼️ Imagens do Circuito

[![Circuito - Regulador de Luminosidade](https://github.com/DebbieMatt/Aulas_UNIBE/blob/2d61e0004337e30493ce627384eb0a3c709546b3/projeto_luminosidade/regulador%20de%20luminosidade.png)](https://github.com/DebbieMatt/Aulas_UNIBE/blob/2d61e0004337e30493ce627384eb0a3c709546b3/projeto_luminosidade/regulador%20de%20luminosidade.png)

[![Circuito - Fotorresistor no Tinkercad](https://github.com/DebbieMatt/Aulas_UNIBE/blob/2d61e0004337e30493ce627384eb0a3c709546b3/projeto_luminosidade/fotoresistor_tinkercad.png)](https://github.com/DebbieMatt/Aulas_UNIBE/blob/2d61e0004337e30493ce627384eb0a3c709546b3/projeto_luminosidade/fotoresistor_tinkercad.png)

### 📎 Arquivos do Projeto

| Arquivo | Descrição |
|---|---|
| [📄 FotoResistor.pdf](https://github.com/DebbieMatt/Aulas_UNIBE/blob/2d61e0004337e30493ce627384eb0a3c709546b3/projeto_luminosidade/FotoResistor.pdf) | Esquema elétrico do circuito |
| [🧾 bom.csv](https://github.com/DebbieMatt/Aulas_UNIBE/blob/2d61e0004337e30493ce627384eb0a3c709546b3/projeto_luminosidade/bom.csv) | Lista de componentes (Bill of Materials) |
| [💻 codigo_luminosidade.ino](https://github.com/DebbieMatt/Aulas_UNIBE/blob/2d61e0004337e30493ce627384eb0a3c709546b3/projeto_luminosidade/codigo_luminosidade.ino) | Código fonte Arduino |

---

## 🍌 Projeto 5 — Piano de Bananas

**Simulação no Tinkercad:** [Abrir projeto](https://www.tinkercad.com/things/6HT5YuT18V7/editel)

### 🎯 Propósito

Demonstrar o conceito de **capacitância e leitura de entradas capacitivas**, utilizando bananas (ou qualquer objeto condutor) como teclas de um piano. O projeto explora como o Arduino pode detectar o toque humano através da condutividade elétrica do corpo, introduzindo os alunos a interações criativas e não convencionais com microcontroladores, além de conceitos de geração de som com buzzer.

### 🖼️ Imagem do Circuito

[![Circuito - Piano de Bananas](https://github.com/DebbieMatt/Aulas_UNIBE/blob/8090765fad2ef23a53f57af5c45a594f1675c6d0/projeto_piano_bananas/Piano%20de%20Bananas.png)](https://github.com/DebbieMatt/Aulas_UNIBE/blob/8090765fad2ef23a53f57af5c45a594f1675c6d0/projeto_piano_bananas/Piano%20de%20Bananas.png)

### 📎 Arquivos do Projeto

| Arquivo | Descrição |
|---|---|
| [📄 Piano de Bananas.pdf](https://github.com/DebbieMatt/Aulas_UNIBE/blob/8090765fad2ef23a53f57af5c45a594f1675c6d0/projeto_piano_bananas/Piano%20de%20Bananas.pdf) | Esquema elétrico do circuito |
| [🧾 bom.csv](https://github.com/DebbieMatt/Aulas_UNIBE/blob/8090765fad2ef23a53f57af5c45a594f1675c6d0/projeto_piano_bananas/bom.csv) | Lista de componentes (Bill of Materials) |
| [💻 codigo_piano_de_bananas.ino](https://github.com/DebbieMatt/Aulas_UNIBE/blob/8090765fad2ef23a53f57af5c45a594f1675c6d0/projeto_piano_bananas/codigo_piano_de_bananas.ino) | Código fonte Arduino |

---

## 🛠️ Ferramentas Utilizadas

- [Arduino IDE](https://www.arduino.cc/en/software) — para programação dos microcontroladores
- [Tinkercad Circuits](https://www.tinkercad.com/) — para simulação dos circuitos online
- [Wokwi](https://wokwi.com/) — para simulação dos circuitos online

---

## 👩‍🏫 Sobre a Disciplina

Disciplina de **Robótica** — UNIBE  
Professor(a): *Débora Mateus*  
Período: *2026/1*

---

## 📄 Licença

Este repositório é de uso educacional. O conteúdo pode ser utilizado e adaptado para fins de aprendizado.
