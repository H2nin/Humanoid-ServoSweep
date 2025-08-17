# Humanoid-ServoSweep
Control 4 servos to perform sequential 0°→360° sweeps, simulate humanoid walking, then return to 90°.

## Features
- Sequential sweep with 1s delay between servos
- Automatic neutral position (90°)
- Simple code ready for gait integration

## Components & Connections
- Arduino Uno + 4 standard servos
- Signals → D5, D6, D11, D12 | Power → 5V | GND → GND

## Humanoid Walking Algorithm

**Input:** Hip & knee servos, step angle θ, lift angle φ, delay Δt  
**Output:** Continuous walking motion  

**Steps:**
1. Initialize all servos at 90°
2. Loop:
   - **Right leg:** lift knee → swing hip forward → lower knee → shift weight to right leg
   - **Left leg:** lift knee → swing hip forward → lower knee → shift weight to left leg
   - Return both legs to neutral
   - Wait Δt for smooth motion

## Usage
1. Open Tinkercad → new Arduino circuit
2. Wire components as above
3. Copy `servo_sweep_control.ino`
4. Start simulation → watch sweeps & humanoid motion
