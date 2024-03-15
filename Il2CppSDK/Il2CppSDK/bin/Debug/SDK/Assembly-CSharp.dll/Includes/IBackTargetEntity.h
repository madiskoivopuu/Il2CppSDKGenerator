#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IBackTargetEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBackTargetEntity"));
	}


	template <typename R = BackTargetComponent*> R get_backTarget() {
		return ((R (*)(IBackTargetEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasBackTarget() {
		return ((R (*)(IBackTargetEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddBackTarget(int32_t newId) {
		return ((R (*)(IBackTargetEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R ReplaceBackTarget(int32_t newId) {
		return ((R (*)(IBackTargetEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R RemoveBackTarget() {
		return ((R (*)(IBackTargetEntity*))(Il2CppBase() + 0x0))(this);
	}

};

