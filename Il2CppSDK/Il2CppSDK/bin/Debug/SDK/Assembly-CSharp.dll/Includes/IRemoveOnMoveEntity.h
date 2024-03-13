#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRemoveOnMoveEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRemoveOnMoveEntity"));
	}


	template <typename T = bool> T get_isRemoveOnMove() {
		return ((T (*)(IRemoveOnMoveEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isRemoveOnMove(bool value) {
		return ((T (*)(IRemoveOnMoveEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

