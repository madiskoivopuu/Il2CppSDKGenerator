#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IEventBpPointsBEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IEventBpPointsBEntity"));
	}


	template <typename T = EventBpPointsBComponent*> T get_eventBpPointsB() {
		return ((T (*)(IEventBpPointsBEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasEventBpPointsB() {
		return ((T (*)(IEventBpPointsBEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddEventBpPointsB(int32_t newCount) {
		return ((T (*)(IEventBpPointsBEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename T = void> T ReplaceEventBpPointsB(int32_t newCount) {
		return ((T (*)(IEventBpPointsBEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename T = void> T RemoveEventBpPointsB() {
		return ((T (*)(IEventBpPointsBEntity*))(Il2CppBase() + 0x0))(this);
	}

};

