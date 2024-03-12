#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VIPLevelUpNotificationSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VIPLevelUpNotificationSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _prevVIPPointsCount() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& _prevVIPLevel() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(VIPLevelUpNotificationSystem*, void*))(Il2CppBase() + 0x15C0CAC))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t entity) {
		return ((T (*)(VIPLevelUpNotificationSystem*, uintptr_t))(Il2CppBase() + 0x15C0D04))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* accounts) {
		return ((T (*)(VIPLevelUpNotificationSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x15C0D20))(this, accounts);
	}

};

}
