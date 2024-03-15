#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRemoveOnMoveEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRemoveOnMoveEntity"));
	}


	template <typename R = bool> R get_isRemoveOnMove() {
		return ((R (*)(IRemoveOnMoveEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isRemoveOnMove(bool value) {
		return ((R (*)(IRemoveOnMoveEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

