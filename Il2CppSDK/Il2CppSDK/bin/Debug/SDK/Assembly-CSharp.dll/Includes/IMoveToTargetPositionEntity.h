#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMoveToTargetPositionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMoveToTargetPositionEntity"));
	}


	template <typename T = bool> T get_isMoveToTargetPosition() {
		return ((T (*)(IMoveToTargetPositionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isMoveToTargetPosition(bool value) {
		return ((T (*)(IMoveToTargetPositionEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

}
