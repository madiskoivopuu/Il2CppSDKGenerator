#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IEventBpPointsAEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IEventBpPointsAEntity"));
	}


	template <typename T = EventBpPointsAComponent*> T get_eventBpPointsA() {
		return ((T (*)(IEventBpPointsAEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasEventBpPointsA() {
		return ((T (*)(IEventBpPointsAEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddEventBpPointsA(int32_t newCount) {
		return ((T (*)(IEventBpPointsAEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename T = void> T ReplaceEventBpPointsA(int32_t newCount) {
		return ((T (*)(IEventBpPointsAEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename T = void> T RemoveEventBpPointsA() {
		return ((T (*)(IEventBpPointsAEntity*))(Il2CppBase() + 0x0))(this);
	}

};

