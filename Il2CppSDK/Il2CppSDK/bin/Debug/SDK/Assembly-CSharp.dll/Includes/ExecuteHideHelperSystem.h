#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ExecuteHideHelperSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExecuteHideHelperSystem"));
	}

	template <typename T = ICommonUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = IContext1GameEntity*>*> T& _context() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = IMatcher1GameEntity*>*> T& _matcher() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = IGroup1GameEntity*>*> T& _entities() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(ExecuteHideHelperSystem*))(Il2CppBase() + 0x1683D60))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(ExecuteHideHelperSystem*))(Il2CppBase() + 0x1683E2C))(this);
	}

};

