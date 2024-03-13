#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IClosedDurationEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IClosedDurationEntity"));
	}


	template <typename T = ClosedDurationComponent*> T get_closedDuration() {
		return ((T (*)(IClosedDurationEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasClosedDuration() {
		return ((T (*)(IClosedDurationEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddClosedDuration(float newValue) {
		return ((T (*)(IClosedDurationEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceClosedDuration(float newValue) {
		return ((T (*)(IClosedDurationEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveClosedDuration() {
		return ((T (*)(IClosedDurationEntity*))(Il2CppBase() + 0x0))(this);
	}

};

