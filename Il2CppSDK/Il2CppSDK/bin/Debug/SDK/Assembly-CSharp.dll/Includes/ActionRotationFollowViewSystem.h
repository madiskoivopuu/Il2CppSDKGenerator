#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActionRotationFollowViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActionRotationFollowViewSystem"));
	}

	template <typename R = IArenaWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 IGroup1ActionEntity*>*& _actions() {
		return *(IGroup1ActionEntity*>**)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(ActionRotationFollowViewSystem*))(Il2CppBase() + 0x18AB9F4))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(ActionRotationFollowViewSystem*))(Il2CppBase() + 0x18ABCF4))(this);
	}

};

