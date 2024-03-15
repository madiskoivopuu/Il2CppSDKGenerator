#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IEventBpPointsCEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IEventBpPointsCEntity"));
	}


	template <typename R = EventBpPointsCComponent*> R get_eventBpPointsC() {
		return ((R (*)(IEventBpPointsCEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasEventBpPointsC() {
		return ((R (*)(IEventBpPointsCEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddEventBpPointsC(int32_t newCount) {
		return ((R (*)(IEventBpPointsCEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename R = void> R ReplaceEventBpPointsC(int32_t newCount) {
		return ((R (*)(IEventBpPointsCEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename R = void> R RemoveEventBpPointsC() {
		return ((R (*)(IEventBpPointsCEntity*))(Il2CppBase() + 0x0))(this);
	}

};

