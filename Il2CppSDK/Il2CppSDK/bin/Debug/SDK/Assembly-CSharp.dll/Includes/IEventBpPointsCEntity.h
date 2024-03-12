#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IEventBpPointsCEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IEventBpPointsCEntity"));
	}


	template <typename T = uintptr_t> T get_eventBpPointsC() {
		return ((T (*)(IEventBpPointsCEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasEventBpPointsC() {
		return ((T (*)(IEventBpPointsCEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddEventBpPointsC(int32_t newCount) {
		return ((T (*)(IEventBpPointsCEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename T = void> T ReplaceEventBpPointsC(int32_t newCount) {
		return ((T (*)(IEventBpPointsCEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename T = void> T RemoveEventBpPointsC() {
		return ((T (*)(IEventBpPointsCEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
