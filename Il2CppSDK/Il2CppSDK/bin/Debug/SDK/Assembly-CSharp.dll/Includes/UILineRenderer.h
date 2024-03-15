#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UILineRenderer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UILineRenderer"));
	}

	template <typename R = uintptr_t> R& m_Texture() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& m_UVRect() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = float> R& LineThickness() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = float> R& UVMultiplier() {
		return *(R*)((uintptr_t)this + 0xBC);
	}
	template <typename R = float> R& UVOffset() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = bool> R& UseMargins() {
		return *(R*)((uintptr_t)this + 0xC4);
	}
	template <typename R = uintptr_t> R& Margin() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& Points() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = bool> R& relativeSize() {
		return *(R*)((uintptr_t)this + 0xD8);
	}

	template <typename R = uintptr_t> R get_mainTexture() {
		return ((R (*)(UILineRenderer*))(Il2CppBase() + 0x152BCDC))(this);
	}
	template <typename R = uintptr_t> R get_texture() {
		return ((R (*)(UILineRenderer*))(Il2CppBase() + 0x152BD90))(this);
	}
	template <typename R = void> R set_texture(uintptr_t value) {
		return ((R (*)(UILineRenderer*, uintptr_t))(Il2CppBase() + 0x152BD98))(this, value);
	}
	template <typename R = uintptr_t> R get_uvRect() {
		return ((R (*)(UILineRenderer*))(Il2CppBase() + 0x152BE60))(this);
	}
	template <typename R = void> R set_uvRect(uintptr_t value) {
		return ((R (*)(UILineRenderer*, uintptr_t))(Il2CppBase() + 0x152BE6C))(this, value);
	}
	template <typename R = void> R OnPopulateMesh(uintptr_t vbo) {
		return ((R (*)(UILineRenderer*, uintptr_t))(Il2CppBase() + 0x152BEFC))(this, vbo);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R SetVbo(uintptr_t vbo, Il2CppArray<uintptr_t>* vertices, Il2CppArray<uintptr_t>* uvs) {
		return ((R (*)(UILineRenderer*, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x152C650))(this, vbo, vertices, uvs);
	}
	template <typename R = uintptr_t> R RotatePointAroundPivot(uintptr_t point, uintptr_t pivot, uintptr_t angles) {
		return ((R (*)(UILineRenderer*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x152C5D4))(this, point, pivot, angles);
	}

};

