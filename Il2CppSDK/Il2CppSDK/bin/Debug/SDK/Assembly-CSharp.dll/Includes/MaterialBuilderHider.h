#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MaterialBuilderHider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MaterialBuilderHider"));
	}

	template <typename R = uintptr_t> R& _renderer() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _material() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = BuilderMode> R& _builderMode() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _originalMaterial() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = BuilderMode> R get_BuilderMode() {
		return ((R (*)(MaterialBuilderHider*))(Il2CppBase() + 0x12CCE34))(this);
	}
	template <typename R = void> R Start() {
		return ((R (*)(MaterialBuilderHider*))(Il2CppBase() + 0x12CCE3C))(this);
	}
	template <typename R = void> R SetVisible(bool visible) {
		return ((R (*)(MaterialBuilderHider*, bool))(Il2CppBase() + 0x12CCF28))(this, visible);
	}

};

