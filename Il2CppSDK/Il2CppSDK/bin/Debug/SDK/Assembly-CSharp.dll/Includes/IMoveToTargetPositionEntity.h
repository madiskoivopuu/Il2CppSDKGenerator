#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMoveToTargetPositionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMoveToTargetPositionEntity"));
	}


	template <typename R = bool> R get_isMoveToTargetPosition() {
		return ((R (*)(IMoveToTargetPositionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isMoveToTargetPosition(bool value) {
		return ((R (*)(IMoveToTargetPositionEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

