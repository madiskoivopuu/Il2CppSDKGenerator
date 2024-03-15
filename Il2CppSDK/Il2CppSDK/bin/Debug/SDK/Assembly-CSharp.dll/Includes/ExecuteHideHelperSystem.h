#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ExecuteHideHelperSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExecuteHideHelperSystem"));
	}

	template <typename R = ICommonUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 IContext1GameEntity*>*& _context() {
		return *(IContext1GameEntity*>**)((uintptr_t)this + 0x18);
	}
	 IMatcher1GameEntity*>*& _matcher() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)this + 0x20);
	}
	 IGroup1GameEntity*>*& _entities() {
		return *(IGroup1GameEntity*>**)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(ExecuteHideHelperSystem*))(Il2CppBase() + 0x1683D60))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(ExecuteHideHelperSystem*))(Il2CppBase() + 0x1683E2C))(this);
	}

};

