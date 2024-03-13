#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPointEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPointEntity"));
	}


	template <typename T = PointComponent*> T get_point() {
		return ((T (*)(IPointEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasPoint() {
		return ((T (*)(IPointEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddPoint(Il2CppString* newName) {
		return ((T (*)(IPointEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplacePoint(Il2CppString* newName) {
		return ((T (*)(IPointEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemovePoint() {
		return ((T (*)(IPointEntity*))(Il2CppBase() + 0x0))(this);
	}

};

