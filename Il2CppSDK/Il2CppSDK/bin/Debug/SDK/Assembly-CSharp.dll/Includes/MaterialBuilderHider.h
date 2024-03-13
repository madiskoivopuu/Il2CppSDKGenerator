#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MaterialBuilderHider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MaterialBuilderHider"));
	}

	template <typename T = uintptr_t> T& _renderer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _material() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = BuilderMode*> T& _builderMode() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _originalMaterial() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = BuilderMode*> T get_BuilderMode() {
		return ((T (*)(MaterialBuilderHider*))(Il2CppBase() + 0x12CCE34))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(MaterialBuilderHider*))(Il2CppBase() + 0x12CCE3C))(this);
	}
	template <typename T = void> T SetVisible(bool visible) {
		return ((T (*)(MaterialBuilderHider*, bool))(Il2CppBase() + 0x12CCF28))(this, visible);
	}

};

