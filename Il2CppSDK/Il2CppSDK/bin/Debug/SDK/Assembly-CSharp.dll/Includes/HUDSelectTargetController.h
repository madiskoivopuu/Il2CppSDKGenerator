#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDSelectTargetController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDSelectTargetController"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _proxy() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<PointerDownProxy*>*> T& _proxyList() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(HUDSelectTargetController*))(Il2CppBase() + 0x127DF4C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(HUDSelectTargetController*))(Il2CppBase() + 0x127E2BC))(this);
	}
	template <typename T = void> T OnProxyPointerDown(uintptr_t eventData) {
		return ((T (*)(HUDSelectTargetController*, uintptr_t))(Il2CppBase() + 0x127E4AC))(this, eventData);
	}
	template <typename T = void> T OnPointerDown(uintptr_t eventData, bool proxy) {
		return ((T (*)(HUDSelectTargetController*, uintptr_t, bool))(Il2CppBase() + 0x127E4B4))(this, eventData, proxy);
	}
	template <typename T = void> T OnPointerDown_1(uintptr_t eventData) {
		return ((T (*)(HUDSelectTargetController*, uintptr_t))(Il2CppBase() + 0x127EA60))(this, eventData);
	}

};

