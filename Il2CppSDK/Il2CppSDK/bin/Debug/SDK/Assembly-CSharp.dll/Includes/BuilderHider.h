#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuilderHider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuilderHider"));
	}

	template <typename R = Il2CppArray<uintptr_t>*> R& NormalRenderers() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& Normal() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& Hidden() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = bool> R& UseHideHelper() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = BuilderMode*> R& _builderMode() {
		return *(R*)((uintptr_t)this + 0x34);
	}

	template <typename R = BuilderMode*> R get_BuilderMode() {
		return ((R (*)(BuilderHider*))(Il2CppBase() + 0x15A9120))(this);
	}
	template <typename R = void> R SetVisible(bool visible) {
		return ((R (*)(BuilderHider*, bool))(Il2CppBase() + 0x15A9128))(this, visible);
	}

};

