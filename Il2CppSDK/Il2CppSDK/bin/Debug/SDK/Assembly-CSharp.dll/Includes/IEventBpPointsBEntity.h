#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IEventBpPointsBEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IEventBpPointsBEntity"));
	}


	template <typename R = EventBpPointsBComponent*> R get_eventBpPointsB() {
		return ((R (*)(IEventBpPointsBEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasEventBpPointsB() {
		return ((R (*)(IEventBpPointsBEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddEventBpPointsB(int32_t newCount) {
		return ((R (*)(IEventBpPointsBEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename R = void> R ReplaceEventBpPointsB(int32_t newCount) {
		return ((R (*)(IEventBpPointsBEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename R = void> R RemoveEventBpPointsB() {
		return ((R (*)(IEventBpPointsBEntity*))(Il2CppBase() + 0x0))(this);
	}

};

