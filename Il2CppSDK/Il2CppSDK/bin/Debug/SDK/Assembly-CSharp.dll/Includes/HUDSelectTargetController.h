#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDSelectTargetController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDSelectTargetController"));
	}

	template <typename R = Il2CppArray<uintptr_t>*> R& _proxy() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	 Il2CppList<PointerDownProxy*>*& _proxyList() {
		return *(Il2CppList<PointerDownProxy*>**)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R OnEnable() {
		return ((R (*)(HUDSelectTargetController*))(Il2CppBase() + 0x127DF4C))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(HUDSelectTargetController*))(Il2CppBase() + 0x127E2BC))(this);
	}
	template <typename R = void> R OnProxyPointerDown(uintptr_t eventData) {
		return ((R (*)(HUDSelectTargetController*, uintptr_t))(Il2CppBase() + 0x127E4AC))(this, eventData);
	}
	template <typename R = void> R OnPointerDown(uintptr_t eventData, bool proxy) {
		return ((R (*)(HUDSelectTargetController*, uintptr_t, bool))(Il2CppBase() + 0x127E4B4))(this, eventData, proxy);
	}
	template <typename R = void> R OnPointerDown_1(uintptr_t eventData) {
		return ((R (*)(HUDSelectTargetController*, uintptr_t))(Il2CppBase() + 0x127EA60))(this, eventData);
	}

};

