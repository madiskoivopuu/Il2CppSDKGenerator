#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IInteractTargetEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IInteractTargetEntity"));
	}


	template <typename T = uintptr_t> T get_interactTarget() {
		return ((T (*)(IInteractTargetEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasInteractTarget() {
		return ((T (*)(IInteractTargetEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddInteractTarget(int32_t newId, void* newPosition) {
		return ((T (*)(IInteractTargetEntity*, int32_t, void*))(Il2CppBase() + 0x0))(this, newId, newPosition);
	}
	template <typename T = void> T ReplaceInteractTarget(int32_t newId, void* newPosition) {
		return ((T (*)(IInteractTargetEntity*, int32_t, void*))(Il2CppBase() + 0x0))(this, newId, newPosition);
	}
	template <typename T = void> T RemoveInteractTarget() {
		return ((T (*)(IInteractTargetEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
