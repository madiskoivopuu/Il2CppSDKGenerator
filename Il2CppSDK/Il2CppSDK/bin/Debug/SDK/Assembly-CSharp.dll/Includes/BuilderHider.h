#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuilderHider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuilderHider"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& NormalRenderers() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Normal() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Hidden() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& UseHideHelper() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = BuilderMode*> T& _builderMode() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = BuilderMode*> T get_BuilderMode() {
		return ((T (*)(BuilderHider*))(Il2CppBase() + 0x15A9120))(this);
	}
	template <typename T = void> T SetVisible(bool visible) {
		return ((T (*)(BuilderHider*, bool))(Il2CppBase() + 0x15A9128))(this, visible);
	}

};

