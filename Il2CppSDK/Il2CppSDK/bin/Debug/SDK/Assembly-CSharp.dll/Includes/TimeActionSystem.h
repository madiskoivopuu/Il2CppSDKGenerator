#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TimeActionSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TimeActionSystem"));
	}

	template <typename R = IArenaWorld*> R& _arenaWorld() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = ICommonContexts*> R& _world() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	 IGroup1ActionEntity*>*& _actions() {
		return *(IGroup1ActionEntity*>**)((uintptr_t)this + 0x20);
	}
	template <typename R = bool> R& _checkBreak() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(TimeActionSystem*))(Il2CppBase() + 0x14EFC58))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(TimeActionSystem*))(Il2CppBase() + 0x14EFEF0))(this);
	}

};

