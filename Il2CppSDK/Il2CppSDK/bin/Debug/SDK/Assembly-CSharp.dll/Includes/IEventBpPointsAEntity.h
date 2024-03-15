#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IEventBpPointsAEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IEventBpPointsAEntity"));
	}


	template <typename R = EventBpPointsAComponent*> R get_eventBpPointsA() {
		return ((R (*)(IEventBpPointsAEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasEventBpPointsA() {
		return ((R (*)(IEventBpPointsAEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddEventBpPointsA(int32_t newCount) {
		return ((R (*)(IEventBpPointsAEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename R = void> R ReplaceEventBpPointsA(int32_t newCount) {
		return ((R (*)(IEventBpPointsAEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename R = void> R RemoveEventBpPointsA() {
		return ((R (*)(IEventBpPointsAEntity*))(Il2CppBase() + 0x0))(this);
	}

};

