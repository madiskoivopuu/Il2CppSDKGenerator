#pragma once
#include <Il2Cpp/Il2Cpp.h>

class INotPursuitTargetEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "INotPursuitTargetEntity"));
	}


	template <typename T = bool> T get_isNotPursuitTarget() {
		return ((T (*)(INotPursuitTargetEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isNotPursuitTarget(bool value) {
		return ((T (*)(INotPursuitTargetEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

