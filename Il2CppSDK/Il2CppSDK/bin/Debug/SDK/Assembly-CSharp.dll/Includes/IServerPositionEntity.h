#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IServerPositionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IServerPositionEntity"));
	}


	template <typename T = uintptr_t> T get_serverPosition() {
		return ((T (*)(IServerPositionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasServerPosition() {
		return ((T (*)(IServerPositionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddServerPosition(float newX, float newY) {
		return ((T (*)(IServerPositionEntity*, float, float))(Il2CppBase() + 0x0))(this, newX, newY);
	}
	template <typename T = void> T ReplaceServerPosition(float newX, float newY) {
		return ((T (*)(IServerPositionEntity*, float, float))(Il2CppBase() + 0x0))(this, newX, newY);
	}
	template <typename T = void> T RemoveServerPosition() {
		return ((T (*)(IServerPositionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
