#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IBackTargetEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBackTargetEntity"));
	}


	template <typename T = BackTargetComponent*> T get_backTarget() {
		return ((T (*)(IBackTargetEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasBackTarget() {
		return ((T (*)(IBackTargetEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddBackTarget(int32_t newId) {
		return ((T (*)(IBackTargetEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T ReplaceBackTarget(int32_t newId) {
		return ((T (*)(IBackTargetEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T RemoveBackTarget() {
		return ((T (*)(IBackTargetEntity*))(Il2CppBase() + 0x0))(this);
	}

};

