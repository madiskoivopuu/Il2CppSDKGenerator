#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IClosedDurationEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IClosedDurationEntity"));
	}


	template <typename R = ClosedDurationComponent*> R get_closedDuration() {
		return ((R (*)(IClosedDurationEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasClosedDuration() {
		return ((R (*)(IClosedDurationEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddClosedDuration(float newValue) {
		return ((R (*)(IClosedDurationEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceClosedDuration(float newValue) {
		return ((R (*)(IClosedDurationEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveClosedDuration() {
		return ((R (*)(IClosedDurationEntity*))(Il2CppBase() + 0x0))(this);
	}

};

