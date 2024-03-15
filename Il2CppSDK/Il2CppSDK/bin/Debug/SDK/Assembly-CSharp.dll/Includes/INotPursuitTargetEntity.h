#pragma once
#include <Il2Cpp/Il2Cpp.h>

class INotPursuitTargetEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "INotPursuitTargetEntity"));
	}


	template <typename R = bool> R get_isNotPursuitTarget() {
		return ((R (*)(INotPursuitTargetEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isNotPursuitTarget(bool value) {
		return ((R (*)(INotPursuitTargetEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

