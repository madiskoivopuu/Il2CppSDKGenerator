#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IServerPositionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IServerPositionEntity"));
	}


	template <typename R = ServerPositionComponent*> R get_serverPosition() {
		return ((R (*)(IServerPositionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasServerPosition() {
		return ((R (*)(IServerPositionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddServerPosition(float newX, float newY) {
		return ((R (*)(IServerPositionEntity*, float, float))(Il2CppBase() + 0x0))(this, newX, newY);
	}
	template <typename R = void> R ReplaceServerPosition(float newX, float newY) {
		return ((R (*)(IServerPositionEntity*, float, float))(Il2CppBase() + 0x0))(this, newX, newY);
	}
	template <typename R = void> R RemoveServerPosition() {
		return ((R (*)(IServerPositionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

