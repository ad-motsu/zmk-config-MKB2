/*
 * Editor compatibility for RC.
 *
 * ZMK defines RC twice with different meanings:
 *   - dt-bindings/zmk/modifiers.h:        RC(keycode)  = APPLY_MODS(MOD_RCTL, keycode)
 *   - dt-bindings/zmk/matrix_transform.h: RC(row, col) = (((row) << 8) + (col))
 * Both headers define the same RC with different argument counts, and the last
 * definition wins. The keymap uses the standard RC(keycode) spelling so GUI keymap
 * editors recognise it; this header supports both forms by selecting on argument count.
 *
 * Include this file from MKB.keymap AFTER the JIS/key/board headers. It #undefs RC and
 * redefines it, so any header included later that defines RC would override it.
 */
#pragma once

#include <dt-bindings/zmk/modifiers.h>

#define MKB_RC_SELECT(_1, _2, NAME, ...) NAME
#define MKB_RC_MODS(keycode) APPLY_MODS(MOD_RCTL, keycode)
#define MKB_RC_MATRIX(row, col) (((row) << 8) + (col))

#undef RC
#define RC(...) MKB_RC_SELECT(__VA_ARGS__, MKB_RC_MATRIX, MKB_RC_MODS, MKB_RC_UNUSED)(__VA_ARGS__)
