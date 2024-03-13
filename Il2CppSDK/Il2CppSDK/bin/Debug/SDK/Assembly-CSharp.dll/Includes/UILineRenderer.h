#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UILineRenderer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UILineRenderer"));
	}

	template <typename T = uintptr_t> T& m_Texture() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& m_UVRect() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& LineThickness() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& UVMultiplier() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> T& UVOffset() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = bool> T& UseMargins() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& Margin() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Points() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = bool> T& relativeSize() {
		return *(T*)((uintptr_t)this + 0xD8);
	}

	template <typename T = uintptr_t> T get_mainTexture() {
		return ((T (*)(UILineRenderer*))(Il2CppBase() + 0x152BCDC))(this);
	}
	template <typename T = uintptr_t> T get_texture() {
		return ((T (*)(UILineRenderer*))(Il2CppBase() + 0x152BD90))(this);
	}
	template <typename T = void> T set_texture(uintptr_t value) {
		return ((T (*)(UILineRenderer*, uintptr_t))(Il2CppBase() + 0x152BD98))(this, value);
	}
	template <typename T = uintptr_t> T get_uvRect() {
		return ((T (*)(UILineRenderer*))(Il2CppBase() + 0x152BE60))(this);
	}
	template <typename T = void> T set_uvRect(uintptr_t value) {
		return ((T (*)(UILineRenderer*, uintptr_t))(Il2CppBase() + 0x152BE6C))(this, value);
	}
	template <typename T = void> T OnPopulateMesh(uintptr_t vbo) {
		return ((T (*)(UILineRenderer*, uintptr_t))(Il2CppBase() + 0x152BEFC))(this, vbo);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T SetVbo(uintptr_t vbo, Il2CppArray<uintptr_t>* vertices, Il2CppArray<uintptr_t>* uvs) {
		return ((T (*)(UILineRenderer*, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x152C650))(this, vbo, vertices, uvs);
	}
	template <typename T = uintptr_t> T RotatePointAroundPivot(uintptr_t point, uintptr_t pivot, uintptr_t angles) {
		return ((T (*)(UILineRenderer*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x152C5D4))(this, point, pivot, angles);
	}

};

