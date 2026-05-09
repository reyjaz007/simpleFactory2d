# 🎮 Roadmap - Simple Factory 2D Game Development

## Estado Actual del Proyecto
- ✅ **Core Setup**: CMake, SFML 3.0.2 integrado
- ✅ **Estructura Base**: Game loop básico, Window management
- ✅ **Entity System**: Clases Entity, Player (heredando de Entity)
- ✅ **Movement**: Sistema de movimiento básico
- ✅ **Event Handling**: Sistema de eventos por teclado
- ⚠️ **Assets**: Carpeta preparada pero sin contenido
- ❌ **Rendering**: Sistema de capas/tiles incompleto
- ❌ **Game Physics**: Sin sistema de colisiones
- ❌ **UI System**: Sin interfaz de usuario
- ❌ **Save/Load**: Sin persistencia
- ❌ **Audio**: Sin sistema de sonido

---

## 📋 FASE 1: CORE FUNCIONAL (Sprint 1-2)

### 1.1 Sistema de Rendering y Tiles
**Prioridad:** 🔴 CRÍTICA  
**Dependencias:** Ninguna  
**Tiempo estimado:** 3-4 días

- [ ] Implementar `TileMap` system
  - [ ] Matriz de tiles en memoria
  - [ ] Cargar mapa desde archivo (CSV/JSON)
  - [ ] Renderizar grid de tiles
  - [ ] Sistema de capas (terreno, objetos, decorativos)

- [ ] Mejorar `Tile` class
  - [ ] Propiedades: tipo, índice de textura, colisiones
  - [ ] Soporte para tiles autobálmicos (opcional para v1)

- [ ] Asset Pipeline
  - [ ] Crear spritesheet 32x32 para tiles
  - [ ] Crear sprite del jugador
  - [ ] Organizar assets en carpetas (textures/, sprites/, sounds/)

**Archivos a crear/modificar:**
- `src/entities/tile.hpp/cpp` - Expandir
- `src/logic/landScape/tileMap.hpp/cpp` - NUEVO
- `src/logic/rendering/renderer.hpp/cpp` - NUEVO

---

### 1.2 Sistema de Colisiones Básico
**Prioridad:** 🔴 CRÍTICA  
**Dependencias:** 1.1 (TileMap)  
**Tiempo estimado:** 2-3 días

- [ ] Implementar BoundingBox/AABB collision
  - [ ] Hitboxes en Entity
  - [ ] Detección tile-tile
  - [ ] Detección Entity-tile

- [ ] Movimiento con colisiones
  - [ ] Actualizar `Movement::moveLeft/Right/Up/Down`
  - [ ] Evitar pasar por tiles sólidos
  - [ ] Feedback visual (debug mode con rectángulos)

- [ ] Sistema de capas de colisión
  - [ ] Marcar tiles como sólidos/interactuables

**Archivos a crear/modificar:**
- `src/logic/physics/collision.hpp/cpp` - NUEVO
- `src/logic/movement/movement.hpp/cpp` - Expandir
- `src/entities/entity.hpp/cpp` - Agregar hitbox

---

### 1.3 Mejoras al Sistema de Input
**Prioridad:** 🟡 ALTA  
**Dependencias:** 1.2 (Colisiones)  
**Tiempo estimado:** 1-2 días

- [ ] Input buffering (registrar teclas presionadas)
- [ ] Movimiento suave (acelerar/desacelerar)
- [ ] Animación de sprites durante movimiento
- [ ] Soporte para múltiples teclas simultáneas
- [ ] Keybindings configurables

**Archivos a crear/modificar:**
- `src/logic/input/inputManager.hpp/cpp` - NUEVO
- `src/logic/event.hpp/cpp` - Refactorizar

---

## 🎨 FASE 2: GAMEPLAY FUNDACIONAL (Sprint 3-4)

### 2.1 Animaciones de Sprites
**Prioridad:** 🟡 ALTA  
**Dependencias:** 1.1 (Assets)  
**Tiempo estimado:** 3-4 días

- [ ] Sistema de animación
  - [ ] Frames de animación
  - [ ] Spritesheet parser
  - [ ] Transiciones suaves

- [ ] Animaciones por estado
  - [ ] Idle (reposo)
  - [ ] Walking (en movimiento)
  - [ ] Attacking (para futura mecánica de combate)

- [ ] Directionalidad
  - [ ] Sprites diferentes por dirección (arriba, abajo, izquierda, derecha)

**Archivos a crear/modificar:**
- `src/graphics/animation.hpp/cpp` - NUEVO
- `src/entities/entity.hpp/cpp` - Agregar animación
- `src/entities/player/player.hpp/cpp` - Aplicar animaciones

---

### 2.2 Cámara y Viewport
**Prioridad:** 🟡 ALTA  
**Dependencias:** 1.1 (Rendering)  
**Tiempo estimado:** 2 días

- [ ] Sistema de cámara que sigue al jugador
  - [ ] Centrar en player
  - [ ] Límites de mapa
  - [ ] Smooth follow (opcional)

- [ ] Implementar viewport/zoom
- [ ] Parallax scrolling para fondos (futuro)

**Archivos a crear/modificar:**
- `src/graphics/camera.hpp/cpp` - NUEVO
- `src/game/simpleFactory.hpp/cpp` - Integrar cámara

---

### 2.3 Entidades NPC Básicas
**Prioridad:** 🟡 ALTA  
**Dependencias:** 1.1, 1.2  
**Tiempo estimado:** 2-3 días

- [ ] Crear clase `NPC` (heredar de Entity)
- [ ] Patrones de movimiento IA básico
  - [ ] Patrulla (patrón fijo)
  - [ ] Random walk
  - [ ] Seguir al jugador (futuro)

- [ ] Sistema de interacción
  - [ ] Detectar proximidad
  - [ ] Mostrar indicador de interacción
  - [ ] Diálogos básicos (próxima fase)

**Archivos a crear/modificar:**
- `src/entities/npc/npc.hpp/cpp` - NUEVO
- `src/entities/handlers/entitiesHandler.hpp/cpp` - Gestionar NPCs
- `src/logic/ai/pathfinding.hpp/cpp` - NUEVO (futuro)

---

## 🎯 FASE 3: GAMEPLAY EXPANDIDO (Sprint 5-6)

### 3.1 Sistema de Diálogos
**Prioridad:** 🟡 ALTA  
**Dependencias:** 2.3 (NPCs)  
**Tiempo estimado:** 3-4 días

- [ ] Parser de diálogos (formato simple)
- [ ] UI de diálogos en pantalla
- [ ] Múltiples opciones de respuesta
- [ ] Gestor de estado de diálogos (visitado, completado, etc)

**Archivos a crear/modificar:**
- `src/ui/dialogSystem.hpp/cpp` - NUEVO
- `src/logic/dialogue/dialogue.hpp/cpp` - NUEVO
- Format: Considerar JSON o formato personalizado

---

### 3.2 Sistema de Inventario
**Prioridad:** 🟡 ALTA  
**Dependencias:** Ninguna  
**Tiempo estimado:** 3-4 días

- [ ] Backend de inventario
  - [ ] Array/map de items
  - [ ] Límite de espacio/peso
  - [ ] Apilar items iguales

- [ ] UI de inventario
  - [ ] Grid visual
  - [ ] Drag & drop items (opcional v1)
  - [ ] Información de item al pasar cursor

**Archivos a crear/modificar:**
- `src/logic/inventory/inventory.hpp/cpp` - NUEVO
- `src/logic/inventory/item.hpp/cpp` - NUEVO
- `src/ui/inventoryUI.hpp/cpp` - NUEVO

---

### 3.3 Sistema de Recolección/Crafting Básico
**Prioridad:** 🟢 MEDIA  
**Dependencias:** 3.2 (Inventario)  
**Tiempo estimado:** 3-5 días

- [ ] Objetos coleccionables en el mapa
- [ ] Sistema de pickup
- [ ] Tabla de crafting simple
- [ ] Recetas configurables (JSON)

**Archivos a crear/modificar:**
- `src/logic/crafting/recipe.hpp/cpp` - NUEVO
- `src/logic/crafting/craftingSystem.hpp/cpp` - NUEVO
- `src/entities/pickupable.hpp/cpp` - NUEVO

---

## 🔊 FASE 4: PULIDO Y EFECTOS (Sprint 7-8)

### 4.1 Sistema de Audio
**Prioridad:** 🟡 ALTA  
**Dependencias:** Ninguna (independiente)  
**Tiempo estimado:** 2-3 días

- [ ] Gestor de música de fondo
- [ ] Sistema de sfx (sonidos de efectos)
- [ ] Control de volumen global/por categoría
- [ ] Cargar clips de audio en assets/

**Archivos a crear/modificar:**
- `src/audio/audioManager.hpp/cpp` - NUEVO
- `src/audio/soundClip.hpp/cpp` - NUEVO

---

### 4.2 Efectos Visuales Básicos
**Prioridad:** 🟢 MEDIA  
**Dependencias:** 2.1 (Animaciones)  
**Tiempo estimado:** 2-3 días

- [ ] Partículas simples (movimiento, velocidad, lifetime)
- [ ] Fade in/out
- [ ] Efectos de paso de tiempo
- [ ] Indicadores flotantes (damage, items pickead)

**Archivos a crear/modificar:**
- `src/graphics/particle.hpp/cpp` - NUEVO
- `src/graphics/particleEmitter.hpp/cpp` - NUEVO

---

### 4.3 UI Completa
**Prioridad:** 🟡 ALTA  
**Dependencias:** 2.2 (Cámara)  
**Tiempo estimado:** 3-4 días

- [ ] HUD (Salud, hambres, stats)
- [ ] Menú principal
- [ ] Menú pausa
- [ ] Configuración

**Archivos a crear/modificar:**
- `src/ui/uiManager.hpp/cpp` - NUEVO
- `src/ui/hud.hpp/cpp` - NUEVO
- `src/ui/menuScreen.hpp/cpp` - NUEVO

---

## 💾 FASE 5: PERSISTENCIA Y CONTENIDO (Sprint 9-10)

### 5.1 Sistema de Save/Load
**Prioridad:** 🟡 ALTA  
**Dependencias:** Todas las fases anteriores  
**Tiempo estimado:** 3-4 días

- [ ] Serialización de game state
- [ ] Múltiples slots de guardado
- [ ] Cargar/guardar en formato JSON o binario
- [ ] Validación de datos

**Archivos a crear/modificar:**
- `src/logic/saving/saveManager.hpp/cpp` - NUEVO
- `src/logic/saving/saveData.hpp` - NUEVO

---

### 5.2 Mapas y Niveles
**Prioridad:** 🟡 ALTA  
**Dependencias:** 1.1 (TileMap)  
**Tiempo estimado:** 4-5 días

- [ ] Editor de mapas O generador (Tiled integration recomendado)
- [ ] Múltiples escenas/niveles
- [ ] Transiciones entre mapas
- [ ] Spawn points configurables

**Herramientas:**
- Considerar usar **Tiled** (editor de mapas externo)
- Exportar a JSON/CSV compatible con tu loader

**Archivos a crear/modificar:**
- `src/logic/world/levelManager.hpp/cpp` - NUEVO
- `src/logic/world/sceneManager.hpp/cpp` - NUEVO

---

### 5.3 Contenido Gameplay
**Prioridad:** 🟢 MEDIA  
**Dependencias:** Todas las fases anteriores  
**Tiempo estimado:** Varía

- [ ] Crear tiles variados (terreno, agua, lava, plantas, etc)
- [ ] Crear NPCs con personalidades
- [ ] Diseñar diálogos
- [ ] Balanceo de gameplay

---

## 🧪 FASE 6: MANTENIMIENTO Y OPTIMIZACIÓN (Sprint 11+)

### 6.1 Refactorización de Código
**Prioridad:** 🟢 MEDIA  
**Dependencias:** Todas las fases anteriores  
**Tiempo estimado:** 2 semanas

- [ ] Code review y cleanup
- [ ] Documentación de API
- [ ] Unit tests para lógica core
- [ ] Logging system

---

### 6.2 Optimización de Performance
**Prioridad:** 🟢 MEDIA  
**Dependencias:** Todo implementado  
**Tiempo estimado:** 1-2 semanas

- [ ] Profiling (encontrar bottlenecks)
- [ ] Object pooling para particles/bullets
- [ ] Culling de entidades fuera de pantalla
- [ ] Caché de texturas/sprites

---

### 6.3 Testing y Bug Fixing
**Prioridad:** 🟡 ALTA  
**Dependencias:** Todo implementado  
**Tiempo estimado:** 1-2 semanas

- [ ] Play testing exhaustivo
- [ ] Feedback testing con usuarios
- [ ] Fixed bugs críticos
- [ ] Edge case handling

---

## 📊 Matriz de Dependencias

```
FASE 1 (Core)
├── 1.1 TileMap & Rendering
│   ├── 2.1 Animaciones
│   ├── 2.2 Cámara
│   └── 2.3 NPCs
│
├── 1.2 Colisiones
│   └── 3.3 Crafting
│
└── 1.3 Input Management
    └── Todo lo demás

FASE 2 (Gameplay Base)
├── 2.1 Animaciones (depende 1.1)
├── 2.2 Cámara (depende 1.1)
└── 2.3 NPCs (depende 1.1, 1.2)
    └── 3.1 Diálogos

FASE 3 (Expansión)
├── 3.1 Diálogos (depende 2.3)
├── 3.2 Inventario (independiente)
└── 3.3 Crafting (depende 3.2)

FASE 4 (Pulido)
├── 4.1 Audio (independiente)
├── 4.2 Efectos (depende 2.1)
└── 4.3 UI (todo)

FASE 5 (Persistencia)
├── 5.1 Save/Load
├── 5.2 Mapas (depende 1.1)
└── 5.3 Contenido

FASE 6 (Mantenimiento)
```

---

## 🎯 Milestones por Tiempo

| Milestone | Fecha Estimada | Objetivos |
|-----------|----------------|-|
| **MVP v0.1** | Semana 2 | Jugador movimiento suave, mapa con tiles, colisiones |
| **MVP v0.2** | Semana 4 | Animaciones, cámara, NPCs básicos |
| **Demo v0.3** | Semana 6 | Diálogos, inventario básico |
| **Beta v0.4** | Semana 8 | Audio, efectos, UI completa |
| **Release Candidate** | Semana 10 | Save/Load, múltiples mapas |
| **v1.0** | Semana 12 | Polish, bugfixes, optimización |

---

## 🛠️ Tech Stack Recomendado

- **Motor:** SFML 3.0.2 ✅
- **Lenguaje:** C++17/20 ✅
- **Build:** CMake ✅
- **Editor de Mapas:** Tiled (integración futura)
- **Formato de Datos:** JSON (nlohmann/json recomendado)
- **Logging:** spdlog (opcional, mejora debugging)
- **Recursos:** Aseprite o Piskel para sprites

---

## 📚 Estructura de Carpetas Recomendada (Final)

```
src/
├── main/
│   └── main.cpp
├── game/
│   └── simpleFactory.hpp/cpp
├── platform/
│   └── sfmlWindow.hpp/cpp
├── entities/
│   ├── entity.hpp/cpp
│   ├── player/
│   ├── npc/
│   ├── pickupable/
│   ├── tile.hpp/cpp
│   └── handlers/
├── logic/
│   ├── event.hpp/cpp
│   ├── input/
│   ├── movement/
│   ├── physics/
│   ├── collision/
│   ├── ai/
│   ├── inventory/
│   ├── crafting/
│   ├── dialogue/
│   ├── world/
│   └── saving/
├── graphics/
│   ├── animation.hpp/cpp
│   ├── camera.hpp/cpp
│   ├── particle.hpp/cpp
│   └── renderer.hpp/cpp
├── audio/
│   ├── audioManager.hpp/cpp
│   └── soundClip.hpp/cpp
└── ui/
    ├── uiManager.hpp/cpp
    ├── hud.hpp/cpp
    ├── menuScreen.hpp/cpp
    ├── inventoryUI.hpp/cpp
    └── dialogSystem.hpp/cpp

assets/
├── sprites/
│   ├── player/
│   └── characters/
├── tiles/
├── ui/
├── sounds/
│   ├── sfx/
│   └── music/
└── data/
    ├── maps/
    ├── dialogues/
    └── recipes/
```

---

## ✅ Checklist Rápido - Antes de Empezar

- [ ] Verificar que SFML compila correctamente
- [ ] Crear estructura de carpetas recomendada
- [ ] Crear assets básicos (al menos 1 sprite del jugador, 1 tile)
- [ ] Establecer convenciones de código (naming, formatting)
- [ ] Configurar Git con .gitignore apropiado
- [ ] Crear issues en GitHub (si aplica) para cada feature
- [ ] Planificar con equipo (si hay) o establecer metas personales

---

## 💡 Tips de Desarrollo

1. **Prueba cada feature por separado** antes de integrar
2. **Debug mode activado:** Dibuja hitboxes y grillas
3. **Usa Delta Time correctamente** para movimiento y animaciones
4. **Mantén física separada de rendering**
5. **Considera usar interfaces abstractas** para permitir múltiples implementaciones
6. **ECS (Entity Component System)** como alternativa futura si la lógica crece

---

**Última actualización:** Mayo 2026  
**Estado:** Roadmap inicial  
**Mantenedor:** Adrian -- RRADN