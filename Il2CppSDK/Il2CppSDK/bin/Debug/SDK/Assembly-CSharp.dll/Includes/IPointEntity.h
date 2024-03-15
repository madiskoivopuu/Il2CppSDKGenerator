#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPointEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPointEntity"));
	}


	template <typename R = PointComponent*> R get_point() {
		return ((R (*)(IPointEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasPoint() {
		return ((R (*)(IPointEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddPoint(Il2CppString* newName) {
		return ((R (*)(IPointEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplacePoint(Il2CppString* newName) {
		return ((R (*)(IPointEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemovePoint() {
		return ((R (*)(IPointEntity*))(Il2CppBase() + 0x0))(this);
	}

};

